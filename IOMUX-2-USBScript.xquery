xquery version "3.0";

declare namespace nm = "http://dblfuzzr.com/iomux2uboot/";


declare function nm:flash_header_prolog()
{
<node>
#include &lt;config.h>
#include &lt;asm/arch/mx6.h>

#ifdef	CONFIG_FLASH_HEADER
#ifndef CONFIG_FLASH_HEADER_OFFSET
// error "Must define the offset of flash header"
#endif

#define CPU_2_BE_32(l) \
       ((((l) &amp; 0x000000FF) &lt;&lt; 24) | \
	(((l) &amp; 0x0000FF00) &lt;&lt;  8)  | \
	(((l) &amp; 0x00FF0000) &lt;&lt;  8)  | \
	(((l) &amp; 0xFF000000) &lt;&lt;  24))

#define MXC_DCD_ITEM(i, addr, val)   \
dcd_node_##i:                        \
        .word CPU_2_BE_32(addr) ;     \
        .word CPU_2_BE_32(val)  ;     \
)
</node>


};

declare function nm:signal($c) 
{


for $x in  $c//SignalDesign
    where contains($x/@Alias,"I2C") or contains($x/@Name,"I2C")
    order by $x/@Alias
    return  <node>
// { concat(data($x/@Name),' [',data($x/@Alias),'] Ball:',data($x/Routing/@ball) )},            
             { for $r in $x//Register
               return <r>
// {data($r/@Name)},
:write {data($r/@Address)},{data($r/@Value)}

                      </r>                     
             }
        &#xa; </node>       
};


declare function nm:dram($c)
{

for $x in  $c//write
    return  <node>
:write {data($x/@addr)} --  {data($x/@val)}
        &#xa; </node>       
};
    
    

declare variable $dram external;
declare variable $iomux external;
nm:flash_header_prolog() union
nm:signal($iomux//PinMuxDesign) union 
<node>DramScript</node> union 
nm:dram($dram)

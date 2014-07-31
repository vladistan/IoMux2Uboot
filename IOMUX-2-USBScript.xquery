xquery version "3.0";

declare namespace nm = "http://dblfuzzr.com/iomux2uboot/";

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
nm:signal($iomux//PinMuxDesign) union <node>DramScript</node> union nm:dram($dram)

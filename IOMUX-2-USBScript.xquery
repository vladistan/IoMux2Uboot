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

    
    

declare variable $input-context external;
nm:signal($input-context//PinMuxDesign)

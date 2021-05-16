commandArray = {}
    
for deviceName,deviceValue in pairs(devicechanged) do
    
    if (deviceName=='Rolety Wszystkie') then
        
       if deviceValue=='Closed' then
        commandArray['Rolety Biuro']='On'
        commandArray['Rolety Sypialnia']='On'
        commandArray['Rolety Salon']='On'
           print ("Rolety sterowanie Otworz");
            print(deviceValue)
            
        else
            if deviceValue=='Open' then
            commandArray['Rolety Biuro']='Off'
            commandArray['Rolety Sypialnia']='Off'
            commandArray['Rolety Salon']='Off'
           print ("Rolety sterowanie zamknij");
            print(deviceValue)
            
       else
 
          if (deviceName=='Rolety Wszystkie') then
       commandArray['Rolety Biuro']=deviceValue
       commandArray['Rolety Sypialnia']=deviceValue
       commandArray['Rolety Salon']=deviceValue
       print ("Rolety sterowanie procentowe");
            print(deviceValue)
          
end 
end 
end 
end
end
return commandArray
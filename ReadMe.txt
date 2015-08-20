Description
This code is used to retrieve a local IP address (eth0). 


Task Discussion
First, use the popen function with settings "/sbin/ifconfig eth0" to get ip address info like execute ifconfig in terminal. 
After received data from eth0, use stringtokenizer to split the data from whole eth0 to get only the ip address and display it. 


Task Assign
Chua Cheok Yaw - Split the info from eth0 using tokenizer to get only the ip address display.
Yap Wei Loon - perform the providing code(popen function) and complete it to get the ifconfig info.

# Linux-SMART-Command

**ABSTRACT**

Get S.M.A.R.T Information for the SATA/NVMe SSD drive.

-------------------------

This sample code demonstrates how to get the disk information of the solid state drives (SSD) in Linux, \
include **identify information** (model name, firmware version and serial number, etc.) , \
**S.M.A.R.T information** (temperature, erase count and power-on hours, etc.) and **Health information**. 

Supports SATA and NVMe SSD devices. 

#
  **Build Guide**
  
  - **compile the executable file**
  
    ```$g++ -Wformat=0 -std=c++11 -static main.cpp nvme_util.cpp -o SMARTQuery_Cmd```
    
  - **use <chmod +x> for sure you have proper right to execute the executable file**

    ```$chmod +x SMARTQuery_Cmd```\
    ```$sudo ./SMARTQuery_Cmd```
    
#
  **Usage**
  
  - **SMARTQuery_Cmd**\
    show all information of devices
    
  - **SMARTQuery_Cmd [option] \<device>**\
    show specific information of the device by option
    - Options:
      - -all: list all information of the device
      - -id: get id table information of the device
      - -smart: get S.M.A.R.T table information of the device
      - -health: get the health information of the device
      - -license: display the End User License Agreement and Statement
      - -v: display the application version

#
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-35-06.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-34-43.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-34-21.png" width=70% height=70%>

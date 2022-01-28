# SMARTQuery-Linux-Command

**ABSTRACT**

Get S.M.A.R.T Information for the SATA/NVMe drive.

-------------------------

This sample code demonstrates how to get the disk information of the solid state drives (SSD) in Linux, \
include **identify information** (model name, firmeare version and serial number, etc.) \
and **S.M.A.R.T information** (temperature, erase count and power-on hours, etc.). \

Supports SATA and NVMe interface devices. 

#
  **Build Guide**
  
  - **compile the executable file**
  
    ```$g++ -Wformat=0 -std=c++11 -static main.cpp nvme_util.cpp -o ScopePro_Cmd```
    
  - **use <chmod +x> for sure you have proper right to execute the executable file**

    ```$chmod +x ScopePro_Cmd```\
    ```$sudo ./ScopePro_Cmd```
    
#
  **Usage**
  
  - **ScopePro_Cmd**\
    show all information of devices
    
  - **ScopePro_Cmd[option] \<device>**\
    show specific information of the device by option
    - Options:
      - -all: list all information of the device
      - -id: list id table information of the device
      - -smart: list S.M.A.R.T table information of the device
      - -health: list the health information of the device
      - -license: display the End User License Agreement and Statement
      - -v: display the application version

#
  <img src="https://github.com/transcend-information/ScopePro-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-05-41.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/ScopePro-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-06-06.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/ScopePro-Linux-Command/blob/main/imgs/Screenshot%20from%202022-01-28%2015-06-38.png" width=70% height=70%>
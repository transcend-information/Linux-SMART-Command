# Monitor SSD health and SMART status in Linux

-------------------------
Get S.M.A.R.T Information for the Transcend Embedded SATA/NVMe SSD product.

This sample code demonstrates how to get the disk information of the solid state drives (SSD) in Linux, \
include **identify information** (model name, firmware version and serial number, etc.) , \
**S.M.A.R.T information** (temperature, erase count and power-on hours, etc.) and **Health information**. 

**Note : The project works for Transcend Embedded SSD products.**

#
  **Build Guide**
  -------------------------
  - **compile the executable file**
```
    g++ -Wformat=0 -std=c++11 -static main.cpp nvme_util.cpp -o SMARTQuery_Cmd
```
    
  - **use <chmod +x> for sure you have proper right to execute the executable file**

```
    chmod +x SMARTQuery_Cmd
```
```
    sudo ./SMARTQuery_Cmd
```
    
#
  **Usage**
  -------------------------
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

   For NVMe SSD :
```
 sudo ./SMARTQuery_Cmd [option] /dev/nvme0n1
``` 
   
   For SATA SSD :
```
 sudo ./SMARTQuery_Cmd [option] /dev/sda
``` 

#
Get ID , SMART and Health information by following command for NVMe SSD.

  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/nvmeid.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/nvmesmart.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/nvmehealth.png" width=70% height=70%>

Get ID , SMART and Health information by following command for SATA SSD.
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/sataid.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/satasmart.png" width=70% height=70%>
  
  <img src="https://github.com/transcend-information/SMARTQuery-Linux-Command/blob/main/imgs/satahealth.png" width=70% height=70%>

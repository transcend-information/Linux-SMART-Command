#ifndef MAIN_H
#define MAIN_H

#endif // MAIN_H
#include "nvme_util.h"
#include "ata_io.h"

#include <string>
#include <vector>

using namespace std;
const char * format_with_thousands_sep(char * str, int strsize, uint64_t val,
                                       const char * thousands_sep = 0);
const char * format_capacity(char * str, int strsize, uint64_t val,
                             const char * decimal_point = 0);

const char * format_char_array(char * str, int strsize, const char * chr, int chrsize);
template<size_t STRSIZE, size_t CHRSIZE>
inline const char * format_char_array(char (& str)[STRSIZE], const char (& chr)[CHRSIZE])
  { return format_char_array(str, (int)STRSIZE, chr, (int)CHRSIZE); }


#define VERSION "1.12.0"

void listAllDeviceInfo();
void DumpSATAAllInfo(string deviceStr);
int DumpSATAIDInfo(string deviceStr);
int DumpSATASMARTInfo(string deviceStr);
int DumpSATAHealthInfo(string deviceStr);

void DumpAllNVMEInfo(string deviceStr);
int DumpNVMEIDInfo(string deviceStr);
int DumpNVMESMARTInfo(string deviceStr);
int DumpNVMEHealthInfo(string deviceStr);
int DumpNVMEBadblock(string deviceStr);
int DumpNVMEWAI(string deviceStr);

char *grabString(char* data, int start_pos, int length);
char* grabHex(char* data, int start_pos, int length);
double hexArrToDec(char *data, int start_pos, int length);

void showGuide();

int isSupport(string model);

vector<string>  get_SMART_Data_NVMe(nvme_Device * nvmeDev,int fd );
vector<string>  get_SMART_Data_SDCard(string deviceStr, int fd );





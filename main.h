#ifndef MAIN_H
#define MAIN_H
#endif // MAIN_H

#include "nvme_util.h"
#include <cstring>
#include <string>
#include <vector>

#define VERSION "1.12.0"
#define BUFSIZE 512

using namespace std;

const char *format_with_thousands_sep(char * str, int strsize, uint64_t val, const char * thousands_sep = 0);
const char *format_capacity(char * str, int strsize, uint64_t val, const char * decimal_point = 0);
const char *format_char_array(char * str, int strsize, const char * chr, int chrsize);

template<size_t STRSIZE, size_t CHRSIZE>
inline const char * format_char_array(char (& str)[STRSIZE], const char (& chr)[CHRSIZE])
  { return format_char_array(str, (int)STRSIZE, chr, (int)CHRSIZE); }

void listAllDeviceInfo();

void getSATAAllDeviceInfo(string deviceStr);
int getSATAIDInfo(string deviceStr);
int getSATASMARTInfo(string deviceStr);
int getSATAHealthInfo(string deviceStr);

void getNVMEAllDeviceInfo(string deviceStr);
int getNVMEIDInfo(string deviceStr);
int getNVMESMARTInfo(string deviceStr);
int getNVMEHealthInfo(string deviceStr);
int getNVMEBadblock(string deviceStr);
int getNVMEWAI(string deviceStr);

void showGuide();

vector<string>  get_SMART_Data_NVMe(nvme_Device *nvmeDev, int fd);

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

string LogPath;
//bool WriteLog;

#define SD_BLOCK_SIZE 512 /* data block size for CMD56 */
/* From kernel linux/mmc/core.h */
#define MMC_RSP_PRESENT	(1 << 0)
#define MMC_RSP_136	(1 << 1)		/* 136 bit response */
#define MMC_RSP_CRC	(1 << 2)		/* expect valid crc */
#define MMC_RSP_BUSY	(1 << 3)		/* card may send busy */
#define MMC_RSP_OPCODE	(1 << 4)		/* response contains opcode */

#define MMC_CMD_AC	(0 << 5)
#define MMC_CMD_ADTC	(1 << 5)

#define MMC_RSP_SPI_S1	(1 << 7)		/* one status byte */
#define MMC_RSP_SPI_BUSY (1 << 10)		/* card may send busy */

#define MMC_RSP_SPI_R1	(MMC_RSP_SPI_S1)
#define MMC_RSP_SPI_R1B	(MMC_RSP_SPI_S1|MMC_RSP_SPI_BUSY)

#define MMC_RSP_R1	(MMC_RSP_PRESENT|MMC_RSP_CRC|MMC_RSP_OPCODE)
#define MMC_RSP_R1B	(MMC_RSP_PRESENT|MMC_RSP_CRC|MMC_RSP_OPCODE|MMC_RSP_BUSY)

#define SD_GEN_CMD 56 /* adtc, R1 */
#define SD_BLOCK_SIZE 512 /* data block size for CMD56 */
#define MMC_RSP_R2 (MMC_RSP_PRESENT|MMC_RSP_136|MMC_RSP_CRC)
#define MMC_CMD_BCR (3 << 5)

#define VERSION "1.12.0"

void ListAllDeviceInfo();
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





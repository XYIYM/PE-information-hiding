#pragma once

#ifdef BUILD_TEST
#define API_SYMBOL __declspec(dllexport)	//��������
#else
#define API_SYMBOL __declspec(dllimport)	//���뺯��
#endif
//�궨�壬�������ߵ���//
//PE
extern "C" API_SYMBOL char* duan_name(char *filename);
extern "C" API_SYMBOL void jiami(char* Password, char* Plaintext, char* filename, int duansum);
extern "C" API_SYMBOL char* jiemi(char* filename);
extern "C" API_SYMBOL void tiqu(char* filename, int duansum, int size);
extern "C" API_SYMBOL void rc4_init(unsigned char* s, unsigned char* key, unsigned long Len);
extern "C" API_SYMBOL void rc4_crypt(unsigned char* s, unsigned char* Data, unsigned long Len);
//��������//#pragma once

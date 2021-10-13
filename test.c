#define TEST	1

#include "test.h"

int test(char* buff)
{
	int i;
	for(i = 0; buff[i] != '\0'; i++);	
	return i;
}
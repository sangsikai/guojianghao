#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<limits.h>
#include<assert.h>
#include<sys/types.h>
#define LOOP 10000000
#define NUM 4
#define NT 100
#define check_error(return_val,msg){	\
	if(return_val !=0){					\
		fprintf(stderr,"%s:%s\n",msg,sterror(return_val));\
		exit(-1);\
	}\
}

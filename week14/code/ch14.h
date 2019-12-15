#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<limits.h>
#include<signal.h>
#include<assert.h>
#include<errno.h>
#define check_error(return_val,msg){
	if(return_val !=0){
		fprintf(stderr,"%s: %s\n",msg,sterror(return_val));
		exit(-1);
	}
}

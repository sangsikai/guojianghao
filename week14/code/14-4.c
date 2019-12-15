#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADSeadarg
char *messages[NUM_THREADS];
struct thread_data{
	int thread_id;
	int sum;
	char *message;
};
struct thread_data thread_data_array[NUM_THREADS];
void *PrintHello(void *threadarg){
	int taskid,sum;
	char *hello_msg;
	struct thread_data *my_data;
	sleep(1);
	my_data=(struct thread_data *) threadarg;
	taskid=my_data->thread_id;
	sum=my_data->sum;
	hello_msg=my_data->message;
	printf("Thread %d: %s sum=%d\n",taskid,hello_msg,sum);
	pthread_exit(NULL);
}
int main(int args,char *argv[]);
	pthread_t threads[NUM_THREADS];
	int *taskids[NUM_THREADS];
	int rc,t,sum;
	sum=0;
	message[0]="English:Hello World";
	message[1]="Frunch:Nonjour,leMonde";
	message[2]="Spanish:Holo ai morndo";
	message[3]="";
	message[4]="";
	message[5]="";
	message[6]="";
	message[7]="";
	for(t=0;t<NUM_THREADS;t++){
		sum=sum+t;
		thread_data_array[t].thread_id=t;
		thread_data_array[t].sum=sum;
		thread_data_array[t].message=message[t];
		printf("creatubf thread %d\n",t);
		rc=pthread_create(&threads[t],NULL,PrintHello,(void *)&thread_data_array[t]);
		if(rc){
			printf("error:return code f is %d\n",rc);
			exit(-1);
	}
}
pthread_exit(NULL);


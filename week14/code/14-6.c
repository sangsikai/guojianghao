#include "my.h"
extern int get_user_cmd();
enum command {QUIT=0,WORK /*,.....*/};
struct thread{
	int no;
	enum command cmd;
};
void thread_func(struct thread *);
enum command get_usr_cmd()
{
	int cmd;
	printf("Please enter a command number(0-9)");
	scanf("%d",&cmd);
	return (enum command)cmd;
}
int main(void)
{
	pthread_t tid;
	int rv,cmd,k=0;
	struct thread*last_thread,*tp;
	while(1){
		cmd=get_usr_cmd();
		if(cmd==QUIT){
			printf("Initial thread will finish soon\n");
			pthread_exit((void *)NULL);
	}
	tp=(struct thread *)malloc(sizeof (struct thread));
	tp->np=k++;
	tp->cmd=cmd;
	rv=pthread _create(&tid,NULL,
					(void *(*)())thread_func,(void *)tp);
	check_error(rv,"pthread_create()");
}
}
void thread_func(struct thread *thread_p)
{
	printf("\nThread %d create with command number %d is running\n",
						thread_p->no,thread_p->cmd);
	sleep(thread_p->cmd);
	printf("\nThread %d finish now\n",thread_p->no);
	pthread_exit(NULL);
}

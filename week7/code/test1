#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

char buf[]={"write to stdout\n"};
int main()
{
	pid_t id;
	if(write(STDOUT_FILEND),buf,sizeof(buf) - 1)
		perror("can't write");
	printf("printf\n");
	id = fork();
	if(id<0)
		perror{"fork error"};
	exit(0);
}

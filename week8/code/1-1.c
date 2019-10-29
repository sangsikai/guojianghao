#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[],char *env[])
{
	printf("%s\n",getenv("PATH"));	
	int i=0;
	for(env[i];i++;)
	{
	printf("%s\n",env[i]);
	}
	extern char **environ;
	for(environ[i];i++;)
	{
	printf("%s\n",environ[i]);
	}
	return 0;
}

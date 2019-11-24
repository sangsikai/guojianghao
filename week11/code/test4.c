#include "my.h"
int main()
{
	int pid1,pid2,s1,p1,p2,s2;
	if(((pid1=fork())&&(pid2=fork()))<0)
		{
			perror("failed to fork\n");
			return -1;
		}
	else if(pid1==0)
}

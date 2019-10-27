#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<syslog.h>
#include<string.h>
#include<stdlib.h>
void menu(void);
void openfile(void);
void writefile(void);
void readfile(void);
void alterfile(void);
void checkfile(void);
int main()
{
	int choose;
	int suliangjin=1;
	menu();
	scanf("%d",&choose);
	while(choose!=0)
	{
		switch(choose)
		{
			case 1:openfile();break;
			case 2:writefile();break;
			case 3:readfile();break;
			case 4:alterfile();break;
			case 5:checkfile();break;
		}
		menu();
		scanf("%d",&choose);
	}
		return 0;
}
void menu(void)
{
	printf("******************************\n");
	printf("0.exit\n");
	printf("1.open new file\n");
	printf("2.write file\n");
	printf("3.read file\n");
	printf("4.alter power\n");
	printf("5.checkpower\n");	
	printf("*****************************\n");
	printf("Please input your choice(0-6):");
}
void openfile(void)
{
	int fd;
	if((fd=open("/tmp/hello.c",O_CREAT|O_TRUNC|O_RDWR,0666))<0)
		perror("open");
	else
		printf("open file:hello,c %d\n",fd);
	if(close(fd)<0)
		perror("close");
	else
		printf("Close hello.c\n");
}
void writefile(void)
{
	int fd,size,len;
	char *buf="Hello!I'm writing to this file";
	len=strlen(buf);
	if((fd=open("/tmp/hello.c",O_CREAT|O_TRUNC|O_RDWR,0666))<0)
		perror("open");
	else
		printf("open file:hello,c %d\n",fd);
	if((size=write(fd,buf,len))<0)
		perror("write");
	else
		printf("Write:%s\n",buf);
	if(close(fd)<0)
		perror("close");
	else
		printf("Close hello.c\n");
}
void readfile(void)
{
	int fd,size;
	char b[10];
	if((fd=open("/tmp/hello.c",O_CREAT|O_TRUNC|O_RDWR,0666))<0)
		perror("open");
	else
		printf("open file:hello,c %d\n",fd);
	lseek(fd,0,SEEK_SET);
	if((size=read(fd,b,10))<0)
		perror("read");
	else
		printf("read from file:%s\n",b);
	if(close(fd)<0)
		perror("close");
	else
		printf("Close hello.c\n");
}
void alterfile(void)
{
	int a;
	printf("1.read,write,work\n");
	printf("2.read\n");
	printf("3.write\n");
	printf("4.work\n");
	printf("please input your choice\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:chmod("/tmp/hello.c",S_IRWXU);printf("ok\n");break;
		case 2:chmod("/tmp/hello.c",S_IRUSR);printf("ok\n");break;
		case 3:chmod("/tmp/hello.c",S_IWUSR);printf("ok\n");break;
		case 4:chmod("/tmp/hello.c",S_IXUSR);printf("ok\n");break;
		default:printf("wrong\n");
	}
}
void checkfile(void)
{
	char *path="/bin/ls";
	char *argv[4]={"ls","-1",NULL};
	
}

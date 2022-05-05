#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
int main()
{
int fd[2];

int a,n;
char buffer[100];
pid_t p;
pipe(fd);

a=fork();
if(a>0)
{
printf("\nparent writting to the child");
write(fd[1],"hello\n",6);
}
else
{
printf("\nChild prinintng reciceved value\n");
n=read(fd[0],buffer,100);
write(1,buffer,n);
}

}
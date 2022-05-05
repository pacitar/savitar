#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<signal.h>
void handler()
{
write(1,"\nI wont die :)",13);
}
int main()
{
signal(SIGINT,handler);
while(1)
{
printf("\nWasting your cycles:%d",getpid());
sleep(1);
}
}

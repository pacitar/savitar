#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>

int main()
{
int new_fd,old_fd;
old_fd=open("test.txt",O_RDONLY);
printf("old fd is:%d",old_fd);
new_fd=dup2(old_fd,8);
printf("Neew fd is:%d",new_fd);

}

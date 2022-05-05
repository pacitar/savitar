#include<sys/types.h>
#include<stdlib.h>
#include<sys/shm.h>
#include<string.h>
int main()

{
char buff[20];
void * shared_memory;
int shmid;
shmid=shmget((key_t )2345,1024,0666);

printf("\nKey of shared memory is:%d",shmid);

shared_memory=shmat(shmid,NULL,0);
printf("\nProcess attched at %p",shared_memory);
printf("\nread data from shared memeory: %s",(char*)shared_memory);




}

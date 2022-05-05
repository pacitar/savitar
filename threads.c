#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
thread_function(int x[]);//we need to declare this function first
int i,j;

int main()
{
    int x[2]={1,2};
    char * result;
    pthread_t mythread;//declare a thread

    pthread_create(&mythread,NULL,thread_function,x);//function to create a thread

    pthread_join(mythread,&result);//stops main function untill thread is finished. If pthread_join not included then main function and thread will work simultaneously

    printf("\nInside main program:");
    for(j=20;j<25;j++)
    {
        printf("\n%d",j);
        sleep(1);

    }

    printf("\nThread has returned: %s",(char*)result);

    
    
}
thread_function(int x[])
    {
        printf("\nInside Thread");
        
        printf("\nsum is %d",x[0]+x[1]);
        pthread_exit("Sum has been calculated");
    }

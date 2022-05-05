#include<pthread.h>
#include<semaphore.h>



    func1();
    func2();

    int shared=5;
    sem_t s; //initializing semaphore

    int main()
    {
        sem_init(&s,0,1); //shared variable,sharing processes,value of s

        pthread_t thread1;
        pthread_t thread2;

        pthread_create(&thread1,NULL,func1,NULL);
        pthread_create(&thread2,NULL,func2,NULL);

        pthread_join(thread1,NULL);
        pthread_join(thread2,NULL);

        printf("\nFinal value of shared variable is:%d",shared);
        

       

    }

    func1()
    {
        int x;
        sem_wait(&s);//locks the thread so that nothing can access the shared variable while performing operations on this variable
        x=shared;
        x++;
        printf("\nLocal updation by threadn1:%d",x);
        sleep(1);
        shared=x;
        printf("\nValue of shared variable updated by thread is:%d",shared);
        sem_post(&s); //sem post releases the lock which is acquired by the sem wait
        
    }

    func2()
    {
    sem_wait(&s);
    int y=shared;
    y--;
    printf("\nLocal updation by thread 2:%d",y);
    sleep(1);
    shared=y;
    printf("\nValue of shared variable upated by thred is:%d",shared);
    sem_post(s);
    }


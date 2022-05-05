#include<stdio.h>
int main()
{
    int n,i,j;
    int at[10];
    int bt[10];
    int wt[10];
    int ta[10];
    float avgwt=0.0;
    float avtt=0.0;
    printf("\nEnter number of process:");
    scanf("%d",&n);;
    printf("\nEnter arrival time of the processes:");
   
for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
       
    }
    

    printf("\nEnter burst time of the processes:");
   
for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
       
    }
    //for calculating waiting time
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            wt[i]=at[i];
        }
        else{
             wt[i]=wt[i-1]+bt[i-1];
        }
       
    }

    for(j=0;j<n;j++)
    {
        ta[j]=wt[j]+bt[j];

    }

    for(i=0;i<n;i++)
    {
       avgwt+= wt[i];
        avtt+=ta[i];
        printf("\nprocess:%d\twaiting time:%d\tturnaroundtime:%d",i+1,wt[i],ta[i]);
    }

    

    printf("\nAverage waiting time is:%f",avgwt/3);
    printf("\nAverage turn around time is:%f",avtt/3);

}
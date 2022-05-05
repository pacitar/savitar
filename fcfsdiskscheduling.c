#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int initial;
    int seq[20];
    int totalheadmov=0;
    printf("Enter the number of requests:");
    scanf("%d",&n);

    printf("\nEnter the numbers in sequence:");
    for(i=0;i<n;i++)
    {scanf("%d",&seq[i]);}

    printf("Enter initial headd position:");
    scanf("%d",&initial);


    for(i=0;i<n;i++)
    {
        totalheadmov=totalheadmov+abs(seq[i]-initial);
        initial=seq[i];
    }
    
    printf("Total head movement is %d",totalheadmov);
    
}
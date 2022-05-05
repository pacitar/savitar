#include<stdio.h>
int main()
{
    int memsize;
    int pagesize,frameno,noofpage,offset,logicaladdr,physicaladdr;
    int choice=0;
    int p[20];
    int i;
    printf("\nEnter memory size:");
    scanf("%d",&memsize);
    printf("\nEnter pagesize:");
    scanf("%d",&pagesize);

    noofpage=memsize/pagesize;

    for(i=0;i<noofpage;i++)
    {printf("Enter pageframe for page no:%d",i+1);
    scanf("%d",&p[i]);
    }

    do
    {
        printf("\nEnter logical addres:");
        scanf("%d",&logicaladdr);

        frameno=logicaladdr/pagesize;
        offset=logicaladdr%pagesize;
        physicaladdr=(p[frameno]*pagesize)+offset;
        printf("Physical address is:%d",physicaladdr);
        printf("\ndo you want to continue:");
        scanf("%d",&choice);

        /* code */
    } while (choice==0);
    
}
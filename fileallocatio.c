#include<stdio.h>
int main()
{
    int n;
    int arr[20];
    int i;
    int start[20];

    printf("Enter the no of files:");
    scanf("%d",&n);
    printf("Entr the number of blocaks needed for feach fiels:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            start[i]=0;
        }
        else
        {
            start[i]=start[i-1]+arr[i-1];

        }


    }


  for(i=0;i<n;i++)
  {
    printf("\nfile %d, start:%d, sizeof file:%d",i+1,start[i],arr[i]);
  }


    

}
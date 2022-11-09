    #include<stdio.h>
     
    int main ()
    {
        int n,i,sum=0;
        scanf("%d",&n);
     
        int arr[1000000];
        for(i=0; i<n; i++)
        {
            scanf("%1d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            sum=sum+arr[i];
        }
         printf("%d",sum);
    }

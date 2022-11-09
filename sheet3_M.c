    #include<stdio.h>
     
    int main ()
    {
        int i,a=0,b=0,n,lowest,highest;
        scanf("%d",&n);
     
        int arr[100000];
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        lowest=arr[0];
        for(i=1; i<n; i++)
        {
            if(arr[i]<lowest)
            {
                lowest = arr[i];
                a=i;
     
            }
        }
         highest=arr[0];
        for(i=1; i<n; i++)
        {
            if(arr[i]>highest)
            {
                highest = arr[i];
                b=i;
     
            }
        }
        for(i=0; i<n; i++)
        {
            arr[a]=highest;
            arr[b]=lowest;
            printf("%d ",arr[i]);
        }
     
     
        return 0;
    }

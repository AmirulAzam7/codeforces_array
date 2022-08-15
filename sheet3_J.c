    #include<stdio.h>
     
    int main ()
    {
      int n,i,frequency=0;
      scanf("%d",&n);
     
      int arr[10000];
      for(i=0; i<n; i++)
      {
          scanf("%d",&arr[i]);
      }
     int lowest = arr[0];
     
      for(i=1; i<n; i++)
      {
          if(arr[i]<lowest)
          {
              lowest = arr[i];
          }
      }
        for(i=0; i<n; i++)
        {
            if(arr[i]==lowest)
            {
                frequency++;
            }
        }
        if(frequency%2==0)
        {
            printf("Unlucky");
        }
        else
            printf("Lucky");
     
     
        return 0;
    }

    #include<stdio.h>
    #include<math.h>
     
    int main ()
    {
      int arr[10000],i,j,k,x,n,min,sum=0;
      scanf("%d",&n);
     
      for(k=0; k<n; k++)
      {
          scanf("%d",&x);
     
     
      for(i=0; i<x; i++)
      {
          scanf("%d",&arr[i]);
      }
      min=1e9;
      sum=0;
     
      for(i=0; i<x; i++)
      {
          for(j=i+1; j<x; j++)
          {
              sum = (arr[i] + arr[j] + j) - i;
     
              if(sum<min)
              {
                  min=sum;
              }
          }
        }
        printf("%d\n",min);
      }
     
     
        return 0;
    }


    #include<stdio.h>
     
    int main ()
     
    {
       long long int n,i;
       scanf("%lld",&n);
       long long int arr[n],sum=0;
     
       for(i=0; i<n; i++)
       {
           scanf("%lld",&arr[i]);
           sum = sum + arr[i];
       }
       if(sum<0)
       {
           sum = sum*(-1);
            printf("%lld\n",sum);
       }
       else
       {
           printf("%lld\n",sum);
       }
     
     
     
        return 0;
    }

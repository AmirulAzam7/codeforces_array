    #include<stdio.h>
     
    int main ()
    {
       long long int n,i,fib[10000];
     
      scanf("%lld",&n);
     
     
        fib[1] = 0;
        fib[2] = 1;
     
        for(i=3; i<=n; i++)
        {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
     
        for(i=0; i<=n; i++)
        {
           if(i==n)
           {
               printf("%lld",fib[i]);
           }
        }
     
     
     
        return 0;
    }

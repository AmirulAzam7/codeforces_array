    #include<stdio.h>
     
    int main ()
     
    {
       long long int N,i,X,position=-1;
       scanf("%lld",&N);
       long long int A[N];
     
       for(i=0; i<N; i++)
       {
           scanf("%lld",&A[i]);
     
       }
       scanf("%lld",&X);
       for(i=0; i<N; i++)
       {
           if(X==A[i])
           {
               position = i;
               break;
       }
       }
       printf("%lld",position);
     
     
        return 0;
    }

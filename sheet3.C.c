    #include<stdio.h>
     
    int main ()
    {
        int i,N;
        scanf("%d",&N);
     
        long long int A[N];
     
        for(i=0; i<N; i++)
        {
            scanf("%lld",&A[i]);
        }
        for(i=0; i<N; i++)
        {
            if(A[i]>0)
            {
                printf("1 ");
            }
            else if(A[i]<0)
            {
                printf("2 ");
            }
            else
                printf("0 ");
        }
        return 0;
    }

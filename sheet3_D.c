#include<stdio.h>
 
int main ()
{
    long long int N,i;
    scanf("%lld",&N);
 
    long long int A[N];
 
    for(i=0; i<N; i++)
    {
        scanf("%lld",&A[i]);
    }
    for(i=0; i<N; i++)
    {
        if(A[i]<=10)
        {
            printf("A[%lld] = %lld\n",i,A[i]);
        }
    }
 
 
 
 
    return 0;

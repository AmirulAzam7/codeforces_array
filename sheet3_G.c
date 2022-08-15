    #include<stdio.h>
    int main()
    {
        int N, i, j, count=0;
        scanf("%d", &N);
        int A[N], B[N];
        for( i=0; i<N; i++ )
        {
            scanf("%d", &A[i] );
        }
        for(i=N-1,j=0; i>=0,j<N; i--,j++)
        {
           B[j]=A[i];
            }
          for(i=0; i<N; i++)
          {
              if(B[i]!=A[i])
              {
                  count++;
                  break;
              }
          }
        if(count==0)
        {
            printf("YES");
        }
        else{
            printf("NO");
        }
        return 0;
    }

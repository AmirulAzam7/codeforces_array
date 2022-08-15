    #include<stdio.h>
    int main()
    {
        int N, i, position, Min;
        scanf("%d", &N);
        int A[N];
        for( i=0; i<N; i++ )
        {
            scanf("%d", &A[i]);
        }
        Min = A[0];
        for( i=0; i<N; i++ )
        {
            if( Min>A[i] )
            {
                Min = A[i];
            }
        }
        printf("%d ", Min);
        for( i=0; i<N; i++ )
        {
            if( Min==A[i] )
            {
                position = i+1;
                printf("%d\n", position);
                break;
            }
        }
        return 0;
    }

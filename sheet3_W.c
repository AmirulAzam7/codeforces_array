    #include<stdio.h>
     
    int main ()
    {
        int r,c,i,j;
        scanf("%d %d",&r,&c);
     
        int arr[100][100];
     
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
     
        for(i=0; i<r; i++)
        {
            for(j=c-1; j>=0; j--)
            {
               printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
     
     
        return 0;
    }

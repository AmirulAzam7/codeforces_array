    #include<stdio.h>
     
    int main ()
    {
        int i,j,s,r,c,count=0;
        scanf("%d %d",&r,&c);
     
        int arr[100][100];
     
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        scanf("%d",&s);
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
               if(arr[i][j]==s)
               {
                  count++;
               }
            }
        }
        if(count==0)
        {
            printf("will take number");
        }
        else
        {
            printf("will not take number");
        }
     
     
     
        return 0;
    }

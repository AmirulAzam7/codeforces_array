#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    long long int sum1=0,sum2=0;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                sum1 = sum1 + arr[i][j];
            }
            if((i+j)==n-1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }
     int finalsum = abs(sum1-sum2);

     cout<<finalsum<<endl;



    return 0;
}

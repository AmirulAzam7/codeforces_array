#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,arr[10000],maxxx,cnt,flag;
    cin>>t;

    for(int i=0; i<t; i++)
    {
        cin>>n;
        flag=0;

        for(int m=0; m<n; m++)
        {
            cin>>arr[m];
        }

        for(int sz=1; sz<=n; sz++)
        {
            for(int j=0; j<=n-sz; j++)
            {
                maxxx=-1000000;
                cnt=0;
                for(int z=j; z<j+sz; z++)
                {
                    if(maxxx<=arr[z])
                    {
                        maxxx = arr[z];
                    }
                    else
                    {
                        cnt++;
                    }
                }
                if(cnt==0)
                {
                    flag++;
                }
            }
        }
        cout<<flag<<endl;
    }



    return 0;
}

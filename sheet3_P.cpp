#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,arr[10000],cnt=0,flag=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int j=1; j>0; j++)
    {

        cnt = 0;
        for(int k=0; k<n; k++)
        {
            if(arr[k]%2==0)
            {
                arr[k]=arr[k]/2;
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
        else
        {
            break;
        }
    }
     cout<<flag<<endl;



    return 0;
}

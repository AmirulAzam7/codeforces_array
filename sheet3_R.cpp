#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,arr1[10000],arr2[10000],count=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    for(int j=0; j<n; j++)
    {
        cin>>arr2[j];
    }

    for(int k=0; k<n; k++)
    {
        for(int z=0; z<n; z++)
        {
            if(arr1[k]==arr2[z])
            {
                count++;
                arr2[z]=-1;
                break;
            }
        }
    }
    if(count==n)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }




    return 0;
}

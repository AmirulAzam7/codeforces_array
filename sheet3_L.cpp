    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        long long int t,n,arr[10000],maxxx;
        cin>>t;
     
        for(int i=0; i<t; i++)
        {
            cin>>n;
     
            for(int m=0; m<n; m++)
            {
                cin>>arr[m];
            }
     
            for(int sz=1; sz<=n; sz++)
            {
                for(int j=0; j<=n-sz; j++)
                {
                    maxxx = arr[j];
                    for(int z=j; z<j+sz; z++)
                    {
                        if(arr[z]>maxxx)
                        {
                            maxxx = arr[z];
                        }
                    }
                    cout<<maxxx<<" ";
     
                }
            }
            cout<<endl;
        }
     
     
     
        return 0;
    }

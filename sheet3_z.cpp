#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int k,s;
    cin>>k>>s;
    int flag=0;

    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            int z = s-(i+j);

            if(z>=0 && z<=k)
            {
                flag++;
            }
        }
    }
    cout<<flag<<endl;



    return 0;
}

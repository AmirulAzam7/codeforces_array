#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,r;
    cin>>n;

    for(int i=0; i<n; i++)
    {
       cin>>t;
       if(t==0)
       {
           cout<<0;
       }
     while(t>0)
     {
         r = t%10;
         t = t/10;

         cout<<r;
         if(t!=0)
         {
             cout<<" ";
         }
     }
     cout<<endl;

    }





    return 0;
}

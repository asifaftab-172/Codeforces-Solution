#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,ans=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            ans=(ans/x+1)*x;
        }
        cout<<ans<<endl;
    }
}

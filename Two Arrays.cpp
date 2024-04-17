#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int arra[n],arrb[n];
        for(int i=0;i<n;i++)
        {
            cin>>arra[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>arrb[i];
        }
        sort(arra,arra+n);
        sort(arrb,arrb+n);
        bool a=true;
        for(int i=0;i<n;i++)
        {
            if(arrb[i]<arra[i] || arrb[i]>(arra[i]+1))
            {
                a=false;
            }
            
        }
        cout<<(a?"YES":"NO")<<endl;
    }
}

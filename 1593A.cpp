#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        
        
        
        int n;
        n=max(a,max(b,c));
        bool tie = (((a == n) + (b == n) + (c == n)) > 1);
        int u,v,w;
        u=(n==a)?tie:(n-a+1);
        v=(n==b)?tie:(n-b+1);
        w=(n==c)?tie:(n-c+1);
        cout<<u<<" "<<v<<" "<<w<<endl;
        
    }
}

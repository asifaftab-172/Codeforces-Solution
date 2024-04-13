#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr1[n],arr2[m];
        long long int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
            sum1+=arr1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>arr2[i];
            sum2+=arr2[i];
        }
        if(sum1>sum2)
        {
            cout<<"Tsondu"<<endl;
        }
        else if(sum1<sum2)
        {
            cout<<"Tenzing"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+t);
    int ans=0;
    for(int i=0;i<t;i++)
    {
        if(arr[0]>1)
        {
            ans=1;
            break;
        }
        else if((arr[i]-arr[i-1])>1)
        {
            ans=arr[i-1]+1;
            break;
        }
    }
    if(ans<=0)
    {
        ans=arr[t-1]+1;
    }
    cout<< ans;
   
}

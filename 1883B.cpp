#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[26]={0};
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            ++arr[s[i]-'a'];
        }
        int cnt=0;
        for(int i=0;i<26;i++)
        {
            cnt+=arr[i]%2;
        }
       cout<< (cnt<=k+1? "YES":"NO")<<endl; 
    }
}

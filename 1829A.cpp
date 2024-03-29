#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
       string s;
       int count=0;
       cin>>s;
       string target= "codeforces";
       for(int i=0;i<s.length();i++)
       {
          if(s[i]!=target[i])
          {
              count=count+1;
          }
       }
       cout<<count<<endl;
    }


}

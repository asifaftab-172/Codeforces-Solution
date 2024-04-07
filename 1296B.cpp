#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum,cash_back;
        cin>>n;
        sum=n;cash_back=0;
        if(n<10)
        {
            cout<<n<<endl;
        }
        else
        {
          while(n>=10)
          {
            cash_back=n/10;
            n=n%10;
            n=n+cash_back;
            sum+=cash_back;
          }
           cout<<sum<<endl;
        }
       
    }
}

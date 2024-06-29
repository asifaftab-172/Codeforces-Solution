#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b;
    int passenger=0,max_passenger=0;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(i==0)
        {
            passenger=b;
            max_passenger=b;
        }
        else{
            passenger=passenger-a+b;
            if(passenger>max_passenger)
            {
                max_passenger=passenger;
            }
        }
    }
    cout<<max_passenger<<endl;
}

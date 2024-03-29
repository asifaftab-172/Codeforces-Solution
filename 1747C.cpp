#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;

    while(t)
    {
        long long int n;
        cin>>n;
        long long int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int min=*(min_element(arr,arr+n));
        int index=find(arr,arr+n,min)-arr;

        if(index==0)
        {
            cout<<"Bob"<<endl;
        }
        else
        {
            cout<<"Alice"<<endl;
        }

        t--;
    }

}

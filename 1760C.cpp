#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Read the number of test cases

    while (t--)
    {
        int l;
        cin >> l; // Read the length of the array
        int arr[l],b[l];

        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
            b[i]=arr[i]; // Read the strengths of participants
        }

        sort(b,b+l);
        

        for (int i = 0; i < l; i++)
        {
            if(arr[i]!=b[l-1])
            {
                cout<<(arr[i]-b[l-1])<<" ";
            }
            else
            {
                cout<<(arr[i]-b[l-2])<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

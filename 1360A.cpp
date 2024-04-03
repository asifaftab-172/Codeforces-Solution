#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int ans=0;
        ans=min(max(2*a,b),max(2*b,a));
        ans*=ans;
        cout<<ans<<endl;
      }
    
}

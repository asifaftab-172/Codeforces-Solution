#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int k = 0, l = 0;
        int b = 0;
        char arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 'U') {
                l += 1;
            } else if (arr[i] == 'R') {
                k += 1;
            } else if (arr[i] == 'D') {
                l -= 1;
            } else if (arr[i] == 'L') {
                k -= 1;
            }

            if (k == 1 && l == 1) {
                b=8;
            }
        }

        if (b==8) {
            cout << "YES" << endl;
            b=0;
        }
        else{
            cout<<"NO"<<endl;
            }
    }

    return 0;
}

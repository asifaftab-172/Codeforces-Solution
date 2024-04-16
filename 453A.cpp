#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int m, n; 
	cin >> m >> n; 
	double ans = 0;
	for(double i = 1; i <= m; i++) 
	{
		double a = i / (double)m;
		double b = (i-1)/(double)m;
		ans += (i * (pow(a,n) - pow(b,n)));
	}
	cout<<fixed<<setprecision(8)<<ans<<endl;
}

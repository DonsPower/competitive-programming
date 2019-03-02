#include <bits/stdc++.h>
using namespace std;
int main() {
	unsigned long long int n;
	cin>>n;
	unsigned long long int res=n/2;
	unsigned long long int res2=res^n;
	cout<<res2;
	return 0;
}

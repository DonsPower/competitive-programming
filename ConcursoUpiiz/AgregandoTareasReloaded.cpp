#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,p;
	cin>>n>>p;
	int cont=0;
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		if(num>p)cont++;
	}
	cout<<cont;

	return 0;
}

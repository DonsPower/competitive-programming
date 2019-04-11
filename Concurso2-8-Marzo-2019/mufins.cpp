//Mufins
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,k;
	cin>>n;
	cin>>k;
	
	int res=n/k;
	int res3=k*res;
	int res4=n-res3;
	if(res4==0){
		cout<<res;
		
	}else{
		cout<<res+res4;
	}
	
	return 0;
}

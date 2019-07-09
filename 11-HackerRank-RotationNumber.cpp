#include <bits/stdc++.h>

using  namespace std;
vector<int>arr;
vector<int>aux;
int main(){
	int a,b,c;
	cin>>a>>b;
	
	for(int i=0;i<a;i++){
		cin>>c;
		arr.push_back(c);
	}
	for(int j=b;j<a;j++){
		aux.push_back(arr[j]);
	}
	for(int ii=0;ii<b;ii++){
		aux.push_back(arr[ii]);
	}
	for(int jj=0;jj<aux.size();jj++){
		cout<<aux[jj]<<" ";
	}
	
	return 0;
}

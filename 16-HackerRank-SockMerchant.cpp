#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
	int cont=0;
    for(int i=0;i<ar.size();i++){
    
		for(int j=i+1;j<ar.size();j++){
	
			if(ar[i]==ar[j]){
			
				ar.erase(ar.begin()+j);
				cont++;
				break;
			}
		}
    }
	return cont;
}

int main(){
	int a,al;
	vector<int>alo;
	
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>al;
		alo.push_back(al);
	}
	int resu=sockMerchant(a,alo);
	cout<<resu;	
	return 0;
}

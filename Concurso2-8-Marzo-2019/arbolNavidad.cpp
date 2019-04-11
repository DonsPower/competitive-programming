#include <bits/stdc++.h>
using namespace std;

int main(){
int i,j,n;
	cin>>n;
	n+=1;
	for(int k=1;k<(2*n)/2;k++){
		cout<<" ";
	}cout<<"*"<<endl;
	
	for(i=2;i<=n;i++){
		
		for(int l=1;l<=n-i;l++){
			
		
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++){
				
				cout<<"o";	
		 }
			cout<<endl;
	}

 }



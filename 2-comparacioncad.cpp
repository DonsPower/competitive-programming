#include <bits/stdc++.h>


using namespace std;
int main() {
	int a[3];
	int b[3];
	int contadora=0, contadorb=0;
	
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
		for(int j=0;j<3;j++){
		cin>>b[j];
	}
	
		for(int k=0;k<3;k++){
		if(a[k]>b[k]){
			contadora++;
		}
		else if(a[k]<b[k]){
			contadorb++;
		}
	}
	cout<<contadora <<" "<< contadorb<<endl;
	return 0;
}

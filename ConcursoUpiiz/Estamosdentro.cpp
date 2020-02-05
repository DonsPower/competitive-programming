#include <bits/stdc++.h>
using namespace std;

int main(){
	int muesx,muesy,radsup,radmen,numCasos;
	cin>>muesx>>muesy>>radsup>>radmen>>numCasos;
	for(int i=0;i<numCasos;i++){
		int h=0,k=0;
		cin>>h>>k;
		//formula
		int resu=0;
		resu=sqrt(pow(muesx-h,2)+pow(muesy-k,2));
		if(resu<=radsup && resu>=radmen){
			cout<<"Dentro"<<endl;
		} else{
			cout<<"Fuera"<<endl;
		} 	
	}
	return 0;
}

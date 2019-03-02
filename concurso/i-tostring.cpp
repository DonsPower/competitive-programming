#include <bits/stdc++.h>
#define max 10000
using namespace std;
int recursivo(int);
int ban=0;
int res1=0;
int cad[max];

int main() {
	int n;
	cin>>n;
	recursivo(n);
	if(ban==10){
		cout<<"-1";
	}else{
		cout<<ban;
	}
	
	return 0;
}
int recursivo(int n){
	int resu=0;
	res1=n*n;
	if(n==1 || ban==10){
		return 0;
	}

	int contador=0;
	while(n>0){
		cad[contador]=n%10;
		n/=10;
		contador++;
	}
	
	for(int i=0;i<contador;i++){
		resu+=(cad[i]*cad[i]);
	}
	ban++;
	res1=0;
	return recursivo(resu);
}


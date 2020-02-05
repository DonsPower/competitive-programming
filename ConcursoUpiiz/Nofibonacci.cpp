#include <bits/stdc++.h>
using namespace std; 

bool fibonacci(int num){
	int temp=1;
	int aux=1;
	int z=1;
	bool bandera=false;
	for(int i=2;i<num;i++){
		z=aux+temp;
		aux=temp;
		temp=z;
		if(i>3){
			if(z==num){
				bandera=true;
				break;
			}
		}
	}
	return bandera;
}

int main(){
	int rec;
	cin>>rec; 
	bool existefib=true;
	for(int i=4;i<rec;i++){
		existefib=fibonacci(i);
		if(!existefib) cout<<i<<" ";
	}
	
	return 0;
}

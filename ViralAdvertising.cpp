#include <bits/stdc++.h>

using namespace std;
int main(){
	int cont=0;
	int iteracion;
	cin>>iteracion;
	int init=5;
	int mult=3;
	
	for(int i=0;i<iteracion;i++){
		int resu=floor(init/2)*mult;
		cont+=resu/mult;
		init=resu;
		
	}
	cout<<cont;
	return 0;
}

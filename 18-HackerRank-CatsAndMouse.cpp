#include <bits/stdc++.h>

using namespace std;
string catAndMouse(int x, int y, int z) {
    
	if(y>x){
		//Esto es cuando "x" es menor y "y"es mayor
		if(z>=y){
	    	return "Cat B"; 
		}else if(z>x && z<y){
			//Entonces vemos cual tiene menor distancia
			int Xmay, Ymay;
			Xmay=z-x;
			Ymay=y-z;
			if(Xmay==Ymay) return "Mouse C";
			else if(Ymay>Xmay) return "Cat A";
			else return "Cat B";
		}else{
			return "Cat A";
		}
	}else if(x>y){
		//y x z
		if(z>x){
			return "Cat A";
		}else if(z>y && z<x){
			int ymay1, xmay1;
			ymay1=z-y;
			xmay1=x-z;
			if(ymay1==xmay1) return "Mouse C";
			else if(ymay1>xmay1) return "Cat A";
			else return "Cat B";
		}else{
			return "Cat B";
		}
	}else if(x==y){
		if(z==x){
			return "Mouse C";
		}else{
			if(z<x) return "Cat A";
			else return "Cat B";
		}
	}
	return "";
}

int main(){
	int ciclo;
	cin>>ciclo;
	int x,y,z;
	
	for(int i=0;i<ciclo;i++){
		cin>>x>>y>>z;
		string result = catAndMouse(x, y, z);

        cout << result << "\n";
	}
}

#include <bits/stdc++.h>
using namespace std;

int main(){
	char n[3];
	int cont=0;
	while(scanf("%c",n)!=EOF){
		
		for(int i=0;i<3;i++){
			if(n[i]=='o'){
				cont++;
			}
		}
		cout<<cont;
	}
	
}


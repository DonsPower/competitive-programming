#include <bits/stdc++.h>
#define max 100000000



using namespace std;
int main(){
	long contador[max];
	long iniciador;
	cin>>iniciador;
	for(int i=0;i<iniciador;i++){
		cin>>contador[i];
	}	
	long suma=0;
	for(int j=0;j<iniciador;j++){
		suma+=contador[j];
	}
	cout<<suma<<endl;


    return 0;
}


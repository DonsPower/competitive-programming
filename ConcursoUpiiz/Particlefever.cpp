#include <bits/stdc++.h>
using namespace std;

int main(){
	int ini,fin;
	cin>>ini>>fin;
	int cont=0;
	bool ban=false;
	while(ban!=true){
		if(ini==24) ini=0;
		if(ini!=fin){
			cont++;
			ini++;
		} 
		else ban=true;
			
		//cout<<ini<<endl;
	}
	
	cout<<cont;
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int res=0;
  	while( getchar()!= EOF ){
	  	string al;
	  	cin>>al;
	  	vector<int>result;
	  	int cont=0;
    	for(int i=0;i<al.size();i++){
    		if(al[i]=='*')cont++;
		}
		res+=cont;
		
		
	}

		if(res==1 || res==0) cout<<"BIEN";
		else if(res==2) cout<<"HAPPY";
		else if(res>2)cout<<"BUSCAR A TAVO";
	
}

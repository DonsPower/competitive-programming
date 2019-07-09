#include <bits/stdc++.h>

using namespace std;

int main(){
    int x1,v1,x2,v2;
    bool band=false;
    cin>>x1>>v1>>x2>>v2;
   	if(v2>v1){
   		cout<<"NO"<<endl;	
	}else{
		int cont=0, cont2=0;
		for(int i=x1;i<10000;i+=v1){
			cont++;
			for(int j=x2;j<10000;j+=v2){
				cont2++;
				if(i==j){
					band=true;
					cout<<"El: "<<cont<<" "<<cont2<<endl;
					cout<<i <<" "<<j<<endl;
					break;
					
				}
				
			}
			cont2=0;
		}
		
		if(band)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	
}    

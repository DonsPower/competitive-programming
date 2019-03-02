#include <bits/stdc++.h>
#define max 20000
using namespace std;


long int arr[max][max];


int main(){	
 int numCasos;
	cin>>numCasos;
	for(long long int i=0;i<numCasos;i++){
		for(long long int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	int n,k;
	long long int resu=0,resu2=0,resu3=0,mod=0,mod2=0,modR=0,total,total2;
	for(long long int x=0;x<numCasos;x++){
		for(long long int y=0;y<1;y++){
			n=arr[x][y];
			k=arr[x][y+1];
		    resu=n*k;
		    modR=resu%9;
		    mod=n%3;
		    mod2=k%3;
		    if(mod!=0){
		    	resu2=k*mod;
				if(mod2!=0){
					resu3=mod2*n;
				}		    	
		 
			} else if(mod2!=0){
				resu3=mod2*n;
			}
		
			total=resu+modR-resu2-resu3;
			total2=total/9;
			cout<<total2<<endl;
			total2=0;
			total=0;
			resu=0,resu2=0,resu3=0,mod=0,mod2=0,modR=0;
		}
	

	}	
	return 0;
}


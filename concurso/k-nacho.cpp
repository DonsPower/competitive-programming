#include <bits/stdc++.h>
#define max 1000
using namespace std;
int arr[max];
int arr1[max];
int arr2[max];
int arr3[max];
int arr4[max][max];

using namespace std;
int main() {
	int casos,x,y,z;
	int contador=0;
	cin>>casos;
	string total[casos];
	int re,rew;
	for(int i=0;i<casos;i++){
			cin>>arr[i];
			cin>>arr1[i];
			cin>>arr2[i];
			cin>>arr3[i];
			re=arr[i]+arr2[i];
			rew=arr1[i]+arr3[i];
			for(int s=0;s<4;s++){
				for(int y=0;y<2;y++){
					cin>>arr4[s][y];
				}	
			}
			int bandera=0;
			for(int z=0;z<4;z++){
				for(int c=0;c<2;c++){
					
					if(arr4[z][c]==re && arr4[z][c+1]==rew){
						if(z==0){
							total[bandera]+='A';	
							
						}
						else if(z==1){
							total[bandera]+='B';
						}
						else if(z==2){
							total[bandera]+='C';
						}
						else if(z==3){
							total[bandera]+='D';
							
						}	
						bandera++;
					}
					
			
				}
					
			}
			
		}
		
	for(int g=0;g<casos;g++){
		cout<<total[g];
	}

	
	return 0;
}

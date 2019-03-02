#include <iostream>

using namespace std;

int main() {
	int n, suma2=0;
	cin>>n;
	int mat[n][n];
	int mat2[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>mat[i][j];	
		}	
	}
	for(int z=n-1;z>=0;z--){
		for(int x=n-1;x>=0;x--){
	
		}
		cout<<endl;
	}
	for(int p=0;p<n;p++){
		for(int b=0;b<n;b++){
			mat2[p][b]=0;
			cout<<mat2[p][b];
		}	
		cout<<endl;
	}
	
	
	
	int suma=0;
		for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
			if(k==l){
			suma+=mat[k][l];	
			}	
		}	
	}	

	cout<<suma<<" "<<suma2;
	return 0;
}

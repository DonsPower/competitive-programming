//S- Suma de manhattan
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arr;
int main(){
	int n,k,l;
	cin>>n;
	
	for(int i=0;i<n;i++){
		vector<int> aux;
		for(int j=0;j<2;j++){
			cin>>k;
			aux.push_back(k);
			
		}
		arr.push_back(aux);
	}
	int suma=0, suma1=0;
	for(int h=0;h<n;h++){			
		for(int g=0;g<2;g++){
			suma+=arr[0][g];
			suma1+=arr[h][1];	
		}
	cout<<suma<<" "<<suma1;
	suma=0;
		suma1=0;
		cout<<endl;
	}

	return 0;
}

#include <bits/stdc++.h>
#define max 52;
using namespace std;
string arr;
vector <int> aux;
vector<char>aux2; 
bool bandera=true;
	int n;
	int i=0;
int main(){
	cin>>n;
	while(i<n){
		cin>>arr;		
		for(int j=0;j<arr.size();j++){
			aux.push_back(arr[j]);		
		}
		sort(aux.begin(),aux.end());
		for(int i='a';i<='z';i++){
			aux2.push_back(i);	
		}
		if(aux.size()<26){
			cout<<"Hola"<<endl;
		}else{
		int contador=0;
			for(int h=0;h<aux.size();h++){
				for(int x=0;x<aux2.size();x++){
					if(aux[h]!=aux2[x]){
						cout<<"hola"<<endl;
						contador++;
					}	
				}
			}
		cout<<contador;
		}
			
		i++;
	}	
	return 0;
}

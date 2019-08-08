#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,al;
	cin>>a;
	vector<int>arr;
	for(int i=0;i<a;i++){
		cin>>al;
		arr.push_back(al);
	}
	sort(arr.begin(),arr.end());
	vector<int>aux;
	for(int j=0;j<arr.size()-1;j++){
	bool band=false;
	int x=0, cont=0;
		x=j;
		while(band!=true){
			int resu=0;
			resu=abs(arr[x]-arr[x+1]);
			if(resu<=1){
				
			aux.push_back(arr[x]);
			cont++;
			}
			if(x==arr.size()-1)band=true;
			
			x++;
		}	
		
	}
	vecotor<int>ent;
	for(int jj=0;jj<aux.size();jj++){
		if(aux[jj]!=aux[0]){
			ent.push_back(aux[jj]);
		}
		cout<<aux[jj]<<" ";
	}
	
	return 0;
}

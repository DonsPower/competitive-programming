#include <bits/stdc++.h>
using namespace std;
vector <pair<int,int>> puntos;
int main(){
	int no,k,n;
	cin>>no;
	for(int i=0;i<no;i++){
		cin>>n>>k;
		puntos.push_back(make_pair(n,k));	
	}
	sort(puntos.begin(), puntos.end());
	  for(int j=0;j<puntos.size();j++){
	  	cout << puntos[j].first << " "
             << puntos[j].second << endl;	
	  }
	   
  return 0;
}

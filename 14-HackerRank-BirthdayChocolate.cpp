#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    if(s.size()==1){
    	if(s[0]==d) return 1;
    	else return 0;
	}else{
		int suma, cont=0;
		for(int i=0;i<=s.size()-m;i++){
			for(int j=i;j<i+m;j++){
				suma+=s[j];
			}
			if(suma==d) cont++;
			suma=0;
		}
		return cont;
	}
	
}
int main(){
	int a, al;
	vector<int>arr;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>al;
		arr.push_back(al);
	}
	int d,m;
	cin>>d>>m;
	int resul = birthday(arr, d, m);
	cout<<resul;
}

#include <bits/stdc++.h>

using namespace std;
int birthday(vector<int> s, int d, int m) {
    int resu=0, cont=0;
    for(int i=0;i<s.size()-d;i++){
        for(int j=i;j<m;j++){
            resu+=s[j];
        }
        if(resu==d) cont++;
    }
    return cont;
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

#include <bits/stdc++.h>
using namespace std;
void bonAppetit(vector<int> bill, int k, int b) {
	int resu;

	for(int i=0;i<bill.size();i++){
		if(i!=k){
			resu+=bill[i];
		}
	}
	int bactual=resu/2;
	
	int res=b-bactual;
	if(bactual==b) cout<<"Bon Appetit"<<endl;
	else cout<<res<<endl;
	
}
int main(){
	int al, alo,ali;
	vector<int>arr;
	cin>>al>>alo;
	for(int i=0;i<al;i++){
		cin>>ali;
		arr.push_back(ali);
	}
	int re;
	cin>>re;	
	bonAppetit(arr,alo,re);
	return 0;
}

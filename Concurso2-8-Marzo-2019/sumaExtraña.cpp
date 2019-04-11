//sUMATORIA EXTRAÑA
#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int res,res2;
	res=((x*(x+1))/2);
	res2=((y*(y+1))/2);
	//cout<<res<<" "<<res2;
	int total=0;
	int res3;
	res3=((res2*(res2+1))/2);
	for(int i=0;i<res;i++){
		total+=i;
	}
	cout<<res3-total;
	return 0;
}

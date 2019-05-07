#include <bits/stdc++.h>

using namespace std;
vector<int> arr;
int main(){
	arr.push_back(4);
	arr.push_back(7);
	arr.push_back(47);
	arr.push_back(74);
	arr.push_back(44);
	arr.push_back(77);
	arr.push_back(444);
	arr.push_back(447);
	arr.push_back(474);
	arr.push_back(477);
	arr.push_back(777);
	arr.push_back(744);
	arr.push_back(747);
	arr.push_back(774);
	
	int al;
	cin>>al;
	bool band=false;
	for(int i=0;i<arr.size();i++){
		int resu=al%arr[i];
		if(resu==0){
			band=true;
			break;
		}
	}
	if(band)cout<<"YES"<<endl;
	else cout<<"NO"<< endl;
	return 0;
}

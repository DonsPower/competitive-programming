//ABC
#include <bits/stdc++.h>

using namespace std;
vector<int>vec;
char vec2[3];
int main(){
	int a;
	string A;
	for(int i=0;i<3;i++){
		cin>>a;
		vec.push_back(a);
	}
	sort(vec.begin(),vec.end());
	cin>>vec2;
	for(int y=0;y<3;y++){
		if(vec2[y]=='A'){
			cout<<vec[0];
		}
		if(vec2[y]=='B'){
			cout<<vec[1];
		}
		if(vec2[y]=='C'){
			cout<<vec[2];
		}
		cout<<" ";
	}
	return 0;
}

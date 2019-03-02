#include <bits/stdc++.h>
#define max 10000
using namespace std;
int arr[max];
vector<int>vec;
int func(int n){
	int contador=0;
	for(int j=n-1;j>0;j--){
		contador+=j;
	}
	return contador;
}

int main() {
	int num;
	int num2;
	cin>>num;
	int al=0;
	for(int i=0;i<num;i++){
		cin>>num2;
		vec.push_back(num2);
	}
	for(int j=0;j<num;j++){
		al=vec[j];
		arr[j]=func(al);
		al=0;
	}
	for(int h=0;h<num;h++){
		cout<<arr[h]<<endl;
	}
	
	return 0;
}

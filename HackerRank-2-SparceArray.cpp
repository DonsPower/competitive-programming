#include <bits/stdc++.h>
#define max 1000
using namespace std;
	int n,k;
	vector <string > arr;
	int contador=0;
	vector<string> arr2;
	int arr3[max];
int main() {	
	string ar;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ar;
		arr.push_back(ar);
	}
		cin>>k;
		string ar2;
	for(int j=0;j<k;j++){
		cin>>ar2;
		arr2.push_back(ar2);
	}
	for(int x=0;x<k;x++){
		for(int y=0;y<n;y++){
			if(arr2[x]==arr[y]){
				contador++;
				
			}
			arr3[x]=contador;
			
		}
		contador=0;
	}
	for(int h=0;h<k;h++){
		cout<<arr3[h]<<endl;
	}
	return 0;
}


#include <bits/stdc++.h>

using namespace std;
string arr;
string arr2;
int main()
{
    cin>>arr;
    long int cont=0;
    for(int i=0;i<arr.length()/3;i++){
    	arr2+="SOS";
	}
	for(int i=0;i<arr.length();i++){
		if(arr[i]!=arr2[i]){
			cont++;
		}
	}
	cout<<cont;
}


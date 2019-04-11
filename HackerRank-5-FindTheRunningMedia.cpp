#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
vector<int> vec2;
vector<int> resu;

int main(){
     int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k;
        vec.push_back(k);
    }
    int i=0;
    while(i!=n){
    	for(int j=0;j<i;j++){
    		vec2[j]=vec[j];
		}
		
		cout<<"Posicion en i"<<endl;
		i++;
	}
    
    for(int h=0;h<vec.size();h++){
        cout<<vec[h]<<endl;
    }
    return 0;
}


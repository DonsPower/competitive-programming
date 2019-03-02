#include <bits/stdc++.h>
using namespace std;
int contador=0;
vector<int> a;

int recursion(vector <int> al, int k){
	 sort(al.begin(),al.end());
	 int aux=0;
	 for(int h=0;h<al.size();h++){
	 	if(al[h]<k){
	 		aux++;
		 }
	 }
	 if(aux==al.size()){
	 	return 1;
	 }
	 int resu;
    for(int j=0;j<al.size();j++){
    	
    	if(al[j]<k){
    		resu=((1*al[j])+(2*al[j+1]));
    		 al.erase (al.begin(),al.begin()+2);
    		 al.push_back(resu);
    		 contador++;
    		 break;
		}
		else if(al[j]>=k){
			return 0;
		}
		
		
    }
    sort(al.begin(),al.end());
    return recursion(al,k);
}

int main(){
	
    int n,ka,alo;
    cin>>n;
    cin>>ka;
    for(int i=0;i<n;i++){
        cin>>alo;
		a.push_back(alo);
    }
   
    int re=recursion(a,ka);
    if(re==1){
    	cout<<"-1";
	}else{
		cout<<contador;
	}
    
 	
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    /*
     * Write your code here.
     */
     vector<long long int>res;
     long long int suma;
     for(int i=0;i<keyboards.size();i++){
         suma=0;
         for(int j=0;j<drives.size();j++){
            suma=keyboards[i]+drives[j];
            res.push_back(suma);
            suma=0;
         }
     }
     bool band=false;
    long long int resultado=0;
    sort(res.begin(),res.end());
    for(int ii=res.size()-1;ii>0;ii--){
    	//cout<<res[ii]<<endl;
        if(res[ii]<=b){
        	
            resultado=res[ii];
           // cout<<"fo"<<endl;
            //cout<<res[ii]<<endl;
			band=true;
            break;
        }    
        
    }
   	//cout<<resultado;
    if(!band)return -1;
    else return resultado;
}
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	vector<int>key;
	vector<int>drive;
	int al,al1;
	for(int i=0;i<b;i++){
		cin>>al;
		key.push_back(al);
	}
	for(int j=0;j<c;j++){
		cin>>al1;
		drive.push_back(al1);
	}
	 int moneySpent = getMoneySpent(key, drive, a);
	cout<<moneySpent<<endl;
}

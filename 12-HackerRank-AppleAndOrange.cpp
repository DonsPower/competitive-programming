#include <bits/stdc++.h>

using namespace std;

void acumulador(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) { 
        long long int band=0, band2=0;
        for(long long int i=0;i<apples.size();i++){
            //Saving result 
            long long int total=0;
            total=(a+apples[i]);
            if(total>=s && total<=t){
                band++;
            }
            
        }
        //Calculated the range of orange.
        for(long long int j=0;j<oranges.size();j++){
            long long int total2=0;
           
            total2=(b+oranges[j]);
            if(total2>=s && total2<=t){
                band2++;
            }
        }

        cout<<band<<endl;
        cout<<band2<<endl;
}

int main(){
	int s,t;
	cin>>s>>t;
	int a,b;
	cin>>a>>b;
	//Total de frutas 
	int m,o,al,al2;
	cin>>m>>o;
	vector<int>arr;
	vector<int>arr2;
	for(int i=0;i<m;i++){
		cin>>al;
		arr.push_back(al);
	}
	for(int j=0;j<o;j++){
		cin>>al2;
		arr2.push_back(al2);
	}
	acumulador(s,t,a,b,arr,arr2);
	}

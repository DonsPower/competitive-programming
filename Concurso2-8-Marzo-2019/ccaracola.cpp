//Caracol l
#include <bits/stdc++.h>
using namespace std;
int contador=0;
int k;
int recursiva(int n,int ka, int l){

		ka+=k;
		contador++;
	if(ka>=n)return 0;
	ka-=l;	
		return recursiva(n,ka,l);
		
	
}


int main(){
	
	int n,l;
	cin>>n;
	cin>>k;
	cin>>l;
	int ka;
	recursiva(n,ka,l);
	cout<<contador;

	return 0;
}

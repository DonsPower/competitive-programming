//Es primo e.
#include <bits/stdc++.h>
#define N 9832718
using namespace std;
bool C[N];	
vector<int> P;
void funct(){
	for(int64_t i=2;i<N;i++){
		if(C[i]==0){
			P.push_back(i);
			for(int64_t j=2*i;j<N;j+=i){
				C[j]=1;
				
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	funct();
	cout<<P[n-1];
	return 0;
}

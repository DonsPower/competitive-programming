//h sumatoria de la sumatoria de la sumatoria
#include <iostream>
using namespace std;
long long int x=0;
int n=0;
int main(){ 
  long long int resu=0;
  cin.sync_with_stdio(false);
  cin>>n;
  long long int l=1;
  while(l<=n){
  	x+=(l*(l+1))/2;
  	resu+=x;  
  	l++;
	}
	cout<<resu<<endl;
  return 0;
}

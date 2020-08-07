#include <bits/stdc++.h>
using namespace std;
vector<int> nose;

void saveprisioner(long long int pris,long long int candis,long long int inicio){
  long long int resu=candis % pris;
  resu += (inicio-1);
  if(resu==0){
      resu=pris;
  }
  if(resu>pris){
    resu-=pris;
  }
  nose.push_back(resu);
}
/*
int main(){
  long long int num_Cases;
  cin>>num_Cases;
  for(long long int i=0; i<num_Cases; i++){
    long long int n, m, s;
    cin>>n>>m>>s;
    saveprisioner(n,m,s);
  }
  for(int j=0;j<nose.size();j++){
    cout<<nose[j]<<endl;
  }
  return 0;
}
*/
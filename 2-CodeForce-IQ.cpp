#include <bits/stdc++.h>
using namespace std;
int aux=0;
vector<int>arr;
int main(){
  int n,alo;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>alo;
    arr.push_back(alo);
  }
  aux=arr[0];
  for (int j = 0; j < arr.size()-1; j++) {
    int resu=arr[j]%aux;
    if(resu!=0){
      aux=aux+resu;
      break;
    }
  }
  cout<<aux<<endl;
  return 0;
}

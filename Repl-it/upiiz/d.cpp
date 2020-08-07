#include <bits/stdc++.h>

using namespace std;
void funtion (string n){
  int cont=(n.size())/2;
  int divisible=cont%2;
  if(divisible!=0){
    if(n[cont-1]==n[cont+1]) cout<<"P"<<endl;
    else cout<<"NP"<<endl;
  }else{
    //cout<<"d"<<endl;
    //cout<<n[cont+1]<<endl;
    if(n[cont-1]==n[cont+1]) cout<<"P"<<endl;
    else cout<<"NP"<<endl;
  }
  

}
/*
int main(){
  int numo;
  cin>>numo;
  for(int i=0;i<numo;i++){
    string n;
    cin>>n;
    funtion(n);
  }
  return 0;
}*/
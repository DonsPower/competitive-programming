#include <bits/stdc++.h>
using namespace std;

int residuo(int n){
  int contador=0;
  string algo= to_string(n);
  for(int i=0;i<algo.size();i++){
    int num= algo[i] % 48;
    if(num==0){
      continue;
    }else if( n % num == 0){
      
      contador++;
    }
  }
 
  return contador;
}

int main(){
  int input;
  cin>>input;
  int i=0;
  for(int i=0; i<input; i++){
    int num,res;
    cin>>num;
    res= residuo(num);
  
    cout<<res<<endl;
  }
  return 0;

}

#include <bits/stdc++.h>
#define max 26
using namespace std;
int arr_inicial[max];
int saltarnubes(int n, int k){
  int energia=100;
  int i=0;
  int resta=1+k;
  int cont=0;
  int total=0;
  bool band=false;
  while(band!=true){
    if(arr_inicial[total]==1){
      cont+=resta;
    }else{
      cont+=1;
    }
    //cout<<energia<<endl;
    total=(i+k)%n;
   // cout<<total<<endl;
    if(total==0)band=true;
    i=total;
  }
  //cout<<cont<<endl;
  return energia - cont;
}

int main(){
  int tam_Arr, num_mod;
  cin>>tam_Arr>>num_mod;
  for(int i=0;i<tam_Arr;i++){
    cin>>arr_inicial[i]; 
  }
  int fin;
  fin=saltarnubes(tam_Arr,num_mod);
  cout<<fin<<endl;
  return 0;
}

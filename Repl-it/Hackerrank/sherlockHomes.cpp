#include <bits/stdc++.h>
using namespace std;
vector<int> n;
void generarPot(){
  
  for(int i=1;i<31623;i++){
    int res=pow(i,2);
    n.push_back(res);
  }

}
int buscaEncuentra(int inicio, int fin){
  int cont=0;
  for(int i=0;i<n.size();i++){
    if(n[i]>=inicio && n[i]<=fin){
      cont++;
    }
  }
  return cont;
}

int main(){
  generarPot();
  int cont;
  cin>>cont;
  for(int i=0;i<cont;i++){
    int a,b;
    cin>>a>>b;
    cout<<buscaEncuentra(a,b)<<endl;
  }
  return 0;
}

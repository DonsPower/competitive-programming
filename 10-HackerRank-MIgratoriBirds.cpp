#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
vector<int> arr2;
vector<int> ordenar;
int may;
int main(){
    int n,k;
    cin>>n;
    int al=0;
    for(int i=0;i<n;i++){
        cin>>k;
        if (k >= al) {
          al=k;
        }
        arr.push_back(k);
    }
    int cont;
    for(int i=1;i<=al;i++){

        for (int j = 0; j < arr.size(); j++) {
          if (arr[j]==i) {
            cont++;
          }
        }
        if(cont==0){
            arr2.push_back(0);
        }else{
            arr2.push_back(cont);
        }
        cont=0;
    }
    int alo=0;
    int cont2=0;
    for(int h=0;h<al;h++){
        if(arr[h]>=alo){
            alo=h;
        }
        if(alo==arr[h]){
          ordenar.push_back(alo);
          cont2++;
        }
    }
    cout<<cont2<<endl;
    if(cont2>1){
      cout<<"hola"<<endl;
      sort(ordenar.begin(),ordenar.end());
      std::cout << ordenar[0] << '\n';
    }else{
        cout<<alo<<endl;
    }
    return 0;
}

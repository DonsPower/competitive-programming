#include <bits/stdc++.h>
#define max 100000
using namespace std;
vector<int> arr;
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
    for(int i=0;i<al;i++){
      cont=0;
        for (int j = 0; j < arr.size(); j++) {
          cout<<i<<" "<< arr[j]<<endl;
          if (arr[j]==i) {
            cont++;
          }
        }
      
        if(cont==0){
            arr[i]=0;
        }else{
            arr[i]=cont;
        }
    }
    for(int h=0;h<al-1;h++){
        cout<<arr[h]<<" ";
    }
    return 0;
}

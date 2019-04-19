#include <bits/stdc++.h>

using namespace std;
vector<int> arr;
int contador=0;
int main(){
    int n;
    cin>>n;
    int ant=0;
    for(int i=0;i<n;i++){
        int k=0;
        cin>>k;
        arr.push_back(k);
        if(k>=ant){
            ant=k;       
        }
    }
    for(int j=0;j<n;j++){
        if(arr[j]==ant){
            contador++;
        }
    }
    cout<<contador;
    return 0;
}


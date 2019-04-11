#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin>>n;
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];    
        }    
    }
    int suma=0;
    int suma2=0;
        for(long long k=0;k<n;k++){
        for(long long l=0;l<n;l++){
            if(k==l){
            suma+=mat[k][l];    
            }
            if((k+l)==n-1){
            suma2+=mat[k][l];    
            }
 
        }    
    }    
    cout<<abs(suma-suma2);
    return 0;
}


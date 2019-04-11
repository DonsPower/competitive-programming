#include<bits/stdc++.h>

using namespace std;
void gauss_jordan(long double M[30][30],int64_t n){
    long double may;
    int64_t ind;
    long double aux;
    long double pivote;
    
    for(int64_t k=0;k<n;k++){
        may=abs(M[k][k]);
        ind=k;
        for(int64_t l=k+1;l<n;l++){
            if(may<abs(M[l][k])){
                may=abs(M[l][k]);
                ind=l;
            }
            
        }

        if(k!=ind){
            for(int i=0;i<n+1;i++){
                aux=M[k][i];
                M[k][i]=M[ind][i];
                M[ind][i]=aux;
            }
            
        }
        if(M[k][k]==0){
            
            break;
        }
        else{
            
            for(int64_t i=0;i<n;i++){//recorrer fila
                if(i!=k){
                    pivote=-M[i][k];
                    for(int64_t j=k;j<n+1;j++){//recorrer elementos de una fila

                        M[i][j]=M[i][j]+pivote*M[k][j]/M[k][k];
                    }
                }
                else{
                    pivote=M[k][k];
                    for(int64_t j=k;j<n+1;j++){
                        M[i][j]=M[i][j]/pivote;
                    }
                }
            }
        }
        
    
}
} 
void ingresar_coeficientes(long double M[30][30],int64_t n){
    for(int64_t i=0;i<n;i++){
        for(int64_t j=0;j<n+1;j++){
            cin>>M[i][j];
        }
    }
}
int main () {
    int64_t n;
    long double M[30][30];
    cin>>n;
    ingresar_coeficientes(M,n);
    gauss_jordan(M,n);
    for(int64_t i=0;i<n;i++){
    	if(M[i][n]==-0){
    		M[i][n]=0;
		}
        cout<<M[i][n]<<" ";
    }
    return 0;
}

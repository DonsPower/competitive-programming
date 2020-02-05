#include <bits/stdc++.h>
using namespace std; 
//eliminar nuemeros repetidos
vector<int> eliminacion(vector<int>a){
    vector<int>eliminar;
    for(int i=0;i<a.size();i++){
        if(a[i]!=a[i+1]){
            eliminar.push_back(a[i]);
        }
    }
    return eliminar;    
}
int verificar(int al,vector<int> res){
    res.push_back(al);
    int band=0;
    sort(res.rbegin(),res.rend());
    for(int i=0;i<res.size();i++){
        if(res[i]==al){
            band=i+1;
            break;
        }
    }
    return band;
}

//alis is a name
vector<int> lista(vector<int> aux, vector<int> alis) {
    vector<int>respuesta;
    for(int i=0;i<alis.size();i++){
        int num=verificar(alis[i], aux);
        respuesta.push_back(num);
    }
    return respuesta;    
    
}



int main(){
    int a,b,a1,b1;
    cin>>a;
    vector<int>arr;
    vector<int>arr1;
    vector<double> temporal;
    for(int i=0;i<a;i++){
    long long int ent;
    cin>>ent;
    temporal.push_back(ent);
        if(i==0){
            arr.push_back(ent);
        }else{
            if(temporal[i-1]!=ent) arr.push_back(ent);
        }
    }
    cin>>b;
    for(int j=0;j<b;j++){
        cin>>b1;
        arr1.push_back(b1);
    }
    vector<int> result = lista(arr, arr1);
    //Mostramos el score final
    for(int x=0;x<result.size();x++){
        cout<<result[x]<<endl;
    }
    
    
    return 0;
}


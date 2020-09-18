#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  int n;
  int max, min;
  cin>>s>>t>>n;
  //Cuando t es mas grande es igual o es mas chico tres casos.
  int cont=0;
  if(s==t){
      //Cuando es igual.
      cout<<"Yes"<<endl;
  }else{
      //cuando s es mayor igual que t.
      
      for(int i=0;i<s.size();i++){
          if(s[i]!=t[i]) break;
          cont++;
      }
      //Cuando no existe.
      if(cont==0){
          int parcial=s.size()+t.size();
          if(parcial>n) cout<<"No"<<endl;
          else cout<<"Yes"<<endl;
      }else{
          //Cuando existe ya en el otro array.
          int total=(s.size()-cont);
          int total2=(t.size()-cont);
          int res=total+total2;
          if(res>n) cout<<"No"<<endl;
          else cout<<"Yes"<<endl;
      }
  }//Cuando es mayor t que s
 
  
  return 0;
}

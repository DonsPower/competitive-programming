#include <bits/stdc++.h>
using namespace std;
string arr;
//bool ban=false;
void decision(int al,int b,int c){
  string cadenaAux="";
  string a;
  if(al==1) reverse(arr.begin(),arr.end());
  if(b==0) transform(arr.begin(), arr.end(),arr.begin(), ::toupper);
  else transform(arr.begin(), arr.end(),arr.begin(), ::tolower);
  if(c==0){
    for(int i=0;i<arr.size();i++){
      int num=arr[i];
      num=((num+13)%90);
      if(num< 65 )num+=64;
      a=num;
      cadenaAux +=a;
    }
    arr=cadenaAux;
  }else{
    for(int i=0;i<arr.size();i++){
      int num=arr[i];
      num=((num+13)%122);
      if(num< 97 )num+=96;
      a=num;
      //cout<<a<<endl;
      cadenaAux +=a;
    }
    arr=cadenaAux;
  }
}



int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
  long long int tam,operaciones;
  cin>>tam>>operaciones;
  cin>>arr;
  char op;
  int a=0,b=0,c=0;
  for(long long int i=0;i<operaciones;i++){
    cin>>op;
    if(op=='I'){
      a++;
    }else if('M'){
      b++;
    }else{
      c++;
    }
  }
  a%=2;
  b%=2;
  c%=2;
  cout<<a<<b<<c<<endl;
  decision(a,b,c);
  cout<<arr<<endl;
}


//void operador(char op){
//  switch (op) {
//    case 'I':
//      reverse(arr.begin(),arr.end());
//    break;
//    case 'M': //false == minusculas
//        if(ban==false){
          //convertimos a mayusculas
//          transform(arr.begin(), arr.end(),arr.begin(), ::toupper);
//          ban=true;
          //cout<<arr<<endl;
//        }else{
          //transform(arr.begin(), arr.end(),arr.begin(), ::tolower);
//          ban=false;
//          //cout<<arr<<endl;
//        }
//      break;
//    case 'C':
//      string cadenaAux="";
//      string a;
//      if(ban==false){
//        //MINUSCULAS
//        for(int i=0;i<arr.size();i++){
//          int num=arr[i];
//          num=((num+13)%122);
//          if(num< 97 )num+=96;
//          a=num;
//          //cout<<a<<endl;
//          cadenaAux +=a;
//        }
//        arr=cadenaAux;
//      }else{
//        //MAYUSCULAS
//        for(int i=0;i<arr.size();i++){
//          int num=arr[i];
//          num=((num+13)%90);
//          if(num< 65 )num+=64;
//          a=num;
//          cadenaAux +=a;
//        }
//        arr=cadenaAux;
//      }
//    break;
//  }
//}

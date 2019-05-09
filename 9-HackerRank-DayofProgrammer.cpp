#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  bool band=false;
  if(n==2000 || n==2400){
    cout<<"12"<<"."<<"09"<<"."<<n<<endl;
  }else if(n==2100 || n==2200 || n==2300 || n==2500 || n==2600 || n==2700){
    cout<<"13"<<"."<<"09"<<"."<<n<<endl;
  }else if(n==1918){
    cout<<"26"<<"."<<"09"<<"."<<n<<endl;
  }else{
    if((n%100)==0){
      if((n%4)==0 && (n%400)){
        band=true;
      }
    }else{
      if((n%4)==0 && (n%400)){
        band=true;
      }
    }

    if(band)cout<<"12"<<"."<<"09"<<"."<<n<<endl;
    else cout<<"13"<<"."<<"09"<<"."<<n<<endl;
  }

  return 0;
}

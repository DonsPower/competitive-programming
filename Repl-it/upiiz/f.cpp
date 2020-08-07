#include <bits/stdc++.h>

using namespace std;
void funtion (int no){
 for(int i=1;i<=no;i++){
   for(int j=0;j<i;j++){
     cout<<i;
   }
   cout<<endl;
  }
  for(int ii=no-1;ii>=1;ii--){
   for(int j=ii;j>0;j--){
     cout<<ii;
   }
   cout<<endl;
  }

}
/*
int main(){
  int n;
  cin>>n;
  funtion(n);
  return 0;
}*/
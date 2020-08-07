#include <bits/stdc++.h>
#define max 100000
#define ll long long
using namespace std;
vector<int> num_casses;
vector<int> num_print;
int rotation;
void input(){
  int numCasses,numPrint;
  cin>>numCasses>>rotation>>numPrint;
  for(int i=0;i<numCasses;i++){
    int al;
    cin>>al;
    num_casses.push_back(al);
  }
  for(int j=0;j<numPrint;j++){
    int al1;
    cin>>al1;
    num_print.push_back(al1);
  }
}
void add(int res){
  int it[max]={0};
  int i=0;
  while(i<num_casses.size()){
    if(res==num_casses.size()-1){
      it[res]=num_casses[i];
      res=0;
    }else{
      it[res]=num_casses[i];    
      res++;
    }
    i++;
  }
  for(int j=0;j<num_print.size();j++){
    cout<<it[ num_print[j] ]<<endl;
  }
}

int main(){
  input();
  int res=rotation%num_casses.size();
  //IF not rotation do noting
  //if it doesn't rotate do nothing
  if(res==0){
    for(int i=0;i<num_print.size();i++){
      cout<<num_casses[num_print[i]]<<endl;
    }
  }else{
      add(res);
    }
  return 0;
}
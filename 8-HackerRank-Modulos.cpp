#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int main() {
  int n,k,alo;
  cin>>n>>k;
  for (int l = 0; l < n; l++) {
    cin>>alo;
    arr.push_back(alo);
  }
  int cont=0;
  for (int  i = 0; i <arr.size()-1; i++) {
    for (int j = i+1; j <arr.size(); j++) {
      int suma=0;
      suma=(arr[i]+arr[j])%k;
      if (suma==0) {
        cont++;
      }
    }
  }
  cout << cont << '\n';
  return 0;
}

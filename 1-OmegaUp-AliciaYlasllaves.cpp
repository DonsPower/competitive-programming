//Alicia y las llaves doradas
#include <iostream>
#include <algorithm> 
#include <vector>
using namespace std;
vector<double> aux;
double n,k,al,resu;
double l=0;
int main(){
	cin.sync_with_stdio(false);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>k;
		aux.push_back(k);
	}
	cin>>al;
	while(l!=al){
		cin>>resu;
		
	std::vector<int>::iterator it;

  it = find (aux.begin(), aux.end(), resu);
  if (it != aux.end())
    std::cout << "Element found in myvector: " << *it << '\n';
  else
    std::cout << "Element not found in myvector\n";

		l++;
	}
}

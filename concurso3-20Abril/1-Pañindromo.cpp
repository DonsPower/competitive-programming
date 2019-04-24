//palindromo o no 
#include <iostream>
using namespace std;

int main() {
 int I = 0;
 string palabra;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
 	cin >> palabra;
 int J = palabra.length() - 1;
 int mitad = J / 2;
 while(palabra[I] == palabra[J]){
  if(mitad == I){
   cout << "P"<<endl;
   break;
  }
 J--;
 I++;
 }
 if(mitad != I)
 cout << "NP"<<endl;					
 J=0;
 I=0;
 palabra="";
 }
 return 0;
}

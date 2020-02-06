#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	bool ban=false;
	for(int i=0;i<q;i++){
		string op;
		cin>>op;
		if(op=="I"){
			  reverse(s.begin(),s.end());
			//cout<<s<<endl;
		}else if(op=="M"){
			//false == minusculas
			if(ban==false){
				//convertimos a mayusculas
				transform(s.begin(), s.end(),s.begin(), ::toupper);
				ban=true;
				//cout<<s<<endl;
			}else{
					transform(s.begin(), s.end(),s.begin(), ::tolower);
					ban=false;
					//cout<<s<<endl;
			}
		}else if(op=="C"){
			//cONVERTIR A LA 13 Palabra.
			string cadenaAux="";
			char a;
			if(ban==false){
				//MINUSCULAS
				for(int i=0;i<s.size();i++){
					int num2=s[i];
					int resu2=num2+13;
					if(resu2>122){
						resu2=resu2-122;
						resu2=resu2+96;
						a=resu2;
						cadenaAux +=a;
					}else{
						a=resu2;
						cadenaAux +=a;
					}
				}
				s=cadenaAux;
			}else{
				//MAYUSCULAS
				for(int i=0;i<s.size();i++){
					int num=s[i];
					int resu=num+13;
					if(resu>90){
						resu=resu-90;
						resu=resu+64;
						a=resu;
						cadenaAux +=a;
					}else{
						a=resu;
						cadenaAux +=a;
					}
				}
				s=cadenaAux;
			}
		}
	}
	cout<<s<<endl;
	return 0;

}

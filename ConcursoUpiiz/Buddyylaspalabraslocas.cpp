#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	bool ban=false;
	for(int i=0;i<q;i++){
		string op;
		cin>>op;
		if(op=="I"){
			string aux_cadena = "";
 			for (int i = s.size()-1; i >=0 ; i--){
				aux_cadena +=s[i];
			}
			s=aux_cadena;
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
			//cONVERTIR A LA 13 Palabra.--P--C	
			string cadenaAux="";
			string a;
			if(ban==false){
				//MINUSCULAS
				for(int i=0;i<s.size();i++){
					int num=s[i];
					num=((num+13)%122);
					cout<<num<<endl;
					a=num;
					cadenaAux +=a;
					
				}
				s=cadenaAux;
			}else{
				//MAYUSCULAS
				for(int i=0;i<s.size();i++){
					int num=s[i];
					int num2=((num+13)%90);
					cout<<num2<<endl;
					if(num2<=65)num2+64;
					cout<<num2<<endl;
					a=num2;
					//cout<<a<<endl;
					cadenaAux +=a;
				}
				s=cadenaAux;
			}
		}
	}
	cout<<s<<endl;
	return 0;
	
}

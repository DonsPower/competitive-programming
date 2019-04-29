#include <bits/stdc++.h>
using namespace std;

class compilador{
	private:
		char a[50];
		int contador;
		string palabracon;
		string alfabeto[50];
		vector<string>arr;
	public:
		compilador();
		string palabra();
		void archivo();
		char separarcaracter(int);
		void guardarAlfa();
		bool comprobarLeng(string);//Comprobamos si esta ó no en el lenguaje.
		void agregarPalabras(); //Se agregan todas las palabras a un arreglo.
		~compilador();
};

FILE *fd;
int main() {
//---No borrar---
	compilador b;//Crea clase.
	b.archivo();//Abre archivo.
	b.guardarAlfa();//Crea tabla Simbolos.
	b.agregarPalabras();
//---No borrar--	
	cout<<b.palabra();	
	return 0;
}
compilador::compilador(){
	contador=0;
	}

void compilador::agregarPalabras(){
	string x="";
	while(x!="end"){
		x=palabra();
		arr.push_back(x);
	}
}
bool compilador::comprobarLeng(string aux){
	//cout <<aux;

	if(aux[0]>=48 && aux[0]<=57){
		
		return false;
	}
	
	for(int i=0;i<44;i++){
		//Esta mal planteado esta parte.
		if(alfabeto[i]==aux){
		//	cout<<"Dentro de al funcion comprobarLengt: "<<aux[0];
			return false;
		}
		
	}
	return true;
}
/*if(aux==alfabeto[i]){
				
					return aux;
				}else{
								
					return "Error palabra no en el lenguaje";
				}*/


void compilador::archivo(){
		int c;
	int bandera=0;
	char direccion[]= "C:\\Users\\Dons\\Documents\\prueba.txt";
	
	fd= fopen(direccion,"rt");//leer texto
	
	if(fd==NULL){
		cout<<"Error al leer el archivo"<<endl;
		exit(0);
	}
	while((c=fgetc(fd))!=EOF){
		if(c=='\n'){
			cout<<endl;
		}else{
			 bandera++;
			a[bandera]=(char)c;
		}
		
		
	}

	fclose(fd);
}

string compilador::palabra(){
	char letra;
	string cadena="";
		bool band=false,x=false;
	letra = separarcaracter(contador++);
			if(letra==32){
				return palabra();
			}

		if(letra>=48 && letra<=57){//Numeros
			while((letra>=48 && letra<=57)){
			cadena+= letra;
			letra=separarcaracter(contador++);
			
			}
			if (letra==46){
			
				letra=separarcaracter(contador++);
				if (letra>=48 && letra<=57){
				
					cadena+=".";
				
					while (letra>=48 && letra<=57)
					{
							cadena+= letra;
							letra=separarcaracter(contador++);
							//28FEBR concatena numeros con letras
							
							while((letra>=65 && letra<=90) || (letra>=97 && letra<=122)){
								cadena+= letra;
								letra=separarcaracter(contador++);
								band=true;//Este es un error de sintaxias marca error.
							}
							//28 DE FEBR
					}
				}else
				{ 
					separarcaracter(contador--);
				}
			}
			separarcaracter(contador--);
		//Comparacion si esta en el lenguaje 
		//true = error.
	
		x=comprobarLeng(cadena);
			if(x==true || band==true){
				return "Error de sintaxis prro :V";
			}
			else{
				return cadena;	
			}
	
			
			//Cuando son letras.
		}else if((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)){//Letras
				while((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)||(letra>=94 && letra<=122) ||(letra>=65 && letra<=90)){
				cadena+= letra;
				letra=separarcaracter(contador++);
			}
			separarcaracter(contador--);
			return cadena;
		}
		else
		{
			//espacio en blanco
			//Concatenar >= ,<= etc..
			//	cout<<letra<<endl;
			cadena= letra;
			//	cout<<cadena;
			x=comprobarLeng(cadena);
			//cout<<x;
			if(x==true){
				return "Error de sintaxis prro :v";
			}else{
				//Concatenamos los signos de igualación y diferiencia.
				char linea2=separarcaracter(contador++);
				if(cadena=="<" || cadena==">" || cadena=="!" || cadena=="=" ){
				
				if(linea2=='='){
					cadena+=linea2;
					//cout<<cadena;
				}
				}else if(cadena=="("){
			
					if(linea2==')'){
					cadena+=linea2;
					}
				}
				else{
					separarcaracter(contador--);
				}
				return cadena;
			}	
		}
		return NULL;
	}
char compilador::separarcaracter(int contador){
	return a[contador+1];	
}

void compilador::guardarAlfa() {
	alfabeto[15]="dnsdef";//Definir constantes.
	alfabeto[1]="dnsvar";//Declarar variables.
	alfabeto[2]="dnsfunction";
	alfabeto[3]="dnscall";
	alfabeto[4]="dnsread";
	alfabeto[5]="dnswrite";
	alfabeto[6]="dnsstart";//Bloques
	alfabeto[7]="dnsif";
	alfabeto[8]="dnselse";
	alfabeto[9]="dnswhile";
	alfabeto[10]="num";
	alfabeto[11]="and";
	alfabeto[12]="or";
	alfabeto[13]="==";
	alfabeto[14]="!=";
	alfabeto[16]="<=";
	alfabeto[17]=">=";
	alfabeto[28]="()";
	alfabeto[0]="<";
	alfabeto[18]=">";
	alfabeto[19]="+";
	alfabeto[20]="-";
	alfabeto[21]="*";
	alfabeto[22]="/";
	alfabeto[23]="%";
	alfabeto[24]=",";
	alfabeto[25]=";";
	alfabeto[26]=":";
	alfabeto[27]="(";
	alfabeto[29]=")";
	alfabeto[30]="{";
	alfabeto[31]="}";
	alfabeto[32]="!";
	alfabeto[33]="[";
	alfabeto[34]="]";
	alfabeto[35]="dnsint";
	alfabeto[36]="dnsvoid";
	alfabeto[37]="dnschar";
	alfabeto[38]="dnslong";
	alfabeto[39]="dnsfloat";
	alfabeto[40]="dnsstring";
	alfabeto[41]="dnsboolean";
	alfabeto[42]="dnsdouble";
	alfabeto[43]="dnslong";
}
compilador::~compilador(){
		for(int i=0;i<50; i++){
			a[i]=0;
			alfabeto[i]="";
		}
		for(int j=0;j<44;j++){
			alfabeto[j]="";
		}
		int contador=0;
		 palabracon="";
			
};


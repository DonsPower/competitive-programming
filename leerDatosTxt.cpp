#include <bits/stdc++.h>
using namespace std;


class compilador{
	private:
		char a[50];
		int contador=0;
		string palabracon;
		
		string alfabeto[50];
		
	public:
		
		string palabra();
		void archivo();
		char separarcaracter(int);
		void guardarAlfa();
		string comprobarLeng();//Comprobamos si esta ó no en el lenguaje.
};

FILE *fd;
int main() {
//---No borrar---
	compilador b;//Crea clase.
	b.archivo();//Abre archivo.
	b.guardarAlfa();//Crea tabla Simbolos.
//---No borrar--
	b.comprobarLeng();
	cout<<b.comprobarLeng();
	
	return 0;
}


string compilador::comprobarLeng(){
	string aux=palabra();
	cout<<aux;

		if((aux[0]>=65 && aux[0]<=90) || (aux[0]>=97 && aux[0]<=122)){
			
			return aux;
		}
		else if(aux[0]>=48 && aux[0]<=57){
		
			return aux;
		}else{
			cout<<"soy aux : "<<aux;
			int i=0;
			bool bandera=false;
			while(i<44){
				if(alfabeto[i]==aux) bandera=true;
				i++;
			}
			
			if(bandera==true){
			
				return aux;
			}else{
				
				return "Error palabra no en el lenguaje";
			}
		}
	//aux="";
	return aux;
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
	letra = separarcaracter(contador++);
	
		if(letra>=48 && letra<=57){//Numeros
			while((letra>=48 && letra<=57)){
			cadena+= letra;
			letra=separarcaracter(contador++);
			
			}
			if (letra==46){
			
				letra=separarcaracter(contador++);
				if (letra>=48 && letra<=57){
				
					cadena+=".";
					bool band=false;
					while (letra>=48 && letra<=57)
					{
							cadena+= letra;
							letra=separarcaracter(contador++);
							//28FEBR
							
							while((letra>=65 && letra<=90) || (letra>=97 && letra<=122)){
								cadena+= letra;
								letra=separarcaracter(contador++);
								band=true;
							}
							//28 DE FEBR
					}
				}else
				{ 
					separarcaracter(contador--);
				}
			}
			separarcaracter(contador--);
			x=comprobarLeng(cadena);
	
			return cadena;
			
		}else if((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)){//Letras
				while((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)||(letra>=94 && letra<=122) ||(letra>=65 && letra<=90)){
				cadena+= letra;
				letra=separarcaracter(contador++);
			}
			separarcaracter(contador--);
			return cadena;
		}
		else{
			//esoacio en blanco
			cadena+= letra;
			//separarcaracter(contador--);
			return cadena;
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
	alfabeto[0]="<";
	alfabeto[16]="<=";
	alfabeto[17]=">=";
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
	alfabeto[28]="()";
	alfabeto[29]=")";
	alfabeto[30]="{";
	alfabeto[31]="}";
	alfabeto[32]="{}";
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



#include <bits/stdc++.h>
#define max 1000
using namespace std;

class compilador{
	private:
		char a[50];
		string text[max]; //Arreglo donde guarda funciones.
		int contador;
		string palabracon;
		string alfabeto[50];
		vector<string>arr;
		int pos;// Almacena la posicion del arreglo global.
	public:
		compilador();
		string palabra();
		void archivo();
		char separarcaracter(int);
		void guardarAlfa();
		bool comprobarLeng(string);//Comprobamos si esta � no en el lenguaje.
		void agregarPalabras(); //Se agregan todas las palabras a un arreglo.
		string retornaPalabra(int);
		void agregarArr();
		//Introducir follow y BNF
		void programa();
		void bloque();
		void aux1();
		void aux2();
		void aux3();
		void aux4();
		void aux5();
		void aux6();
		void aux7();
		void proposicion();
		void aux8();
		void aux9();
		void condicion();
		void aux10();
		void exprear();
		void aux11();
		void aux12();
		void factor();
		//Terminan los follow y BNF
		void impri();
		~compilador();
};

FILE *fd;


int main() {
//---No borrar---//
	compilador b;//Crea clase.
	b.archivo();//Abre archivo.
	b.guardarAlfa();//Crea tabla Simbolos.
	//cout<<"holas";
	b.agregarArr(); //Agregar en un arreglo palabras del txt.
	//b.agregarPalabras(); //Agrega las palabras a un arreglo para el control de ella.
//---No borrar--//



	//b.impri();

	//b.programa();
	return 0;
}


compilador::compilador(){
	contador=0;
	pos=0;
}
void compilador::impri(){
	for(int i=0;i< sizeof(text);i++){
		cout<<text[i]<<" ";
	}
	cout<<"\n";
	cout<<"termino"<<endl;
}
void compilador::agregarArr(){
	int i=0;
	while (true){
		string x=palabra();
		if(x=="end"){
			text[i]=palabra();
			break;
		}else{
				text[i]=palabra();
		}
	}
}
//	Apartado para los follow funciones.
	void compilador::programa(){
	//	cout<<"entro"<<endl;
		bloque();

		//verificar si esto esta bien.
		string x1=retornaPalabra(pos++); //Igualo la palabra.

		if(x1=="end"){
			cout<<"Compilacion exitosa, :D Bien FELICIDADES BRO :D "<<endl;
		}else{
			cout<<"Se esperaba un - end -"<<endl;
		}
	}
	void compilador::bloque(){
		//Falta el follow.
		aux1();
		aux4();
		cout<<"Hola"<<endl;
		aux7();
		proposicion();
	}

	void compilador::aux1(){

		string x=retornaPalabra(pos++); //Igualo la palabra.
		//cout<<x;
		//Modificar identificadores.
		if(x!="dnsvar" && x!="dnsfunction" && x!="iden" && x!="dnscall" && x!="dnswrite" && x!="dnsstart" && x!="dnsif" && x!="dnswhile"){
			cout<<x<<" dfaf"<<endl;
				if(x=="dnsdef"){
					aux2();
					x=retornaPalabra(pos++);
					cout<<x<< " aux1" <<endl;
					if(x==";"){
						//proximamente su programacion
					}else{
						cout<<"Se espera un - ; -"<<endl;
					}
				}else{
					cout<<"Se espera un - dnsdef -"<<endl;
				}
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux2(){
		string x3=retornaPalabra(pos++); //Igualo la palabra.
			if(x3=="iden"){
				x3=retornaPalabra(pos++); //Igualo la palabra.
				if(x3=="="){
					//FALTA NUM error aqu�
					x3=retornaPalabra(pos++);
					if(x3=="nume"){
						cout<<x3<< " aux2" <<endl;
						aux3();
					}else{
						cout<<"Se esperaba un numero."<<endl;
					}
				}else{
					cout<<"Se esperaba un - = -"<<endl;
				}
			}else{
				cout<<"Se esperaba un - identificador -"<<endl;
			}
	}
	void compilador::aux3(){
		//follow
		string x4=retornaPalabra(pos++); //Igualo la palabra.
		cout<<x4<< " aux3" <<endl;
		if(x4!=";"){
			 if(x4==","){
			 	aux2();
			 }else{
			 	cout<<"Se esperaba un - , -"<<endl;
			 }
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux4(){
		//follow
		string x5=retornaPalabra(pos++);
		if(x5!="dnsfunction" && x5!="iden" && x5!="dnscall" && x5!="dnsstart" && x5!="dnsif" && x5!="dnswhile"){
				if(x5=="dnsvar"){
					 aux5();
					 	x5=retornaPalabra(pos++);
					if(x5==";"){
						//proximamente su programacion
					}else{
						cout<<"Se espera un - ; -"<<endl;
					}
				}else{
					cout<<"Se esperaba un - dnsvar - "<<endl;
				}
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux5(){
		string x6=retornaPalabra(pos++); //Igualo la palabra.
			if(x6=="iden"){
				aux6();
					//x6 =retornaPalabra(pos++);
					//if(x6==";"){
						//proximamente su programacion
					//}else{
				//		cout<<"Se espera un - ; -"<<endl;
				//	}
			}else{
				cout<<"Se esperaba un - identificador -"<<endl;
			}
	}
	void compilador::aux6(){
		//follow
		string x7=retornaPalabra(pos++);
		if(x7!=";"){
			if(x7==","){
				aux5();
			}else{
				cout<<"Se esperaba un - , -"<<endl;
			}
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux7(){
		//follow
		string x8=retornaPalabra(pos++);
		//cout<<x8<<endl;
		if(x8!="iden" && x8!="dnscall" && x8!="dnsstart" && x8!="dnsif" && x8!="dnswhile"){
			if(x8=="dnsfunction"){
				//cout<<x8<<endl;
				x8=retornaPalabra(pos++);
				if(x8=="iden"){
					x8=retornaPalabra(pos++);
					if(x8=="-")	{
						bloque();
						x8=retornaPalabra(pos++);
						if(x8==";"){
							aux7();
						}else{
							cout<<"HOLA Se espera un - ; -"<<endl;
						}
					}else{
							cout<<"Se esperaba un - - -"<<endl;
					}
				}else{
					cout<<"Se esperaba un - identificador - "<<endl;
				}
			}else{
				cout<<"Se esperaba un - dnsfunction -"<<endl;
			}
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::proposicion(){
		string x9=retornaPalabra(pos++);

		if(x9=="iden"){
			x9=retornaPalabra(pos++);
		//	x9=retornaPalabra(pos++);
			if(x9=="="){
				exprear();
			}else{
				cout<<"Se esperaba un - = -"<<endl;
			}
		}else if(x9=="dnscall"){
			x9=retornaPalabra(pos++);
			if(x9=="iden"){

			}else{
				cout<<"Se esperaba un identificador"<<endl;
			}
		}else if(x9=="dnsstart"){
			proposicion();
			aux8();
			x9=retornaPalabra(pos++);
			if(x9=="endstart"){
				//Proximamente....
			}else{
				cout<<"Se esperaba un - endstart -"<<endl;
			}
		}else if(x9=="dnsif"){
			condicion();
			bloque();
			aux9();
		}else if(x9=="dnswhile"){
			condicion();
			bloque();
		}else{
			cout<<"Se esperaba una sentencia - dnsif, dnswhile, endstart, dnsstart,dnscall, iden  -"<<endl;
		}
	}
	void compilador::aux8(){
		string x10=retornaPalabra(pos++);
		if(x10!="endstart"){
			if(x10==";"){
				proposicion();
				aux8();
			}else{
				cout<<"Se esperaba un - ; -"<<endl;
			}

		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux9(){
		string x11=retornaPalabra(pos++);
		if(x11!=";" && x11!="end" && x11!="endstart"){
			if(x11=="dnselse"){
				bloque();
			}else{
				cout<<"Se esperaba un - dnselse - "<<endl;
			}
		}else{
				retornaPalabra(pos--);
		}
	}
	void compilador::condicion(){
		exprear();
		aux10();
		exprear();
	}
	void compilador::aux10(){
		string x12=retornaPalabra(pos++);
		if(x12=="=="){

		}else if(x12=="!="){

		}else if(x12=="<"){

		}else if(x12=="<="){

		}else if(x12==">"){

		}else if(x12==">="){

		}else{
			cout<<"Se esperaba un - '!=', '<', '<=', '>=', '>', '==' - "<<endl;
		}
	}
	void compilador::exprear(){
		factor();
		aux11();

	}
	void compilador::aux11(){
		string x16=retornaPalabra(pos++);
		if(x16!=")" && x16!="==" && x16!="!=" && x16!="<" && x16!="<=" && x16!=">" && x16!=">=" && x16!="dnsvar" && x16!="dnsdef" && x16!="dnsfunction" && x16!="iden" && x16!="dnscall" && x16!="dnsstart" && x16!="dnsif" && x16!="dnswhile"){
			retornaPalabra(pos--);
		aux12();
		factor();
		aux11();
		}else{
			retornaPalabra(pos--);
		}
	}
	void compilador::aux12(){
		string x13=retornaPalabra(pos++);
		cout<<x13<<endl;
		if(x13=="+"){

		}else if(x13=="-"){

		}else if(x13=="*"){

		}else if(x13=="/"){

		}else{
			cout<<"Se esperaba un - '+', '-', '*', '/' - "<<endl;
		}
	}
	void compilador::factor(){
		string x14=retornaPalabra(pos++);

		if(x14=="iden"){

		}else if(x14=="nume"){
		}else if(x14=="("){
			exprear();
			x14=retornaPalabra(pos++);
			if(x14==")"){
				//Proximamente..
			}else{
				cout<<"Se esperaba un - ) -"<<endl;
			}
		}else{
			cout<<"Se esperaba un - identificador o un numero o un '(' -"<<endl;
		}
	}
//Terminan el apartado de los follow funciones.


string compilador::retornaPalabra(int pos){
	string pal=arr[pos];
	//cout<<"palabra: "<<pal<<endl;
	//concatenar cuando es <= falta. nota mental.
	bool band=false;
	 cout<<pal<<endl;
	for(int i=0;i<47;i++){
		if(alfabeto[i]==pal){
			band=true;
		}
	}
	if(band) return pal;
	else{
		char siesnum=pal[0];
		if(siesnum=='0'|| siesnum=='1' ||siesnum=='2'||siesnum=='3'||siesnum=='4'||siesnum=='5'||siesnum=='6'||siesnum=='6'||siesnum=='8'||siesnum=='9'){
			return "nume";
		}else{
			return "iden";
		}
	}
}

void compilador::agregarPalabras(){
	string x="";
	while(x!="end"){//Termina cuando en el documento existe un 'end'
		x=palabra();
		cout<<"valor: "<<x<<endl;
		arr.push_back(x);
	}
	//arr.push_back("end");
}
bool compilador::comprobarLeng(string aux){
	//cout <<aux;

	if(aux[0]>=48 && aux[0]<=57){

		return false;
	}

	for(int i=0;i<47;i++){
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
	char direccion[]= "/home//dons/Documentos/prueba.txt";

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
			if(letra==32 || letra==13 || letra==10 || letra==9){
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
				return "Error de sintaxis";
			}
			else{
				return cadena;
			}


			//Cuando son letras.
		}else if((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)){//Letras
				while((letra>=94 && letra<=122) ||(letra>=65 && letra<=90)||(letra>=48 && letra<=57) ){
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
				return "Error de sintaxis";
			}else{
				//Concatenamos los signos de igualaci�n y diferiencia.
				char linea2=separarcaracter(contador++);
				if(cadena=="<" || cadena==">" || cadena=="!" || cadena=="=" ){

					if(linea2=='=')
					{
						cadena+=linea2;
						//cout<<cadena;
					}
					else
					{
						separarcaracter(contador--);
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
	alfabeto[44]="endstart";
	alfabeto[45]="=";
	alfabeto[46]="end";
}
compilador::~compilador(){
		for(int i=0;i<50; i++){
			a[i]=0;
			alfabeto[i]="";
		}
		for(int j=0;j<46;j++){
			alfabeto[j]="";
		}
		contador=0;
		 palabracon="";
		 pos=0;

};

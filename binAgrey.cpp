#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>

void resete();

char bina[9]; char gray[9]; char op;
int i;

void main()
{
textmode(C40);
textbackground(1);
do{
clrscr();
cout<<"\n\tMENU DE OPCIONES";
cout<<"\n\t================";
cout<<"\n";
cout<<"\n\t1)DE BINARIO A GRAY";
cout<<"\n\t2)DE GRAY A BINARIO";
cout<<"\n\t0)Salir";
cout<<"\n\tSu Opcion: "; cin>>op;

switch(op){
case '1':
resete();
cout<<"\n\n\INGRESE SU NUMERO BINARIO Max 8 cifras: \n";
gets(bina);

gray[0]=bina[0];
for(i=1; i<8; i=i+1)
{
if (bina[(i-1)]=='1'&& bina[i]=='1')gray[i]='0'; 

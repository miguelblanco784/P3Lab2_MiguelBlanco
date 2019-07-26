#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include "Matriz.cpp"
#include "Bitacora.cpp"

using namespace std;

int main(){
	cout<<"Ingrese que tipo de matriz quiere\n1- 5x5 Aleatoria\n2- Definir tamano aleatoria\n";
	int opcion1;
	Matriz *p;
	cin>>opcion1;
	if(opcion1 == 1){
		p = new Matriz();
	}else{
		int a, b;
		cout<<"Ingrese 1:";
		cin>>a;
		cout<<"Ingrese 2:";
		cin>>b;
		p = new Matriz(a,b);
	}
while(true){
		Bitacora *bita = new Bitacora();
		int opcion2;
		cout<<"1- Multiplicar\n2- Sumar\n3- Restar\n4- Bitacora\n0- Salir\n";
		cin>>opcion2;
		switch(opcion2){
			case 0:
				{
				exit(0);
				}
				break;
			case 1:
				{
				int temp1;
				cout<<"Ingrese su multiplicando";
				cin>>temp1;
				cout<<p -> Multiplicacion(temp1)<<endl;
				bita->agregar(true, "Multiplicacion");
				}
				break;
			case 2:
				{
				int j, k;
				cout<<"Ingrese 1: ";
				cin>>j;
				cout<<"Ingrese 2: ";
				cin>>k;
				Matriz *la = new Matriz(j,k);
				bool h ;
				h = p -> Suma(*la);
				la-> ~Matriz();
				bita->agregar(h, "Sumar");
				}
				break;
			case 3:
				{
				int j, k;
				cout<<"Ingrese 1: ";
				cin>>j;
				cout<<"Ingrese 2: ";
				cin>>k;
				Matriz *la = new Matriz(j,k);
				bool h ;
				h = p -> Resta(*la);
				la-> ~Matriz();
				bita->agregar(h, "Resta");
				}
				break;
			case 4:
				{
				int opcion3;
				cout<<"1- Listar\n2-Limpiar\n3- ELiminar ultimo\n";
				cin>>opcion3;
				switch(opcion3){
					case 1:
						bita -> imprimir();
						break;
					case 2:
						bita->vaciar();
						break;
					case 3:
						bita->vaciar();
						break;
				}
				}
				break;
		}	
}
	/*Matriz *p = new Matriz(4,4);
	Matriz *j = new Matriz(4,4);
	cout<<p -> Suma(*j)<<endl;
	cout<<p -> Resta(*j)<<endl;
	cout<<p -> Multiplicacion(*j)<<endl;*/
	return 0;
}



#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include "Matriz.cpp"

using namespace std;

int main(){
	cout<<"Ingrese que tipo de matriz quiere\n1- 5x5 Aleatoria\n2- Definir tamano aleatoria\n";
	int opcion1;
	Matriz *p;
	cin>>opcion1;
	if(opcion1 == 1){
		Matriz *p = new Matriz();
	}else{
		int a, b;
		cout<<"Ingrese 1:";
		cin>>a;
		cout<<"Ingrese 2:";
		cin>>b;
		Matriz *p = new Matriz(a,b);
	}
	
		int opcion2;
		cout<<"1- Multiplicar\n2- Sumar\n3- Restar";
		cin>>opcion2;
		switch(opcion2){
			case 1:
				int temp1;
				cout<<"Ingrese su multiplicando";
				cin>>temp1;
				cout<<p -> Multiplicacion(temp1)<<endl;
				break;
			case 2:
				int j, k;
				cout<<"Ingrese 1: ";
				cin>>j;
				cout<<"Ingrese 2: ";
				cin>>k;
				Matriz *l = new Matriz(j,k);
				cout<<p -> Suma(*l)<<endl;
				l -> ~Matriz();
				break;
			case 3:
				int ja, ka;
				cout<<"Ingrese 1: ";
				cin>>ja;
				cout<<"Ingrese 2: ";
				cin>>ka;
				Matriz *ja = new Matrizz(j,k);
				cout<<p -> Suma(*ja)<<endl;
				ja -> ~Matriz();
				break;
		}	
	
	/*Matriz *p = new Matriz(4,4);
	Matriz *j = new Matriz(4,4);
	cout<<p -> Suma(*j)<<endl;
	cout<<p -> Resta(*j)<<endl;
	cout<<p -> Multiplicacion(*j)<<endl;*/
	return 0;
}



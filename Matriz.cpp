#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>


#ifndef MATRIZ_CPP
#define MATRIZ_CPP
using namespace std;
class Matriz {
	private:
		int **matrizz;
		int ancho;
		int altura;
	protected:
	
	public:
		void llenarrandom(int an, int al);
		
		Matriz(){
			llenadorandom(5, 5);
			ancho = 5;
			altura = 5;
		}
		
		Matriz(int a, int b){
			ancho = a;
			altura = b;
			llenadorandom(a, b);
		}
		
		bool Suma(Matriz p){
			bool k = false;
			if(p.getAncho() == ancho && p.getAltura() == altura){
				for(int ab = 0; ab < ancho; ab++){
					for(int ba = 0; ba < altura ;ba++){
						matrizz[ab][ba] = matrizz[ab][ba]+p.getMatrizz()[ab][ba];
						cout<<"["<<matrizz[ab][ba]<<"]";
						
					}
					cout<<endl;
				}
				k = true;
			}else{
				k = false;
			}
			return k;
		}	
		
		bool Resta(Matriz p){
			bool k = false;
			if(p.getAncho() == ancho && p.getAltura() == altura){
				for(int ab = 0; ab < ancho; ab++){
					for(int ba = 0; ba < altura ;ba++){
						matrizz[ab][ba] = matrizz[ab][ba]-p.getMatrizz()[ab][ba];
						cout<<"["<<matrizz[ab][ba]<<"]";
						
					}
					cout<<endl;
				}
				k = true;
			}else{
				k = false;
			}
			return k;
		}
		
		bool Multiplicacion(int jk){
			bool k = false;
				for(int ab = 0; ab < ancho; ab++){
					for(int ba = 0; ba < altura ;ba++){
						matrizz[ab][ba] = matrizz[ab][ba]*jk;
						cout<<"["<<matrizz[ab][ba]<<"]";
						
					}
					cout<<endl;
				}
				k = true;
			return k;
		}
		
		void llenadorandom(int an, int al){
			srand(time(NULL));
			matrizz = new int *[al];
			for(int a = 0; a < al; a++){
				matrizz[a] = new int [an]; 
			}
			
			for(int a = 0;a < al;a++){
				for(int b = 0;b < an;b++){
					int temp;
					temp = rand()%10+1;
					matrizz[a][b] = temp;
				}
			}			
		}
		
		int getAltura(){
			return altura;
		}
		
		int setAltura(int x){
			altura = x;
		}
		
		int getAncho(){
			return ancho;
		}
		
		int setAncho(int x){
			ancho = x;
		}
		
		int** getMatrizz(){
			return matrizz;
		}
			
};
#endif

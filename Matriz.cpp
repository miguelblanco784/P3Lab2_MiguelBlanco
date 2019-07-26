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
		void llenarrandom();
		
		matriz(){
			llenadorandom();
			ancho = 5;
			altura = 5;
		}	
		
		void llenadorandom(){
			srand(time(NULL));
			matrizz = new int *[5];
			matrizz[0] = new int [5];
			matrizz[1] = new int [5];
			matrizz[2] = new int [5];
			matrizz[3] = new int [5];
			matrizz[4] = new int [5];
			for(int a = 0;a < 5;a++){
				for(int b = 0;b < 5;b++){
					int temp;
					temp = rand()%10+1;
					matrizz[a][b] = temp;
				}
			}			
		}	
};
#endif

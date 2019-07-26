#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>


#ifndef BITACORA_CPP
#define BITACORA_CPP
using namespace std;
class Bitacora{
	private:
		vector<bool> lista;
		vector<string> lista2;
	protected:
		
	public:
		Bitacora(){
			
		}
		
		void agregar(bool x,string operacion){
			this -> lista.push_back(x);
			this -> lista2.push_back(operacion);
		}
		
		void imprimir(){
			for(int i = 0; i<this -> lista.size();i++){
				cout<<i<<"-"<<this -> lista2[i]<<": ";
				if(this -> lista.at(i)){
					cout<<"Exito"<<endl;
				}else{
					cout<<"Fallido"<<endl;
				}
				
			}
		}
		
		void vaciar(){
			lista.clear();
			lista2.clear();
		}
		
		void eliminarultimo(){
		}
};
#endif


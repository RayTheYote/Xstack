#include <iostream>

#ifndef XSTACK
	#define XSTACK
	namespace xstack{
		struct nodo{ //Definicion de la estructura nodo
			int valor; //Valor que tendra cada nodo
			nodo *siguiente_nodo; //Apuntadaor encargado de apuntar al valor de memoria del nodo siguiente al que se definio
		};
	
		nodo *puntero_maestro=NULL; //Puntero encargado de apuntar el nodo en el tope de la pila
		
		void push(int val){ //Funcion encargada de agregar nodos a la pila
			nodo *nodo_dummy=new nodo;
			nodo_dummy->valor=val;
			nodo_dummy->siguiente_nodo=puntero_maestro;
			puntero_maestro=nodo_dummy;
		}
		
		int pop(){ //Funcion encargada de quitar el nodo en el tope de la pila
			nodo *nodo_dummy=puntero_maestro;
			puntero_maestro=nodo_dummy->siguiente_nodo;
			if(delete nodo_dummy){
				return 0;
			}
			else{
				return -1;
			}
		}
	
		void show(){ //Funcion encargada de mostrar todos los elementos de la pila
			nodo *nodo_dummy=puntero_maestro;
			while(nodo_dummy != NULL){
				std::cout<<nodo_dummy->valor<<"\n";
				nodo_dummy=nodo_dummy->siguiente_nodo;
			}
		}
		
		int first_element(){ //Funcion encargada de devolver el primer nodo que se ingreso a la pila
			return puntero_maestro->valor;
		}
	
		int last_element(){ //Funcion encargada de devolver el ultimo nodo que se ingreso a la pila
			nodo *nodo_dummy=puntero_maestro;
			while(nodo_dummy->siguiente_nodo != NULLL){
				nodo_dummy=nodo_dummy->siguiente_nodo;
			}
			return nodo_dummy->valor;
		}
	}
#endif

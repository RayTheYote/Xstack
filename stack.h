#include <iostream>

namespace xstack{
	struct nodo{
		int valor;
		nodo *siguiente_nodo;
	};
	
	nodo *puntero_maestro=NULL;
	
	void push(int val){
		nodo *nodo_dummy=new nodo;
		nodo_dummy->valor=val;
		nodo_dummy->siguiente_nodo=puntero_maestro;
		puntero_maestro=nodo_dummy;
	}
	
	int pop(){
		nodo *nodo_dummy=puntero_maestro;
		puntero_maestro=nodo_dummy->siguiente_nodo;
		if(delete nodo_dummy){
			return 0;
		}
		else{
			return -1;
		}
	}

	void show(){
		nodo *nodo_dummy=puntero_maestro;
		while(nodo_dummy != NULL){
			std::cout<<nodo_dummy->valor<<"\n";
			nodo_dummy=nodo_dummy->siguiente_nodo;
		}
	}
}

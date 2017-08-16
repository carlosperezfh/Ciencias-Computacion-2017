#include <iostream>

using namespace std;

class Nodo{
	public:
		
}

class Lista{
    private:
        Nodo *cabeza; //Primer elemento de la lista

    public:
        Lista(){
            this->cabeza = NULL; //La lista parte sin nada
        }

        //Getter y setter de la cabeza
        void setCabeza(Nodo *nodo){
            this->cabeza = nodo;
        }
        Nodo *getCabeza(){
            return this->cabeza;
        }

        /*Devuelve el ultimo nodo de la lista.
        Busca la cabeza, y si no es NULL, va avanzando
        por los siguientes hasta que encuentra el final
        que si tiene NULL*/
        Nodo *getUltimo(){
            Nodo *aux;
            aux = this->cabeza;
            if(aux){
                while(aux->getSiguiente() != NULL){
                    aux = aux->getSiguiente();
                }
            }
            return aux;
        }

        /*Esta funcion busca un string, ya que nuestra
        lista es de strings. Se puede reemplazar string
        por cualquier otro tipo, siempre que se cambie en Nodo */
        Nodo *buscar(string valor){
            Nodo *aux;
            aux = this->cabeza;
            while(aux){
                if(aux->getValor() == valor)
                    return (aux); //Si encuentra, retorna
                aux = aux->getSiguiente(); //Si no, avanza al siguiente
            }
            return NULL; //Si no esta en la lista, retorna nulo
        }

        /* Funcion para insertar un nodo nuevo.
        Recibe el valor a agregar, lo convierte en un nodo
        y lo agrega a la lista.
        Si el ultimo nodo existe, se lo agrega a la cola.
        Si el ultimo no existe, la lista esta vacia, por
        lo tanto lo agrega como cabeza
        */
        void *insertar(string valor){
            nodo *nodoNuevo, *aux;
            nodoNuevo = newNodo(valor);)
            aux = this->getUltimo();
            if(aux)
                aux->setSiguiente(nodoNuevo)
            else
                this->setCabeza(nodoNuevo);

            return;
        }
};

void Lista::Lista(){
	
	
}
/*
int main(){
	Lista inicio;
	inicio.insertar("cc");
	//cout << factura.getnum_fac();
	system("pause>nul");
	return 0;
	
	
}
*/

/* segunda modificacion*/
/* segunda modificacion*/
/* commit para demostrar al profesor*/

#include <iostream>
#include "Fecha.h"

using namespace std;

int main()
{
    unsigned int dia, mes;
    int anho;
    do
    {
        cout<<" dia "<<endl;
        cin>>dia;
        cout<<"mes"<<endl;
        cin>>mes;
        cout<<"dos ultimos digitos del a�o"<<endl;
        cin>>anho;
    }
    while(!esCorrecta(dia,mes,anho));

    Fecha obj_fecha(dia,mes,anho);
    //obj_fecha.cambiarFecha(10,31,1984); //Intentamos cambiar la fecha a una err�nea. Mostrar� un mensaje de error.


    obj_fecha.imprimirFecha(); //Utilizamos la funci�n imprimir fecha

    obj_fecha.adicionardias(4,mes,anho);
    //obj_fecha.
    obj_fecha.imprimirFecha();

    return 0;
}

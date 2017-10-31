#include "complejofinal.h"

int main()
{
    // declaraci�n de n�meros complejos
    complejo c1(1.0, 1.0);
    complejo c2(2.0, 2.0);
    complejo c3;
    c3.SetData();    //pide datos para c3
    complejo c4(4.0);

    complejo c1.Suma(c2);   //c1+c2
    complejo resta = c1.Resta(c3);  //c1-c3
    complejo producto = c2.Multiplica(c4);  //c2*c4
    complejo cociente = c1.Cociente(c3);    //c1/c3

    cout << "Primer complejo: ";    c1.Prt();
    cout << "Segundo complejo: ";   c2.Prt();
    cout << "Tercer complejo: ";    c3.Prt();
    cout << "Suma: ";               sumar.Prt();
    cout << "Resta: ";              resta.Prt();
    cout << "Producto: ";           producto.Prt();
    cout << "Cociente: ";           cociente.Prt();

    return 0;
}

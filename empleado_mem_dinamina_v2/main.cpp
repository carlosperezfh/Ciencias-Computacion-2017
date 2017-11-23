#include "claseempleado.h"
#include "fecha.h"
#include "empresa.h"

enum departamento {Logistica=2000,RRHH=3000,Almacen=1500};
int main()
{
    /*char nombreM[10];
    unsigned int diaM=0,mesM=0;
    int sueldoM=0,anioM=0;*/



    Empresa inserEmp(4);
    //Empresa datEmp("Cisco",20548503877);
    Fecha ee;

    inserEmp.nempleados[0].setsalario(0);
    ee.cambiarFecha(12,02,1980);
    inserEmp.insertarEmpleado("Aliaga",5000,ee);
    inserEmp.nempleados[0].listarempleados();

    ee.cambiarFecha(12,11,1974);
    inserEmp.insertarEmpleado("Sosa",4000,ee);
    inserEmp.nempleados[1].listarempleados();
    return 0;
}

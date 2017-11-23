#ifndef CLASEEMPLEADO_H_INCLUDED
#define CLASEEMPLEADO_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
//#include <conio>
#include <math.h>
#include "fecha.h"

using namespace std;
//enum departamento {Logistica,RRHH,Almacen};

class Empleado  {
    public:
        Empleado() = default;
        Empleado(string,int,Fecha);

        void setnombre(string n);
        string getnombre();
        void setsalario(int sal);
        int get_salario(int gsal);
        void setfec_ing(unsigned int,unsigned int ,int);
        Fecha getfec_ing(int gfi);
        void listarempleados();
        void incrementarsueldo();
        int salario;
    private:
        string nombre;
        Fecha fec_ing;
};




#endif // CLASEEMPLEADO_H_INCLUDED

#ifndef EMPRESA_H_INCLUDED
#define EMPRESA_H_INCLUDED
#include "fecha.h"
#include "claseempleado.h"
class Empresa : public Empleado{
    public:
        Empresa()=default;
        Empresa(int numEmp);
        Empresa(string,long long);
        ~Empresa(){delete[] nempleados;}
        //Empresa(string,int,enum);
        Empleado *nempleados;
        void registrarempresa();

        void insertarEmpleado(string,int,Fecha);
        void setNumemple(int ne);
        int getNumemple();

        int numEmp;

    private:
        string nombre;
        long long ruc;

};



#endif // EMPRESA_H_INCLUDED

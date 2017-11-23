#include "claseempleado.h"
#include "fecha.h"
#include "empresa.h"

Empleado::Empleado(string nombre_,int salario_,Fecha fec_ing_){
    nombre=nombre_;
    salario=salario_;
    fec_ing=fec_ing_;
}

void Empleado::setnombre(string n_n){
    nombre=n_n;
}
string Empleado::getnombre(){
    return nombre;
}
void Empleado::setsalario(int n_sal){
    salario=n_sal;
}
int Empleado::get_salario(int n_sal){
    return salario;
}
void Empleado::setfec_ing(unsigned int d_,unsigned int m_,int a_){
    fec_ing.cambiarFecha(d_,m_,a_);
}

Fecha Empleado::getfec_ing(int n_gfi){
    //Fecha retornar;
    //return retornar.imprimirFecha();
    return fec_ing;
}

void Empleado::listarempleados(){
    cout<<endl;
    cout<<nombre<<" "<<salario<<"  ";

    fec_ing.Fecha::imprimirFecha();

}

void Empleado::incrementarsueldo(){

        salario=salario*1.10;

}




#include "fecha.h"
#include "claseempleado.h"
#include "empresa.h"
#include <vector>

Empresa::Empresa(int numEmp){
    this->numEmp=numEmp;
    nempleados=new Empleado[numEmp];

    //cout<<numEmp<<endl;
}

Empresa::Empresa(string nombre_,long long ruc_){
    nombre=nombre_;
    ruc=ruc_;
}
void Empresa::insertarEmpleado(string NameEmple,int sueldo_ ,Fecha fec_ing_emple ){
    int i=0;
    cout<<nempleados[0].salario<<endl;
    if (nempleados[i].salario == 0){
        nempleados[i].setnombre(NameEmple);
        nempleados[i].setsalario(sueldo_);
        nempleados[i].setfec_ing(fec_ing_emple.getDia(),fec_ing_emple.getMes(),fec_ing_emple.getAnho());
    }
    i++;
    nempleados[i].setnombre(NameEmple);
    nempleados[i].setsalario(sueldo_);
    nempleados[i].setfec_ing(fec_ing_emple.getDia(),fec_ing_emple.getMes(),fec_ing_emple.getAnho());

    cout<<i<<endl;


}

void Empresa::setNumemple(int new_ne){
    numEmp=new_ne;
}
int Empresa::getNumemple(){
    return numEmp;
}


#include <iostream>
#include "Fecha.h"

using namespace std;

Fecha::Fecha(unsigned int d, unsigned int m, int a)
{
    dia = d;
    mes = m;
    anho = a;
}
unsigned int Fecha::getDia()
{
    return dia;
}
unsigned int Fecha::getMes()
{
    return mes;
}
int Fecha::getAnho()
{
    return anho;
}


void Fecha::imprimirFecha()
{
    cout<<dia<<"/"<<mes<<"/"<<anho<<endl;
}
void Fecha::cambiarFecha(unsigned int d, unsigned int m, int a){
    /*if(esCorrecta(d,m,a))
    {
        dia = d;
        mes = m;
        anho = a;
    }
    else
    {
        cout<<"fecha incorrecta";
    }*/
    dia = d;
    mes = m;
    anho = a;

}
void Fecha::adicionardias(unsigned int d, unsigned m, int a){
    int arrayMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (esBisiesto(a)){
        //cout<<"es bisiesto"<<endl;
        arrayMes[1] = {29};
    }
    //cout<<"NO es bisiesto"<<endl;

    //cout<<"el valor de ArrayMes es: "<<arrayMes[1]<<endl;
    int temp=0;
    //temp=dia;
    temp=dia+d;
    //cout<<"primer temp "<<temp<<endl;

    if (m!=mes)   //m es 10 y mes es 4
        m=mes;

    if(arrayMes[m-1]==28){
        cout<<"se metio al 28"<<endl;
        if (temp >= 28)
        {
            temp=(dia+d)-28;
            cout<<"temp mayor que 28 "<<temp<<endl;
            dia=temp;
            mes=m+1;
        }
        else
        {
            cout<<"tambien se metio al else"<<endl;
            temp=dia+d;
            dia=temp+1;
            mes=m;
        }
        anho=a;
    }


    if(arrayMes[m-1]==29)
    {
        cout<<"se metio al 29"<<endl;
        if (temp >= 29)
        {
            temp=(dia+d)-29;
            cout<<"temp mayor que 29 "<<temp<<endl;
            dia=temp;
            mes=m+1;
        }
        else
        {
            temp=dia+d;
            dia=temp;
            mes=m;
        }
        anho=a;
    }



    if(arrayMes[m-1]==30)
    {
        cout<<"se metio al 30"<<endl;
        if (temp >= 30)
        {
            temp=(dia+d)-30;
            dia=temp;
            mes=m+1;
        }
        else
        {
            temp=dia+d;
            dia=temp;
            mes=m;
        }
        anho=a;
    }

    if(arrayMes[m-1]==31)
    {
        cout<<"se metio al 31"<<endl;
        if (temp > 31)
        {
            temp=(dia+d)-31;
            cout<<"temp mayor que 31 "<<temp<<endl;
            dia=temp-1;
            mes=m+1;

        }
        else
        {
            temp=dia+d;
            dia=temp;
            mes=m;
        }
        anho=a;
    }

}

bool esCorrecta(unsigned int d, unsigned int m, int a)
{
    unsigned int arrayDiasMes[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if(a==0) return false; //Aporte de susmel en comentarios.
    if(d<=0||d>31) return false;
    if(m<=0||m>12) return false;
    if(m==2 && d>29) return false;
    if(arrayDiasMes[m-1]<d) return false;  //si la posicion del indice en el array dia mes es menor que el dia ingresado retorna false
    if(m==2 && d==29 && !esBisiesto(a)) return false;
    return true;

}
bool esBisiesto(int a)
{
    if (((a%4==0)||(a%400==0))&&(a%100!=0)) return true;
    else return false;
}



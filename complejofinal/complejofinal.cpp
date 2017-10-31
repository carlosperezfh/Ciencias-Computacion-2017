#include "complejofinal.h"
complejo::complejo(){
    real = 0.0;
    imag = 0.0;
}
complejo::complejo(double re,double im)
{
    real = re;
    imag = im;
}
void complejo::SetData(void){
    cout <<"Parte real: ";
    cin  >> real;
    cout <<"Parte imaginaria: ";
    cin  >> imag;
}
void complejo::SetReal(double re){
    real = re;
}
void complejo::SetImag(double im){
    imag = im;
}
complejo complejo::Suma(complejo c){
    complejo cs;
    cs.real = real + c.real;
    cs.imag = imag + c.imag;
    return cs;
}
complejo complejo::Resta(complejo c){
    complejo cr;

    return cr;
}
complejo complejo::Multiplica(complejo c){
    complejo cm;

    // (a,b) * (c,d) = (ac-bd, ad+bc)
    return cm;
}
complejo complejo::Cociente(complejo c){
    complejo cc;
    // (a,b)/(c,d) = ((ac+bd)/(c^2+d^2) , (bc-ad)/(c^2 + d^2 ))
    return cc;
}



#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

bool esCorrecta(unsigned int d, unsigned int m, int a);
bool esBisiesto (int a);
class Fecha
{
    public:
        Fecha();
        Fecha(unsigned int d, unsigned int m, int a); //Constructor de la clase fecha, recibe como parámetros un día (d), un mes (m) y un año (a).
        unsigned int getDia(); //Nos devuelve el día
        unsigned int getMes(); //Nos devuelve el mes
        int getAnho(); //Nos devuelve el año
        void imprimirFecha(); //Muestra por pantalla la fecha en formato d/m/a
        void cambiarFecha(unsigned int d, unsigned int m, int a); //Cambia la fecha
        void adicionardias(unsigned int d,unsigned int m,int anho);
    private:
        unsigned int dia;
        unsigned int mes;
        int anho; //Años a.d.C.
};


#endif // FECHA_H_INCLUDED

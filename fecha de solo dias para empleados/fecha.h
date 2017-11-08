#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED

bool esCorrecta(unsigned int d, unsigned int m, int a);
bool esBisiesto (int a);
class Fecha
{
    public:
        Fecha();
        Fecha(unsigned int d, unsigned int m, int a); //Constructor de la clase fecha, recibe como par�metros un d�a (d), un mes (m) y un a�o (a).
        unsigned int getDia(); //Nos devuelve el d�a
        unsigned int getMes(); //Nos devuelve el mes
        int getAnho(); //Nos devuelve el a�o
        void imprimirFecha(); //Muestra por pantalla la fecha en formato d/m/a
        void cambiarFecha(unsigned int d, unsigned int m, int a); //Cambia la fecha
        void adicionardias(unsigned int d,unsigned int m,int anho);
    private:
        unsigned int dia;
        unsigned int mes;
        int anho; //A�os a.d.C.
};


#endif // FECHA_H_INCLUDED

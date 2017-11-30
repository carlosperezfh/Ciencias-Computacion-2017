#include "Clases.h"

void printHelp()
{
    cout<<"FIXTURE ELIMINATORIAS 2016"<<endl;
    cout<<"Ingrese una opcion"<<endl;
    cout<<"1. Generar Tabla"<<endl;
    cout<<"2. Generar Fixture"<<endl;
    cout<<"3. Ver Equipo"<<endl;
    cout<<"4. Tabla de Posiciones"<<endl;
    cout<<"5. Guardar Fixture"<<endl;
    cout<<"6. Cargar Fixture"<<endl;
    cout<<"7. Salir"<<endl;
}

void generarTabla()
{
    Evento nombrepais;//En el constructor importa los equipos

    nombrepais.printTabla();
    nombrepais.llenarvector();
    nombrepais.printTodosLosPartidos();
    nombrepais.borrarEquiposRepetidos();
    nombrepais.printTodosLosPartidos();

    nombrepais.escogerEquipo();


}


void generarFixture() {
    Evento genFixture;
    //genFixture.escogerEquipo();
}
void verEquipo() {}
void verTablaDePosiciones() {}
void guardarFixture() {}
void cargarFixture() {}

void consola()
{
    int a;
    printHelp();



    cin >> a;
    switch(a) {
    case 1:
        generarTabla();
        break;
    case 2:
        generarFixture();
        break;
    case 3:
        verEquipo();
        break;
    case 4:
        verTablaDePosiciones();
        break;
    case 5:
        guardarFixture();
        break;
    case 6:
        cargarFixture();
        break;
    case 7:
        cout << "Se sale con exito" << endl;
        break;
    default:
        cout << "Ingrese un numero admitido" << endl;
    }
}

int main()
{
    srand(time(0));
    consola();

    return 0;
}



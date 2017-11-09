#include "player.h"
#include "equipos.h"

int main()
{
    Jugador a1("Montenol", 1, "Arquero", 10);
    a1.printj();
    cout<<endl;
    cout<<endl;
    a1.setName("Svarcic");
    a1.printj();
    a1.getName();
    a1.setPosition("dd");
    a1.setAggressivity(77);
    a1.printj();

    /*
    Jugador a2("Cayo", 13, "Defensor", 10);
    Jugador a3("adrian", 4,"Defensor", 10);
    Jugador a4("Marcelo", 5, "Defensor", 10);
    Jugador a5("Ze Carlos", 8,"Defensor", 10);
    Jugador a6("Paulinho", 6, "Volante", 10);
    Jugador a7("Jugersinho", 10,"Volante", 10);
    Jugador a8("Fibao", 9, "Volante", 10);
    Jugador a9("Cornelio",7, "Delantero", 10);
    Jugador a10("Neymar", 10,"Delantero", 10);
    Jugador a11("Gabriel",22,"Delantero", 10);

    Jugador b1("Bravo", 1, "Arquero", 10);
    Jugador b2("Medel", 13,"Defensor", 10);
    Jugador b3("Vargas",4,"Defensor", 10);
    Jugador b4("Valdivia",5,"Defensor", 10);
    Jugador b5("Milanovich",21,"Defensor", 10);
    Jugador b6("Salas", 10,"Volante", 10);
    Jugador b7("Zamorano", 8,"Volante", 10);
    Jugador b8("Cortisona",6,"Volante", 10);
    Jugador b9("Bastidas", 7,"Delantero", 10);
    Jugador b10("sanchez",23,"Delantero", 10);
    Jugador b11("Vidal",9, "Delantero", 10);*/
    //a1.printj();
    //Jugador dat_jug;
    //dat_jug.addplayer(a1); //  = nombrepais.vEqui[0]
    //dat_jug.addplayer(a2);

    Equipos equipo1(2);
    equipo1.jugadores[0].setName("Pizzi");
    equipo1.reload(2);
    equipo1.jugadores[0].printj();

    for(int i=0;i<equipo1.getTam();i++){
        equipo1.jugadores[i].setName("jjj");
        equipo1.jugadores[i].setNumber(i);
        equipo1.jugadores[i].setPosition("aaa");
        equipo1.jugadores[i].setAggressivity(50);
    }

    cout<<endl;
    cout<<endl;
    /*
    for(int i=0;i<equipo1.getTam();i++)
        equipo1.jugadores[0].printj();
*/
    cout<<endl;
    cout<<endl;

    return 0;
}

El archivo fixture2.h tiene 3 clases

- Equipos
- fecha
- partidos
- listapartidos

En la clase Equipos, definimos los parametros de una tabla de posiciones, tales como partidos jugados,
partidos ganados, puntaje, etc. Tambien el nombre de los equipos.

En la clase fecha implemtamos dos vectores vEqui y vlistmatch, en esta clase tendriamos que imprimir
la tabla de posiciones, llenas los vectores, generar partidos, etc. Tambien implementaremos las 
formulas para calcular el numero de fechas, segun el numero de equipos

En la clase listapartidos, calcularemos  y generaremos el fixture del torneo, es decir, si son
6 equipos, el numero de partidos en el torneo que jugaria cualquier equipo serian 10, (5 partidos
en la primera rueda y 5 partidos en la segunda rueda). al calcular los partidos de los equipos, 
se generarian un partidos donde el equipo1 juega contra si mismo o tambien se debe considerar que 
en una fecha donde se juegan 3 partidos, teniendo en cuenta que son 6 equipos, no haya 
partidos repetidos, ni que un equipo juegue dos partidos
1
2
3
4
5
6

fecha 1		fecha 2 ...... fecha 10
1 - 2		1 - 3		6 - 1
3 - 4		4 - 5		2 - 5
5 - 6		2 - 6		3 - 5


En el main.cpp implementamos un menu con opciones, objetos con nombres de equipos y 
caracteristicas (atributos de una clase).
Tambien creamos un vector tipo Equipos, iremos pasando lo instanciado a metodos, para que 
finalmente solo queden funciones  y unos pocos objetos, tal que, la mayoria de procedimientos
esten en metodos y el software sea dinamico(cualquier numero de equipos)

Por el momento al compilar el proyecto, usaremos solo la opcion 1, para observar la etapa 
en que se encuentra el trabajo.

Los comentarios de este tipo /* comentario */ son para describir la accion de  cada linea
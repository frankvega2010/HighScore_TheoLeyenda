#include <iostream>
using namespace std;
#include "../Include/HighScore.h"
void main() {
	//creo el HighScore
	HighScore* HS = new HighScore(5);
	//estas variables ya deberia tenerlas en el jugador que tengas vos para tu proyecto pero te las 
	//creo para mostrarte un ejemplo.
	int puntajeJugador = 1500;
	char nombreJugador[TAM_NOMBRE];
	char nombreJugador2[TAM_NOMBRE];
	cout << "Ingrese el nombre del jugador:";
	cin.getline(nombreJugador,TAM_NOMBRE);
	//inicializo el HighScore
	HS->InicializarHighScore();
	//inserto un nuevo puntaje en el highScore
	HS->InsertarPuntaje(puntajeJugador, nombreJugador);
	//muestro los puntajes
	HS->MostrarPuntajes();
	cin.get();
	//inserto otro jugador
	cout << "Insertando otro jugador" << endl;
	nombreJugador2[0] = 'T';
	nombreJugador2[1] = 'a';
	nombreJugador2[2] = 't';
	nombreJugador2[3] = 'i';
	nombreJugador2[4] = '\0';

	puntajeJugador = 500;
	HS->InsertarPuntaje(puntajeJugador, nombreJugador2);
	//vuelvo a mostrar los puntajes.
	HS->MostrarPuntajes();
	fflush(stdin);
	cin.get();

}
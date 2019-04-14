#include <iostream>
using namespace std;
#include "../Include/HighScore.h"
void main() {
	HighScore* HS = new HighScore(5);
	int puntajeJugador = 1500;
	char nombreJugador[TAM_NOMBRE];
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
	nombreJugador[0] = 'T';
	nombreJugador[1] = 'a';
	nombreJugador[2] = 't';
	nombreJugador[3] = 'i';
	puntajeJugador = 500;
	HS->InsertarPuntaje(puntajeJugador, nombreJugador);
	//vuelvo a mostrar los puntajes.
	HS->MostrarPuntajes();
	fflush(stdin);
	cin.get();

}
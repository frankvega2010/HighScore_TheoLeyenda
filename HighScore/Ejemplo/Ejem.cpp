#include <iostream>
using namespace std;
#include "../Include/HighScore.h"
void main() {
	HighScore* HS = new HighScore(5);
	int puntajeJugador = 1500;
	char nombreJugador[TAM_NOMBRE];
	char nombreDefecto[TAM_NOMBRE];
	nombreDefecto[0] = 'S';
	nombreDefecto[1] = 'i';
	nombreDefecto[2] = 'n';
	nombreDefecto[3] = ' ';
	nombreDefecto[4] = 'N';
	nombreDefecto[5] = 'o';
	nombreDefecto[6] = 'm';
	nombreDefecto[7] = 'b';
	nombreDefecto[8] = 'r';
	nombreDefecto[9] = 'e';
	nombreDefecto[10] = '\0';
	cout << "Ingrese el nombre del jugador:";
	cin.getline(nombreJugador,TAM_NOMBRE);
	//inicializo el HighScore
	HS->InicializarHighScore();
	HS->InsertarPuntaje(puntajeJugador, nombreJugador);
	HS->InsertarPuntaje(50, nombreDefecto);
	HS->InsertarPuntaje(75, nombreDefecto);
	HS->InsertarPuntaje(25, nombreDefecto);
	HS->InsertarPuntaje(80, nombreDefecto);
	HS->MostrarPuntajes();
	fflush(stdin);
	cin.get();

}
#include <iostream>
#include <string>
#include "PlayerScore.h"
using namespace std;
#ifndef HIGHSCORE
#define HIGHSCORE
class HighScore {
	private:
		PlayerScore *playerScore;
		int tamArreglo;
		int pos;
		bool inicializado;
		bool primeraVez;
	protected:
	void OrdenarPuntajes();
	public:
		HighScore(int tamanio);
		~HighScore();
		void InsertarPuntaje(int _puntaje, char _nombre[TAM_NOMBRE]);
		void InicializarHighScore();
		int MostrarMayorPuntaje();
		int MostrarMenorPuntaje();
		void MostrarPuntajes();
};
#endif
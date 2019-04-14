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
	public:
		HighScore(int tamanio);
		~HighScore();
		void InsertarPuntaje();
		void OrdenarPuntajes();
		void MostrarMayorPuntaje();
		void MostrarMenorPuntaje();
		void MostrarPuntaje();
};
#endif
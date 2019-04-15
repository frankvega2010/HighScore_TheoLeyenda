#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYERSCORE
#define PLAYERSCORE
#define TAM_NOMBRE 125
class PlayerScore{
	private:
		int puntaje;

	public:
		char nombre[TAM_NOMBRE];
		PlayerScore();
		PlayerScore(int _puntaje, char _nombre[TAM_NOMBRE]);
		~PlayerScore();
		void SetPuntaje(int _puntaje);
		int GetPuntaje();
		void SetNombre(char _nombre[TAM_NOMBRE]);
		void MostrarNombre();
		void CambiarNombre();
		void BorrarNombre();
};

#endif
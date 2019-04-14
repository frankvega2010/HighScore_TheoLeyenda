#include <iostream>
using namespace std;
#ifndef PLAYERSCORE
#define PLAYERSCORE
#define TAM_NOMBRE 125
class PlayerScore{
	private:
		char* nombre;
		int puntaje;
	public:
		PlayerScore();
		PlayerScore(int _puntaje, char* _nombre[TAM_NOMBRE]);
		~PlayerScore();
		void SetPuntaje(int _puntaje);
		int GetPuntaje();
		void SetNombre(char* _nombre[TAM_NOMBRE]);
		void MostrarNombre();
		void CambiarNombre();
		
};

#endif
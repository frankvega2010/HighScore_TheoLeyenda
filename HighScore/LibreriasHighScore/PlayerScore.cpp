/*
class PlayerScore{
	private:
		char* nombre = new char[TAM_NOMBRE];
		int puntaje;
	public:
		PlayerScore();
		~PlayerScore();
		void setPuntaje(int _puntaje);
		int getPuntaje();
		void setNombre(char _nombre[TAM_NOMBRE]);
		void MostrarNombre();

};
*/
#include "PlayerScore.h"
PlayerScore::PlayerScore(){
	nombre = new char[TAM_NOMBRE];
	puntaje = 0;
}
PlayerScore::PlayerScore(int _puntaje, char* _nombre[TAM_NOMBRE]){
	puntaje = _puntaje;
	nombre = *_nombre;
}
void PlayerScore:: SetPuntaje(int _puntaje) {
	puntaje = _puntaje;
}
int PlayerScore::GetPuntaje() {
	return puntaje;
}
void PlayerScore::SetNombre(char* _nombre[TAM_NOMBRE]){
	nombre = *_nombre;
}
PlayerScore::~PlayerScore(){
	delete []nombre;
}
void PlayerScore::MostrarNombre() {
	cout<<"El nombre del jugador es:"<<nombre;
}
void PlayerScore::CambiarNombre() {
	cout << "Ingrese el nuvo nombre:";
	cin.getline(nombre, TAM_NOMBRE);
}
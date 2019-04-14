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
#include "../Include/PlayerScore.h";
PlayerScore::PlayerScore(){
	puntaje = 0;
	nombre[0] = 'S';
	nombre[1] = 'i';
	nombre[2] = 'n';
	nombre[3] = ' ';
	nombre[4] = 'N';
	nombre[5] = 'o';
	nombre[6] = 'm';
	nombre[7] = 'b';
	nombre[8] = 'r';
	nombre[9] = 'e';
	nombre[10] = '\0';
}
PlayerScore::PlayerScore(int _puntaje, char _nombre[TAM_NOMBRE]){
	puntaje = _puntaje;
	for (int i = 0; i < TAM_NOMBRE; i++) {
		nombre[i] = _nombre[i];
	}
}
void PlayerScore:: SetPuntaje(int _puntaje) {
	puntaje = _puntaje;
}
int PlayerScore::GetPuntaje() {
	return puntaje;
}
void PlayerScore::SetNombre(char _nombre[TAM_NOMBRE]){
	for (int i = 0; i < TAM_NOMBRE; i++) {
		nombre[i] = _nombre[i];
	}
}
PlayerScore::~PlayerScore(){
}
void PlayerScore::MostrarNombre() {
	cout<<"El nombre del jugador es:"<<nombre;
}
void PlayerScore::CambiarNombre() {
	cout << "Ingrese el nuvo nombre:";
	cin.getline(nombre, TAM_NOMBRE);
}
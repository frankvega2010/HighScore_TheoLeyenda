/*class HighScore {
private:
	PlayerScore *playerScore = new PlayerScore();
public:
	HighScore();
	~HighScore();
	void insertarPuntaje(char* nombre,int puntaje, int pos);
	void OrdenarPuntajes();
	void MostrarMayorPuntaje();
	void MostrarMenorPuntaje();
	void MostrarPuntaje();
};
#endif*/
#include "../Include/HighScore.h";
HighScore::HighScore(int _tam) {
	playerScore = new PlayerScore[_tam];
	tamArreglo = _tam;
}
HighScore::~HighScore() {
	delete[] playerScore;
}
void HighScore::InsertarPuntaje() {
	//debe insertar los puntajes
}
/*class HighScore {
private:
	PlayerScore *playerScore = new PlayerScore();
public:
	HighScore();
	~HighScore();
	void InsertarPuntaje(int _puntaje, char* _nombre[TAM_NOMBRE]);(HECHO)
	void InicializarHighScore();(HECHO)
	void OrdenarPuntajes();(HECHO)
	void MostrarMayorPuntaje();
	void MostrarMenorPuntaje();
	void MostrarPuntajes();
};
#endif*/
#include "../Include/HighScore.h";
HighScore::HighScore(int _tam) {
	playerScore = new PlayerScore[_tam];
	tamArreglo = _tam;
	pos = 0;
	inicializado = false;
}
HighScore::~HighScore() {
	delete[] playerScore;
}
void HighScore::InicializarHighScore() {
	for (int i = 0; i < tamArreglo; i++) {
		PlayerScore* ps = new PlayerScore();
		playerScore[i] = *ps;
	}
	inicializado = true;
}
void HighScore::InsertarPuntaje(int _puntaje, char _nombre[TAM_NOMBRE]) {
	if (inicializado) {
		PlayerScore* ps = new PlayerScore(_puntaje, _nombre);
		for (int i = 0; i < tamArreglo; i++) {
			if (ps->GetPuntaje() > playerScore[i].GetPuntaje()) {
				playerScore[i].SetPuntaje(ps->GetPuntaje());
				playerScore[i].SetNombre(ps->nombre);
				i = tamArreglo;
			}
		}
		delete ps;
		OrdenarPuntajes();
	}
	else
	{
		cout << "Error, El HighScore no ha sido inicializado" << endl;
	}
}
void HighScore::OrdenarPuntajes() {
	int aux;
	if (inicializado) {
		for (int i = 0; i < tamArreglo; i++) {
			for (int j = 1; j > tamArreglo; j++) {
				if (playerScore[i].GetPuntaje() < playerScore[j].GetPuntaje()) {
					aux = playerScore[i].GetPuntaje();
					playerScore[i].SetPuntaje(playerScore[j].GetPuntaje());
					playerScore[j].SetPuntaje(aux);
				}
			}
		}
	}
	else
	{
		cout << "Error, El HighScore no ha sido inicializado" << endl;
	}
}
int HighScore::MostrarMayorPuntaje() {
	if (inicializado) {
		OrdenarPuntajes();
		return playerScore[0].GetPuntaje();
	}
	else {
		cout << "Error, El HighScore no ha sido inicializado" << endl;
		return 0;
	}
}
int HighScore::MostrarMenorPuntaje() {
	if (inicializado) {
		OrdenarPuntajes();
		return playerScore[tamArreglo - 1].GetPuntaje();
	}
	else
	{
		cout << "Error, El HighScore no ha sido inicializado" << endl;
		return 0;
	}
}
void HighScore::MostrarPuntajes() {
	OrdenarPuntajes();
	for (int i = 0; i < tamArreglo; i++) {
		cout << playerScore[i].nombre << " " << playerScore[i].GetPuntaje()<<endl;
	}
}
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
	primeraVez = true;
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
		PlayerScore* auxPs = new PlayerScore();
		for (int i = 0; i < tamArreglo; i++) {
			for (int j = 1; j < tamArreglo; j++) {
				if (ps->GetPuntaje() > playerScore[i].GetPuntaje() && i < tamArreglo - 1) {
					auxPs->SetPuntaje(playerScore[i].GetPuntaje());
					auxPs->BorrarNombre();
					auxPs->SetNombre(playerScore[i].nombre);
					playerScore[i].SetPuntaje(ps->GetPuntaje());
					playerScore[i].BorrarNombre();
					playerScore[i].SetNombre(ps->nombre);
					ps->SetPuntaje(auxPs->GetPuntaje());
					ps->BorrarNombre();
					ps->SetNombre(auxPs->nombre);
				}
			}
			
			
		}
		delete ps;
		delete auxPs;
		OrdenarPuntajes();
	}
	else
	{
		cout << "Error, El HighScore no ha sido inicializado" << endl;
	}
}
void HighScore::OrdenarPuntajes() {
	//cout << "ESTOY ORDENANDO:" << endl;
	int aux;
	char auxNombre[TAM_NOMBRE];
	if (inicializado) {
		for (int i = 0; i < tamArreglo; i++) {
			for (int j = 1; j > tamArreglo; j++) {
				if (playerScore[i].GetPuntaje() < playerScore[j].GetPuntaje()) {
					aux = playerScore[i].GetPuntaje();
					*auxNombre = *playerScore[i].nombre;
					playerScore[i].SetPuntaje(playerScore[j].GetPuntaje());
					*playerScore[i].nombre = *playerScore[j].nombre;
					playerScore[j].SetPuntaje(aux);
					*playerScore[j].nombre = *auxNombre;
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

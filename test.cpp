#include <iostream>
using namespace std;

 
int main()

{

string nombre, tipo;
int nivel;
string nom[100];
string tip[100];
int nivell[100];
int e=0;
nombre = "si";

	cout << "*POKEDEX*"<< endl;
	cout << "*-*-*-*-*-*-*"<< endl;
	
	cout << "INGRESE NOMBRE DE SU POKEMON (ingreso no para finalizar): "<< endl;
	cin >> nombre;
	while (nombre != "no") {
	cout << "INGRESE NIVEL :"<< endl;
	cin >> nivel;

	cout << "INGRESE TIPO (F/A/T/E)"<< endl;
	cin >> tipo;
	
	cout << "INGRESE NOMBRE DE SU POKEMON (ingreso no para finalizar): "<< endl;
	cin >> nombre;
	
	nom[e]=nombre;
	tip[e]=tipo;
	nivell[e]=nivel;
	e++;
	
	}
	
	int i;
	for (i=0;i<= e; i++) {
	cout << nom[i];
	cout << tip[i];
	cout << nivell[i];
	}
	return 0;
}

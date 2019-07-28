#include <iostream>
using namespace std;

//declaracion de funciones
//string nomb_poke(); no me zalee es inpozzibleee!
int nivel_poke();
string tipo_poke();

//declaracion de variables
string nombre, tipo;
int nivel;
string nom[100];
string tip[100];
int nivell[100];
int e=0;
string consulta="";


int main()

{
	cout << "*POKEDEX*"<< endl;
	cout << "*-*-*-*-*-*-*"<< endl;
	
	while (consulta != "no") {
	
		cout << "INGRESE NOMBRE DE SU POKEMON : "<< endl;
		cin >> nombre;
		//nomb_poke();
			
		cout << "INGRESE NIVEL :"<< endl;
		nivel=nivel_poke();
		
		cout << "INGRESE TIPO (F/A/T/E)"<< endl;
		tipo=tipo_poke();

		cout << "DESEA CARGAR OTRO POKEMON (si/no): "<< endl;
		cin >> consulta;
	
	nom[e]=nombre;
	tip[e]=tipo;
	nivell[e]=nivel;
	
	e++;
	}
	// control de carga para verificar funcionamiento del array. 
	//No es necesario para el funcionamiento del software.	
	int i;
	for (i=0;i< e; i++) {
	cout << nom[i];
	cout << "  " << endl;
	cout << tip[i];
	cout << "  " << endl;
	cout << nivell[i];
	cout << "  " << endl;
	}
	// fin de control. 
	
	return 0;
}

//string nomb_poke()
//	{
//		cin >> nombre;
//		while (sizeof(nombre) > 1000){
//			cout << "nombre no valido ingres nuevamente su pokemon: " << endl;
//			cin >> nombre;
//		}
//		return nombre;
//	}
	
	
int nivel_poke()
	{
		cin >> nivel;
		while (nivel >1000){
			cout << "Nivel fuera de rango, ingrese nuevamente un numero: ";
			cin >> nivel;
		}
		return nivel;
	}
	
string tipo_poke(){
	string a,f,t,e;
	cin >> tipo;
	while (tipo != "f"){
		cout << " valor incorrecto, elija el tipo con una letra (t/f/a/e): ";
		cin >> tipo;
	}
	return tipo;
}
		


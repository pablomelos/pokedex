#include <iostream>
using namespace std;

//declaracion de funciones
string nomb_poke();
int nivel_poke();
string tipo_poke();
int max_level();

//declaracion de variables
string tipo;

string nomb;
string nombre;
int nivel;
string nom[300];
string tip[1000];
int nivell[1000];
int e=0;
string consulta="";
int total;
int maximo;
int cantmax;
int cantmin;
int cant500;
int id[150];

//minimos y maximos por tipo
int maxf;
int minf;
string pokemaxf;
string pokeminf;
int maxe;
int mine;
string pokemaxe;
string pokemine;
int maxt;
int mint;
string pokemaxt;
string pokemint;
int maxa;
int mina;
string pokemaxa;
string pokemina;
int cont_f=0;
int cont_e=0;
int cont_t=0;
int cont_a=0;
float nivelf=0;
float nivele=0;
float nivelt=0;
float nivela=0;
// check maximos y minimos para no harcodear.
int prumaxf=true;
int prumaxe=true;
int prumaxt=true;
int prumaxa=true;
int pruminf=true;
int prumine=true;
int prumint=true;
int prumina=true;


//bloque principal
int main()

{
	cout << "*POKEDEX*"<< endl;
	cout << "*-*-*-*-*-*-*"<< endl;
	
	while (consulta != "no") {
		
		nombre=nomb_poke();
			
		cout << "INGRESE NIVEL :"<< endl;
		nivel=nivel_poke();
		
		cout << "INGRESE TIPO (F/A/T/E)"<< endl;
		tipo=tipo_poke();
		
		cout << "DESEA CARGAR OTRO POKEMON (si/no): "<< endl;
		cin >> consulta;
	id[e]=e;
	nom[e]=nombre;
	tip[e]=tipo;
	nivell[e]=nivel;
	
	if (nivel > 500){
		cantmax ++;
		}else{
			if(nivel < 500){
			cantmin ++;}else
			cant500 ++;
		}
	
	if (tipo == "f"){
		if (prumaxf == true ||nivel > maxf){
			maxf=nivel;
			pokemaxf=nom[e];
			prumaxf=false;
		}else{ if (pruminf == true || nivel < minf ){
			minf= nivel;
			pokeminf=nom[e];
			pruminf=false;
		}
		}	nivelf=nivelf+nivel;
			cont_f ++;
			
	} else {
	}
	
		if (tipo == "e"){
		if (prumaxe == true ||nivel > maxe){
			maxe=nivel;
			pokemaxe=nom[e];
			prumaxe = false;
		}else{ if ( prumine == true || nivel < mine){
			mine= nivel;
			pokemine=nom[e];
			prumine= false;
		}
		}	nivele=nivele+nivel;
			cont_e ++;
	} else {
	}
	
		if (tipo == "t"){
		if (prumaxt == true || nivel > maxt){
			maxt=nivel;
			pokemaxt=nom[e];
			prumaxt=false;
		}else{ if (prumint == true || nivel < mint){
			mint= nivel;
			pokemint=nom[e];
			prumint=false;
		}
		}	nivelt=nivelt+nivel;
			cont_t ++;
	} else {
	}
	
		if (tipo == "a"){
		if (prumaxa == true || nivel > maxa){
			maxa=nivel;
			pokemaxa=nom[e];
			prumaxa=false;
		}else{ if ( prumina == true ||nivel < mina){
			mina= nivel;
			pokemina=nom[e];
			prumina=false;
		}
		}	nivela=nivela+nivel;
			cont_a ++;
	} else {
	}
	
	
	e++;
	} //fin de ciclo while.

	int i;
	for (i=0;i< e; i++) { //lectura con ciclo for.
		cout << "ID: " ;
		cout << id[i] << endl;
		cout <<"Nombre: ";
		cout << nom[i] << endl;
		cout << "Tipo: ";
		cout << tip[i] << endl;
		cout << "Nivel: " ;
		cout << nivell[i] << endl;
		cout << "  " << endl;
	
	}
	cout << "Promedio de nivel de tipo Fuego: "<< nivelf/cont_f <<endl;
	cout << "Pokemon tipo Fuego mas poderoso: " << pokemaxf << endl;
	cout << "Nivel: " << maxf << endl;
	cout << "Pokemon tipo Fuego mas debil: " << pokeminf << endl;
	cout << "Nivel: " << minf << endl;
	cout << endl;
	
	cout << "Promedio de nivel de tipo Electrico: "<< nivele/cont_e <<endl;
	cout << "Pokemon tipo Electrico mas poderoso: " << pokemaxe << endl;
	cout << "Nivel: " << maxe << endl;
	cout << "Pokemon tipo electrico mas debil: " << pokemine << endl;
	cout << "Nivel: " << mine << endl;
	cout << endl;
	
	cout << "Promedio de nivel de tipo Tierra: "<< nivelt/cont_t <<endl;
	cout << "Pokemon tipo Tierra mas poderoso: " << pokemaxt << endl;
	cout << "Nivel: " << maxt << endl;
	cout << "Pokemon tipo Tierra mas debil: " << pokemint << endl;
	cout << "Nivel: " << mint << endl;
	cout << endl;
	
	cout << "Promedio de nivel de tipo Agua: "<< nivela/cont_a <<endl;
	cout << "Pokemon tipo Agua mas poderoso: " << pokemaxa << endl;
	cout << "Nivel: " << maxa << endl;
	cout << "Pokemon tipo Agua mas debil: " << pokemina << endl;
	cout << "Nivel: " << mina << endl;
	cout <<"************************" << endl;
	
cout << "Pokemones con nivel mayor a 500: ";
cout << cantmax << endl;
cout << "Pokemones con nivel menor a 500: ";
cout << cantmin << endl;
cout << "Pokemones con nivel igual a 500: ";
cout << cant500 << endl;
	return 0;
}


	
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
	cin >> tipo;
	int i;
	
	while (!(tipo == "f" || tipo == "e" ||tipo == "t" || tipo == "a")){
	
		cout << " valor incorrecto, elija el tipo con una letra (t/f/a/e): ";
		cin >> tipo;
	}
	return tipo;
}

string nomb_poke(){
	string nombre;
	int a=11;
		while (a>10){ 
			cout << "INGRESE NOMBRE DE SU POKEMON : "<< endl;
			cin >> nombre;
			for (a=0;nombre[a]; a++){
				total=a;
				//cout << total;
			}
		if (total > 9){
			cout << ""<< endl <<"" << "nombre no valido" << endl  ;
			}
		return nombre;
		}
	}
	

int max_level(){
	maximo=1;
	if (nivel>maximo){
		maximo=nivel;
		return maximo;
		}
		

}



string tipo_f(){
	while (tipo == "f"){
		if (nivel > maxf){
			maxf=nivel;
		}else{ if ( nivel < minf){
			minf= nivel;
			
		}
		}	
	}
	cont_f ++;
}

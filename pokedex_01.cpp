#include <iostream>
#include <stdio.h>
#include <ctype.h> 
#include <conio.h>
using namespace std;
//declaracion de funciones
//string o char ?? nomb_poke(); //no me zalee es inpozzibleee!
int nivel_poke();
string tipo_poke();
int max_level();

//declaracion de variables
string tipo;
char nombre[10];
int nivel;
string nom[100];
string tip[100];
int nivell[100];
int e=0;
string consulta="";
int total;
int maximo;
//bloque principal
int main()
/*
                                           /
                        _,.------....___,.' ',.-.
                     .-'          _,.--"        |
                   ,'         _.-'              .
                  /   ,     ,'                   `
                 .   /     /                     ``.
                 |  |     .                       \.\
       ____      |___._.  |       __               \ `.
     .'    `---""       ``"-.--"'`  \               .  \
    .  ,            __               `              |   .
    `,'         ,-"'  .               \             |    L
   ,'          '    _.'                -._          /    |
  ,`-.    ,".   `--'                      >.      ,'     |
 . .'\'   `-'       __    ,  ,-.         /  `.__.-      ,'
 ||:, .           ,'  ;  /  / \ `        `.    .      .'/
 j|:D  \          `--'  ' ,'_  . .         `.__, \   , /
/ L:_  |                 .  "' :_;                `.'.'
.    ""'                  """""'                    V
 `.                                 .    `.   _,..  `
   `,_   .    .                _,-'/    .. `,'   __  `
    ) \`._        ___....----"'  ,'   .'  \ |   '  \  .
   /   `. "`-.--"'         _,' ,'     `---' |    `./  |
  .   _  `""'--.._____..--"   ,             '         |
  | ." `. `-.                /-.           /          ,
  | `._.'    `,_            ;  /         ,'          .
 .'          /| `-.        . ,'         ,           ,
 '-.__ __ _,','    '`-..___;-...__   ,.'\ ____.___.'
 `"^--'..'   '-`-^-'"--    `-^-'`.''"""""`.,^.`.--' 
 
 */
{
	cout << "*POKEDEX*"<< endl;
	cout << "*-*-*-*-*-*-*"<< endl;
	
	while (consulta != "no") {
		int a=11; // el choclo que continua es porque no se como corno llamar una funcion tipo char (si eso exite)
		while (a>10){ //ni que funcion aplicar para que me cuente las letras... aguante python!
			
			cout << "INGRESE NOMBRE DE SU POKEMON : "<< endl;
			cin >> nombre;
			for (a=0;nombre[a]; a++){
				total=a;
				//cout << total;
			}
	if (total > 9){
		cout << ""<< endl <<"" << "nombre no valido" << endl  ;
	}
			
			}
	 
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
	int i;
	for (i=0;i< e; i++) {
		nom[i];
		cout << "  " << endl;
		tip[i];
		cout << "  " << endl;
		nivell[i];
		cout << "  " << endl;
		cout << max_level();
	}
	// fin de control. 
	//cout << max_level();
	
	return 0;
}

/* intento de pajerara 1.
string nomb_poke()
	{
		cin >> nombre;
		while (sizeof(nombre) > 10){
			cout << "nombre no valido ingres nuevamente su pokemon: " << endl;
			cin >> nombre;
		}
		return nombre;
	}
	*/
	
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
	char a,f,t,e;
	cin >> tipo;
	int i;
	for(i = 0; tipo[i]; i++)
      tipo[i] = tolower(tipo[i]);
      //cout << tipo;
	while (tipo != "f"){ //no puedo pones mas condiciones ! el programa compila pero no ejecuta las restricciones que deseo.
	
		cout << " valor incorrecto, elija el tipo con una letra (t/f/a/e): ";
		cin >> tipo;
	}
	return tipo;
}
		
int max_level(){
	maximo=1;
	if (nivel>maximo){
		maximo=nivel;
		return maximo;
		}
		

}

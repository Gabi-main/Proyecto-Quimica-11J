#include <iostream>
#include <string>
#include <vector>
using namespace std;
//creamos la clase para elementos cuanticos 
class elementocuantico {
	public:
		string nombre;
		string configuracion;
		int n, l, ml, ms;
		elementocuantico ( string nombre_valor, string configuracion_valor , int n_valor, int l_valor, int ml_valor, int ms_valor){
		nombre = nombre_valor;
		configuracion = configuracion_valor;
		n = n_valor;
		l = l_valor;
		ml = ml_valor;
		ms = ms_valor;
	}
	//este será lo que se va a imprimir al final, por eso está en void
	void datos_cuanticos(){
		cout << "nombre" << nombre << endl;
		cout << "configuracion electronica" << configuracion << endl;
		cout << "números cuanticos"<< 
		"       n:" << n <<
		"       l:" << l <<
		"       ml:" << ml << 
		"       ms:" << ms << endl;
	}
};
// crear clase para la opcion 2 de elemento a 
class atomico {
	public:
		//aqui creamos las variables
		string elemento;
		int num_atomico;
		double masa;
		double radio_atomico;
		int protones;
		int neutrones;
		int electrones;
		// aqui colocamos el orden de las variables en cada clase para posteriormente imprimirlas el orden esta e nombre numero atomico masa etc 
		atomico( string elemento_valor, int num_atomico_v, double masa_v , double radio_atomico_v, int protones_v, int electrones_v, int neutrones_v){
			elemento = elemento_valor;
			num_atomico = num_atomico_v;
			masa = masa_v;
			radio_atomico= radio_atomico_v;
			protones = protones_v;
			electrones = electrones_v;
			neutrones = neutrones_v;
		}
		
			//void para imprimir valores atomicos
		void imprimir_valores_atomicos (){
		cout << "Elemento: " << elemento << endl;
        cout << "Número Atómico: " << num_atomico << endl;
        cout << "Masa Atómica: " << masa << " u" << endl;
        cout << "Radio Atómico: " << radio_atomico << " pm" << endl;
        cout << "Protones: " << protones << endl;
        cout << "Neutrones: " << neutrones << endl;
        cout << "Electrones: " << electrones << endl;
		}
		
		
};


int main (){
//crear el vector vector<LA CLASE> y la subclase ;
// para crear un elemento en la subclase es LA SUBCLASE.push_back(LA CLASE PRINCIPAL(ya va el nombre y los numeros n l ml ms
vector <elementocuantico> elemento;
elemento.push_back(elementocuantico("oxígeno" ,"1s2 2s2 2p4",2, 1, 0, -1));
elemento.push_back(elementocuantico("Hidrógeno", "1s1", 1, 0, 0, 1));
elemento.push_back(elementocuantico("Helio", "1s2", 1, 0, 0, -1));
elemento.push_back(elementocuantico("Nitrógeno", "1s2 2s2 2p3", 2, 1, -1, 1));

//aqui seria despues de definir cada elemento para la clase anterior ahora hay que definir esta clase( los 118)}
vector <atomico> elementos;
elementos.push_back(atomico("hidrógeno", 1, 1.008, 53, 1, 0, 1));
elementos.push_back(atomico("helio", 2, 4.002602, 31, 2, 2, 2));
elementos.push_back(atomico("oxigeno", 8, 15.999, 73, 8, 8, 8));
elementos.push_back(atomico("carbono", 6, 12.011, 70, 6, 6, 6));
elementos.push_back(atomico("nitrogeno", 7, 14.007, 65, 7, 7, 7));
int opcion;
	do {
		//menú
		cout <<" menu"<< endl;
		cout << "opciones"<< endl;
		cout<< "1- calculo de cuantico a elemento"<< endl;
		cout <<"2- valores atomicos" << endl;
		cout << "3- para salir" << endl;
		cin >> opcion;
		
		switch (opcion) { 
		//caso 1 del menú
		case 1 : {
		
			//crear variables q pediremos
			int n, l, ml, ms;
			//pedir variables y definir valor
			cout<<"introduce numeros cuanticos n, l , ml, ms"<< endl;
			cout<<"número cuantico principal(n)"; cin >> n;
			cout<< "l"; cin >> l;
			cout << "ml"; cin >>ml;
			cout << "ms"; cin >> ms;
			
			
			
			bool encontrar = false;
			for (size_t i = 0; i < elemento.size(); i++) {
				if (elemento[i].n == n and elemento[i].l ==l and elemento[i].ml == ml and elemento[i].ml == ml and elemento[i].ms == ms) {
					elemento[i].datos_cuanticos();
					encontrar = true;
					
				}
			}
			if (encontrar== false) {
				cout << "no se encontró elemento con esos números, intentalo otra vez"<< endl;
		}
			
			break;
			}
			case 2 : {
				
			string elemento;
			cout << "¿que elemento desea saber sus datos?"; cin >> elemento;
			
			bool encontrado = false;
			for (size_t i = 0 ; i <elementos.size(); i++){
				if (elementos[i].elemento == elemento){
					elementos[i].imprimir_valores_atomicos();
				encontrado = true;
				
				}
			}
			if (encontrado == false){
				cout << "elemento no encontrado, asegurate de escribirlo bien"<< endl;
			} break;
		
		}
		case 3: {
			cout << "Saliste del programa"<< endl;
			break;
		}
		
		default : {
			cout << "ingresa opcion válida" << endl;
			break;
		}
			
		}
	}  while (opcion != 3);
	
	
return 0;
	}   
		
		
		
		






#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
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
		cout << "Nombre: " << nombre << endl;
		cout << "Configuracion electronica: " << configuracion << endl;
		cout << "Numeros cuanticos "<< 
		"       n:" << n <<
		"       l:" << l <<
		"       ml:" << ml << endl;
	string ms1;
	ms1 = "1/2";
	string ms2;
	ms2 = "-1/2";
	
		if (ms == 1) {
			cout<<"ms " << ms1 << endl;
			
		} else if (ms== -1) {
			cout<<"ms " << ms2 << endl;
			
		}
		
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
        cout << "Número Atomico: " << num_atomico << endl;
        cout << "Masa Atomica: " << masa << " u" << endl;
        cout << "Radio Atomico: " << radio_atomico << " pm" << endl;
        cout << "Protones: " << protones << endl;
        cout << "Neutrones: " << neutrones << endl;
        cout << "Electrones: " << electrones << endl;
		}
		
		
};


int main (){
//crear el vector vector<LA CLASE> y la subclase ;
// para crear un elemento en la subclase es LA SUBCLASE.push_back(LA CLASE PRINCIPAL(ya va el nombre y los numeros n l ml ms
vector <elementocuantico> elemento;

elemento.push_back(elementocuantico("Americio" ,"5f7 7s2",5, 3, 3, 1));
elemento.push_back(elementocuantico("Curio" ,"6d1 7s2",5, 3, -2, 1));
elemento.push_back(elementocuantico("Berkelio" ,"5f9 7s2",5, 3, -2, -1));
elemento.push_back(elementocuantico("Californio" ,"5f10 7s2",5, 3, -1, -1));
elemento.push_back(elementocuantico("Einstenio" ,"5f11 7s2",5, 3, 0, -1));
elemento.push_back(elementocuantico("Fermio" ,"5f12 7s2",5, 3, 1, -1));
elemento.push_back(elementocuantico("Mendelevio" ,"5f13 7s2",5, 3, 2, -1));
elemento.push_back(elementocuantico("Nobelio" ,"5f14 7s2",5, 3, 3, -1));
elemento.push_back(elementocuantico("Lawrencio" ,"5f14 7s2 7p1",7, 1, -1, 1));
elemento.push_back(elementocuantico("Rutherfordio" ,"5f14 6d2 7s2",6, 2, -1, 1));
elemento.push_back(elementocuantico("Dubnio" ,"5f14 6d3 7s2",6, 2, 0, 1));
elemento.push_back(elementocuantico("Seaborgio" ,"5f14 6d4 7s2",6, 2, 1, 1));
elemento.push_back(elementocuantico("Bohrio" ,"5f14 6d5 7s2",6, 2, 2, 1));
elemento.push_back(elementocuantico("Hassio" ,"5f14 6d6 7s2",6, 2, -2, -1));
elemento.push_back(elementocuantico("Meitnerio" ,"5f14 6d7 7s2",6, 2, -1, -1));
elemento.push_back(elementocuantico("Darmstadtio" ,"5f14 6d8 7s2",6, 2, 0, -1));
elemento.push_back(elementocuantico("Roentgenio" ,"5f14 6d9 7s2",6, 2, 1, -1));
elemento.push_back(elementocuantico("Copernicio" ,"5f14 6d10 7s2",6, 2, 2, -1));
elemento.push_back(elementocuantico("Nihonio" ,"5f14 6d10 7s2 7p1",7, 1, -1, 1));
elemento.push_back(elementocuantico("Flerovio" ,"5f14 6d10 7s2 7p2",7, 1, 0, 1));
elemento.push_back(elementocuantico("Moscovio" ,"5f14 6d10 7s2 7p3",7, 1, 1, 1));
elemento.push_back(elementocuantico("Livermorio" ,"5f14 6d10 7s2 7p4",7, 1, -1, -1));
elemento.push_back(elementocuantico("Tenesino" ,"5f14 6d10 7s2 7p5",7, 1, 0, -1));
elemento.push_back(elementocuantico("Organeson" ,"5f14 6d10 7s2 7p6",7, 1, 1, -1));

elemento.push_back(elementocuantico("Hidrogeno" ,"1S1", 1, 0, 0, 1));
elemento.push_back(elementocuantico("Helio" ,"1S2", 1, 0, 0,-1));
elemento.push_back(elementocuantico("Litio" ,"1S2 2S1",2, 0, 0, 1));
elemento.push_back(elementocuantico("Berilio" ,"1S2 2S2 ",2, 0, 0, -1));
elemento.push_back(elementocuantico("Boro" ,"1S2 2S2 2P1",2, 1, -1, 1));
elemento.push_back(elementocuantico("Carbono" ,"1S2 2S2 2P2",2, 1, 0, 1));
elemento.push_back(elementocuantico("Nitrogeno" ,"1S2 2S2 2P3",2, 1, 1, 1));
elemento.push_back(elementocuantico("Oxigeno" ,"1S2 2S2 2P4",2, 1, -1, -1));
elemento.push_back(elementocuantico("Fluor" ,"1S2 2S2 2P5",2, 1, 0, -1));
elemento.push_back(elementocuantico("Neon" ,"1S2 2S2 2P6",2, 1, 1, -1));
elemento.push_back(elementocuantico("Sodio" ,"1S2 2S2 2P6 3S1",3, 0, 0, 1));
elemento.push_back(elementocuantico("Magnesio" ,"1S2 2S2 2P6 3S2",3, 0, 0, -1));
elemento.push_back(elementocuantico("Aluminio" ,"1S2 2S2 2P6 3S2 3P1",3, 1, -1, 1));
elemento.push_back(elementocuantico("Silicio" ,"1S2 2S2 2P6 3S2 3P2",3, 1, 0, 1));
elemento.push_back(elementocuantico("Fosforo" ,"1S2 2S2 2P6 3S2 2P3",2, 1, 1, 1));
elemento.push_back(elementocuantico("Azufre" ,"1S2 2S2 2P6 3S2 3P4",3, 1, -1, -1));
elemento.push_back(elementocuantico("Cloro" ,"1S2 2S2 2P6 3S2 3P5",3, 1, 0, -1));
elemento.push_back(elementocuantico("Argon" ,"1S2 2S2 2P6 3S2 3P6",3, 1, 1, -1));
elemento.push_back(elementocuantico("Potasio" ,"1S2 2S2 2P6 3S2 3P6 4S1",4, 0, 0, 1));
elemento.push_back(elementocuantico("Calcio" ,"1S2 2S2 2P6 3S2 3P6 4S2",4, 0, 0, -1));
elemento.push_back(elementocuantico("Escandio" ,"1S2 2S2 2P6 3S2 3P6 4S2 3D1",3, 2, -2, 1));
elemento.push_back(elementocuantico("Titanio" ,"1S2 2S2 2P6 3S2 3P6 4S2 3D2",3, 2, -1, 1));
elemento.push_back(elementocuantico("Vanadio" ,"1S2 2S2 2P6 3S2 3P6 4S2 3D3",3, 2, 0, 1));
elemento.push_back(elementocuantico("Cromo" ,"1S2 2S2 2P6 3S3 3P6 4S2 3D5", 3, 2, 2, 1));

elemento.push_back(elementocuantico("Reno" ,"4S2 3D10 4P6 5S2 4D5", 4, 2, 2, 1));
elemento.push_back(elementocuantico("Osmio" ,"4F14 5D6 6S2", 5, 2, -2, -1 ));
elemento.push_back(elementocuantico("Iridio" ,"4F14 5D7 6S2", 5, 2, -1, -1));
elemento.push_back(elementocuantico("Platino" , "4F14 5D9 6S2", 6, 0, 0, -1));
elemento.push_back(elementocuantico("Oro" ,"4F14 5D10 6S1", 6, 0, 0, 1));
elemento.push_back(elementocuantico("Mercurio" ,"4F14 5D10 6S2", 6, 0, 0, -1));
elemento.push_back(elementocuantico("Talio" ,"4F14 5D10 6S2 6P1", 6, 1, -1, 1));
elemento.push_back(elementocuantico("Plomo" ,"4F14 5D10 6S2 6P2", 6, 1, 0, 1));
elemento.push_back(elementocuantico("Bismuto" ,"4F14 5D10 6S2 6P3", 6, 1, 1, 1));
elemento.push_back(elementocuantico("Polonio" ,"4F14 5D10 2S2 6P4", 6, 1, -1, -1));
elemento.push_back(elementocuantico("Astato" ,"5F14 6D10 7S2 7P5", 7, 1, 0, -1));
elemento.push_back(elementocuantico("Radon" ,"4F14 5D10 6S2 6P6", 6, 1, 1, -1));
elemento.push_back(elementocuantico("Francio" ,"7S1", 7, 0, 0, 1));
elemento.push_back(elementocuantico("Radio" ,"7S2", 7, 0, 0, -1));
elemento.push_back(elementocuantico("Actinio" ,"6D1 7S2", 6, 2, -2, 1));
elemento.push_back(elementocuantico("Torio" ,"6D2 7S2", 6, 2, -1, 1));
elemento.push_back(elementocuantico("Protactinio" ,"5F2 6D1 7S2", 5, 3, -2, 1));
elemento.push_back(elementocuantico("Uranio" ,"5F3 6D1 7S2", 5, 3, -1, 1));
elemento.push_back(elementocuantico("Neptunio" ,"5F4 6D1 7S2", 5, 3, 0, 1));
elemento.push_back(elementocuantico("Plutonio" ,"5F6 6D1 7S2", 5, 3, -3, -1));

elemento.push_back(elementocuantico("Estaño", "5p2", 5, 1, 0, 1));
elemento.push_back(elementocuantico("Antimonio", "5p3", 5, 1, 1, 1));
elemento.push_back(elementocuantico("Telurio", "5p4", 5, 1, -1, -1));
elemento.push_back(elementocuantico("Yodo", "5p5", 5, 1, 0, -1));
elemento.push_back(elementocuantico("Xenón", "5p6", 5, 1, 1, -1));
elemento.push_back(elementocuantico("Cesio", "6s1", 6, 0, 0, 1));
elemento.push_back(elementocuantico("Bario", "6s2", 6, 0, 0, -1));
elemento.push_back(elementocuantico("Lantano", "5d1", 5, 2, -2, 1));
elemento.push_back(elementocuantico("Cerio", "4f1", 4, 3, -3, 1));
elemento.push_back(elementocuantico("Praseodimio", "4f2", 4, 3, -2, 1));
elemento.push_back(elementocuantico("Neodimio", "4f3", 4, 3, -1, 1));
elemento.push_back(elementocuantico("Prometio", "4f4", 4, 3, 0, 1));
elemento.push_back(elementocuantico("Samario", "4f5", 4, 3, 1, 1));
elemento.push_back(elementocuantico("Europio", "4f6", 4, 3, 2, 1));
elemento.push_back(elementocuantico("Gadolinio", "4f7", 4, 3, 3, 1));
elemento.push_back(elementocuantico("Terbio", "4f8", 4, 3, -3, -1));
elemento.push_back(elementocuantico("Disprosio", "4f9", 4, 3, -2, -1));
elemento.push_back(elementocuantico("Holmio", "4f10", 4, 3, -1, -1));
elemento.push_back(elementocuantico("Erbio", "4f11", 4, 3, 0, -1));
elemento.push_back(elementocuantico("Tulio", "4f12", 4, 3, 1, -1));
elemento.push_back(elementocuantico("Iterbio", "4f13", 4, 3, 2, -1));
elemento.push_back(elementocuantico("Lutecio", "4f14", 4, 3, 3, -1));
elemento.push_back(elementocuantico("Hafnio", "5d2", 5, 2, -1, 1));
elemento.push_back(elementocuantico("Tantalio", "5d3", 5, 2, 0, 1));
elemento.push_back(elementocuantico("Wolframio", "5d4", 5, 2, 1, 1));



elemento.push_back(elementocuantico("Manganeso" ,"3d5 4s2",3, 2, 2, 1));

elemento.push_back(elementocuantico("Hierro" ,"3d6 4s2",3, 2, -2, -1));

elemento.push_back(elementocuantico("Cobalto" ,"3d7 4s2",3, 2, -1, -1));

elemento.push_back(elementocuantico("Niquel" ,"3d8 4s2",3, 2, 0, -1));

elemento.push_back(elementocuantico("Cobre" ,"3d10 4s1",4, 0, 0, 1));

elemento.push_back(elementocuantico("Zinc" ,"3d10 4s2",4, 0, 0, -1));

elemento.push_back(elementocuantico("Galio" ,"3d10 4s2 4p1",4, 1, -1, 1));

elemento.push_back(elementocuantico("Germanio" ,"3d10 4s2 4p2",4, 1, 0, 1));

elemento.push_back(elementocuantico("Arsenico" ,"3d10 4s2 4p3",4, 1, 1, 1));

elemento.push_back(elementocuantico("Selenio" ,"3d10 4s2 4p4",4, 1, -1, -1));

elemento.push_back(elementocuantico("Bromo" ,"3d10 4s2 4p5",4, 1, 0, -1));

elemento.push_back(elementocuantico("Kripton" ,"3d10 4s2 4p6",4, 1, 1, -1));

elemento.push_back(elementocuantico("Rubidio" ,"5s1",5, 0, 0, 1));

elemento.push_back(elementocuantico("Estroncio" ,"5s2",5, 0, 0, -1));

elemento.push_back(elementocuantico("Itrio" ,"4d1 5s2",4, 2, -2, 1));

elemento.push_back(elementocuantico("Circonio" ,"4d2 5s2",4, 2, -1, 1));

elemento.push_back(elementocuantico("Niobio" ,"4d4 5s1",4, 2, 1, 1));

elemento.push_back(elementocuantico("Molibdeno" ,"4d5 5s1",4, 2, 2, 1));

elemento.push_back(elementocuantico("Tecnecio" ,"4d6 5s1",4, 2, -2, -1));

elemento.push_back(elementocuantico("Rutenio" ,"4d7 5s1",4, 2, -1, -1));

elemento.push_back(elementocuantico("Rodio" ,"4d8 5s1",4, 2, 0, -1));

elemento.push_back(elementocuantico("Paladio" ,"4d10",4, 2, 2, -1));

elemento.push_back(elementocuantico("Plata" ,"4d10 5s1",5, 0, 0, 1));

elemento.push_back(elementocuantico("Cadmio" ,"4d10 5s2",5, 0, 0, -1));

elemento.push_back(elementocuantico("Indio" ,"4d10 5s2 5p1",5, 1, -1, 1));



//aqui seria despues de definir cada elemento para la clase anterior ahora hay que definir esta clase( los 118)}
vector <atomico> elementos;

elementos.push_back(atomico("Americio", 95, 243, 173, 95, 148, 95));
elementos.push_back(atomico("Curio", 96, 247, 174, 96, 151, 96));
elementos.push_back(atomico("Berkelio", 97, 247, 170, 97, 150, 97));
elementos.push_back(atomico("Californio", 98, 251, 186, 98, 153, 98));
elementos.push_back(atomico("Einstenio", 99, 252, 186, 99, 153, 99));
elementos.push_back(atomico("Fermio", 100, 257, 200, 100, 157, 100));
elementos.push_back(atomico("Mendelevio", 101, 258, 200, 101, 157, 101));
elementos.push_back(atomico("Nobelio", 102, 259, 200, 102, 157, 102));
elementos.push_back(atomico("Lawrencio", 103, 262, 200, 103, 159, 103));
elementos.push_back(atomico("Rutherfordio", 104, 267, 157, 104, 163, 104));
elementos.push_back(atomico("Dubnio", 105, 270, 149, 105, 165, 105));
elementos.push_back(atomico("Seaborgio", 106, 271, 143, 106, 165, 106));
elementos.push_back(atomico("Bohrio", 107, 270, 141, 107, 163, 107));
elementos.push_back(atomico("Hassio", 108, 277, 134, 108, 169, 108));
elementos.push_back(atomico("Meitnerio", 109, 276, 129, 109, 167, 109));
elementos.push_back(atomico("Darmstadtio", 110, 281, 128, 110, 171, 110));
elementos.push_back(atomico("Roentgenio", 111, 282, 121, 111, 171, 111));
elementos.push_back(atomico("Copernicio", 112, 285, 122, 112, 173, 112));
elementos.push_back(atomico("Nihonio", 113, 286, 136, 113, 173, 113));
elementos.push_back(atomico("Flerovio", 114, 289, 143, 114, 175, 114));
elementos.push_back(atomico("Moscovio", 115, 290, 162, 115, 175, 115));
elementos.push_back(atomico("Livermorio", 116, 293, 175, 116, 177, 116));
elementos.push_back(atomico("Tenesino", 117, 294, 165, 117, 177, 117));
elementos.push_back(atomico("Organeson", 118, 294, 157, 118, 176, 118));

elementos.push_back(atomico("Hidrogeno" ,1, 1.008, 53, 1, 0, 1));
elementos.push_back(atomico("Helio" ,2, 4.0026, 31, 2, 2, 2));
elementos.push_back(atomico("Litio" ,3, 6.94, 152, 3, 4, 3));
elementos.push_back(atomico("Berilio" ,4, 9.0122, 153, 4, 5, 4));
elementos.push_back(atomico("Boro" ,5, 10.81, 88, 5, 6, 5));
elementos.push_back(atomico("Carbono" ,6, 12.011, 77, 6, 6, 6));
elementos.push_back(atomico("Nitrogeno" ,7, 14.007, 75, 7, 7, 7));
elementos.push_back(atomico("Oxigeno" ,8, 15.999, 73, 8, 8, 8));
elementos.push_back(atomico("Fluor" ,9, 18.998, 72, 9, 10, 9));
elementos.push_back(atomico("Neon" ,10, 20.180, 38, 10, 10, 10));
elementos.push_back(atomico("Sodio" ,11,  22.990, 186, 11, 12, 11));
elementos.push_back(atomico("Magnesio" ,12, 24.305, 260, 12, 12, 12));
elementos.push_back(atomico("Aluminio" ,13, 26.982, 143, 13, 14, 13));
elementos.push_back(atomico("Silicio" ,14, 28.085, 118, 14, 14, 14));
elementos.push_back(atomico("Fosforo" ,15, 30.974, 110, 15, 16, 15));
elementos.push_back(atomico("Azufre" ,16, 32.06 , 104, 16, 16, 16));
elementos.push_back(atomico("Cloro" ,17, 35.45, 99, 17, 18, 17));
elementos.push_back(atomico("Argon" ,18, 39.948 , 72, 18, 22, 18));
elementos.push_back(atomico("Potasio" ,19, 39.098, 227, 19, 20, 19));
elementos.push_back(atomico("Calcio" ,20, 40.078, 197, 20, 20, 20));
elementos.push_back(atomico("Escandio" ,21, 44.956, 144, 21, 24, 21));
elementos.push_back(atomico("Titanio" ,22, 47.867 , 147, 22, 26, 22));
elementos.push_back(atomico("Vanadio" ,23,  50.9415, 235, 23, 28, 23));
elementos.push_back(atomico("Hidrogeno" ,24, 51.9961, 128, 24, 28, 24));

elementos.push_back(atomico("Remo" ,75, 186.207, 186, 75, 108, 75));
elementos.push_back(atomico("Osmio" ,76, 190.23, 132, 76, 114, 76));
elementos.push_back(atomico("Iridio" ,77, 6.94, 139, 77, 115, 77));
elementos.push_back(atomico("Platino" ,78, 195.084, 139, 78, 227, 78));
elementos.push_back(atomico("Oro" ,79, 196.9665, 144, 79, 118, 79));
elementos.push_back(atomico("Mercurio" ,80, 200.592 , 156, 80, 121, 80));
elementos.push_back(atomico("Talio" ,81, 204.38, 156, 81, 156, 81));
elementos.push_back(atomico("Plomo" ,82, 207.2, 175, 82, 125, 82));
elementos.push_back(atomico("Bismuto" ,83, 208.9804, 156, 83, 126, 83));
elementos.push_back(atomico("Polonio" ,84, 209, 140, 84, 125, 84));
elementos.push_back(atomico("Astatino" ,85,  22.990, 210, 85, 125, 85));
elementos.push_back(atomico("Radon" ,86,  222, 216, 86, 136, 86));
elementos.push_back(atomico("Francio" ,87,  223, 270, 87, 136, 87));
elementos.push_back(atomico("Radio" ,88, 226, 215, 88, 138, 88));
elementos.push_back(atomico("Actinio" ,89,  227 , 220, 89, 138, 89));
elementos.push_back(atomico("Torio" ,90, 232.0381 , 175, 90, 142, 90));
elementos.push_back(atomico("Protactinio" ,91, 231.0359, 170, 91, 140, 91));
elementos.push_back(atomico("Uranio" ,92, 238.0289 , 175, 92, 146, 92));
elementos.push_back(atomico("Neptunio" ,93, 237, 156, 93, 144, 93));
elementos.push_back(atomico("Plutonio" ,94,  244, 197, 94, 150, 94));

elementos.push_back(atomico("Estaño", 50, 118.71, 140, 50, 69, 50));
elementos.push_back(atomico("Antimonio", 51, 121.76, 140, 51, 71, 51));
elementos.push_back(atomico("Yelurio", 52, 127.60, 140, 52, 76, 52));
elementos.push_back(atomico("Yodo", 53, 126.90, 140, 53, 74, 53));
elementos.push_back(atomico("Xenón", 54, 131.29, 140, 54, 77, 54));
elementos.push_back(atomico("Cesio", 55, 132.91, 260, 55, 78, 55));
elementos.push_back(atomico("Bario", 56, 137.33, 215, 56, 81, 56));
elementos.push_back(atomico("Lantano", 57, 138.91, 195, 57, 82, 57));
elementos.push_back(atomico("Cerio", 58, 140.12, 185, 58, 82, 58));
elementos.push_back(atomico("Praseodimio", 59, 140.91, 185, 59, 82, 59));
elementos.push_back(atomico("Neodimio", 60, 144.24, 185, 60, 84, 60));
elementos.push_back(atomico("Prometio", 61, 145.00, 185, 61, 84, 61));
elementos.push_back(atomico("Samario", 62, 150.36, 185, 62, 88, 62));
elementos.push_back(atomico("Europio", 63, 151.96, 185, 63, 89, 63));
elementos.push_back(atomico("Gadolinio", 64, 157.25, 180, 64, 93, 64));
elementos.push_back(atomico("Terbio", 65, 158.93, 180, 65, 94, 65));
elementos.push_back(atomico("Disprosio", 66, 162.50, 180, 66, 96, 66));
elementos.push_back(atomico("Holmio", 67, 164.93, 175, 67, 98, 67));
elementos.push_back(atomico("Erbio", 68, 167.26, 175, 68, 99, 68));
elementos.push_back(atomico("Tulio", 69, 168.93, 175, 69, 100, 69));
elementos.push_back(atomico("Iterbio", 70, 173.04, 175, 70, 103, 70));
elementos.push_back(atomico("Lutecio", 71, 174.97, 175, 71, 104, 71));
elementos.push_back(atomico("Hafnio", 72, 178.49, 155, 72, 106, 72));
elementos.push_back(atomico("Tantalio", 73, 180.95, 145, 73, 108, 73));
elementos.push_back(atomico("Wolframio", 74, 183.84, 135, 74, 110, 74));

elementos.push_back(atomico("Manganeso", 25, 54.94, 139, 25, 30, 25));

elementos.push_back(atomico("Hierro", 26, 55.85, 126, 26, 30, 26));

elementos.push_back(atomico("Cobalto", 27, 58.93, 125, 27, 32, 27));

elementos.push_back(atomico("Niquel", 28, 58.69, 124, 28, 31, 28));

elementos.push_back(atomico("Cobre", 29, 63.55, 128, 29, 35, 29));

elementos.push_back(atomico("Zinc", 30, 65.38, 139, 30, 35, 30));

elementos.push_back(atomico("Galio", 31, 69.72, 135, 31, 39, 31));

elementos.push_back(atomico("Germanio", 32, 72.63, 122, 32, 41, 32));

elementos.push_back(atomico("Arsenico", 33, 74.92, 118, 33, 42, 33));

elementos.push_back(atomico("Selenio", 34, 78.96, 116, 34, 44, 34));

elementos.push_back(atomico("Bromo", 35, 79.90, 114, 35, 44, 35));

elementos.push_back(atomico("Kripton", 36, 83.80, 88, 36, 48, 36));

elementos.push_back(atomico("Rubidio", 37, 85.47, 303, 37, 48, 37));

elementos.push_back(atomico("Estroncio", 38, 87.62, 247, 38, 50, 38));

elementos.push_back(atomico("Itrio", 39, 88.91, 211, 39, 50, 39));

elementos.push_back(atomico("Circonio", 40, 91.22, 200, 40, 51, 40));

elementos.push_back(atomico("Niobio", 41, 92.91, 146, 41, 52, 41));

elementos.push_back(atomico("Molibdeno", 42, 95.94, 139, 42, 54, 42));

elementos.push_back(atomico("Tecnecio", 43, 98.00, 136, 43, 55, 43));

elementos.push_back(atomico("Rutenio", 44, 101.07, 134, 44, 57, 44));

elementos.push_back(atomico("Rodio", 45, 102.91, 127, 45, 58, 45));

elementos.push_back(atomico("Paladio", 46, 106.42, 139, 46, 60, 46));

elementos.push_back(atomico("Plata", 47, 107.87, 165, 47, 61, 47));

elementos.push_back(atomico("Cadmio", 48, 112.41, 151, 48, 64, 48));

elementos.push_back(atomico("Indio", 49, 114.82, 162, 49, 64, 49));

int opcion;

	do {
		
		//menú
		cout <<" Menu"<< endl;
		cout << "Acciones"<< endl;
		cout<< "1 - Calculo de cuantico a elemento"<< endl;
		cout <<"2 - Valores atomicos" << endl;
		cout << "3 - Salir" << endl;
		cout << "4 - Calcular numeros cuanticos" << endl;
		cin >> opcion;
		
			
		switch (opcion) { 
		//caso 1 del menú
		
		
			
		case 1 : {
		
			//crear variables q pediremos
			int n, l, ml, ms;
			//pedir variables y definir valor
			cout<<"introduce numeros cuanticos n, l , ml, ms"<< endl;
			cout<<"Numero cuantico principal(n): "; cin >> n;
			
		
			cout<< "l:"; cin >> l;
			cout << "ml: "; cin >>ml;
			cout << "ms: "; cin >> ms;
			
			
			
			bool encontrar = false;
			for (size_t i = 0; i < elemento.size(); i++) {
				if (elemento[i].n == n and elemento[i].l ==l and elemento[i].ml == ml and elemento[i].ml == ml and elemento[i].ms == ms ) {
					elemento[i].datos_cuanticos();
					encontrar = true;
					opcion = 1;
			
					break;
				}
			}
			if (encontrar== false) {
				cout << "no se encontr� elemento con esos números, intentalo otra vez"<< endl;
		}
			
			break;
			}
			case 2 : {
				opcion = 1;
			string elemento;
			cout << "�que elemento desea saber sus datos?: "; cin >> elemento;
			
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
		
		case 4: {
			int n;
	char letra;
	int e;
	
	
	//NUMEROS CUANTICOS
	
	int l;
	int ml;
	int ml_inicial;
	string ms;
	int orbitales;
	int o_emergente;
	
	//VARIABLE EMERGENTE
	
	int i;
	
	cout<<"Introduzca la configuracion electronica:"<<endl;
	cin>>n;
	cin>>letra;
	cin>>e;
	
	
	//Establecimiento de el numero l
	switch(letra)
	{
		case 's':
			l = 0;
			ml_inicial = 0;
			ml = 0;
			
			break;
		case 'p':
			l = 1;
			ml_inicial = -1;
			ml = -1;
			break;
		case 'd':
			l = 2;
			ml_inicial = -2;
			ml = -2;
			break;
		case 'f':
			l = 3;
			ml_inicial = -3;
			ml = -3;
			break;
	}
	
	orbitales = (l*2)+1;
	o_emergente = orbitales;
	
	//Calculo de numero magnetico
	// El requimiento de for es "Mayor que uno" porque cuando se a�ade la primera flecha o primer electr�n, en el primer ciclo, el valor de ml es su valor inicial
	for(i=e; i>1; i--)
	{
		ml += 1;
		o_emergente -= 1;
		if(o_emergente<=0)
		{
			ml=ml_inicial;
		}
		
	}
	
	
	if(e > orbitales)
	{
		ms = "-1/2";
	}
	else if(e <= orbitales)
	{
		ms = "+1/2";
	}
	
	cout<<"Los numeros cuanticos de "<<n<<letra<<e<<" son:"<<endl;
	cout<<"n = "<<n<<endl;
	cout<<"l = "<<l<<endl;
	cout<<"ml = "<<ml<<endl;
	cout<<"ms = "<<ms<<endl;
	
	break;
}
	default :{
			cout << "ingresa opcion válida" << endl;
			break;
}
	
}
		} while (opcion !=3);

return 0;

	}   

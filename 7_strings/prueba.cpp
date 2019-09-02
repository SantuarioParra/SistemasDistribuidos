#include <cstring>
#include <string.h>
#include <iostream>
#include <cmath>
#include <cstdbool>

using namespace std;

string gen_palabraSTRING(const int sizePalabra) {

	string palabra;
	for (size_t i = 0; i < sizePalabra; i++) {

		int ascii = 65 + rand()%25;
		char rand_char = (char)ascii;
		palabra.append(1, rand_char);
	}

	return palabra;
}

string gen_randomSTRING(const int palabras, const int size) {

	string str;
	char espacio = 32;
  for (size_t i = 0; i < palabras; ++i) {

		string palabra = gen_palabraSTRING(size);
		for (size_t j = 0; j < palabra.length(); j++) {

			char c = palabra[j];
			str.append(1, c);
		}
		str.append(1, espacio);
	}

  str[palabras] = '\0';

	//cout << str << '\n';

	char *word = "IPN";
	size_t found = str.find(word);
	if (found != string::npos) {
		cout << "HUELLUM! (string)" << '\n';
	}

	return str;
}
/*
bool buscar(const char *paja, const char *aguja) {
	for (size_t i = 0; i < strlen(paja); i++) {

		bool flag = true;
		for (size_t j = 0; j < strlen(aguja); j++) {

			cout << "comparando: " << paja[i] << ", con: " << aguja[j] << '\n';
			if ( paja[i] == aguja[j] ) {
				flag && true;
			}
			else {
				flag && false;
			}
		}
		if (flag) {
			return true;
		}
	}
}
*/
void calculos_numericos(const int max){
	double i = 0;

	int sin = 0;
	int cos = 0;
	int tan = 0;
	int log = 0;
	int sqrt = 0;

	while (i < max) {
		sin += sin(i);
		cos += cos(i);
		tan += tan(i);
		log += log(i);
		sqrt += sqrt(i);
		i++;
	}
}

void gen_randomCHAR(const int palabras, const int size) {

	size_t cont = 0;
	char espacio = 32;

	char *str = (char *) malloc(sizeof(char) * ((size+1) * palabras) );
	for (size_t i = 0; i < palabras; i++) {

		for (size_t j = 0; j < size; j++) {
			int ascii = 65 + rand()%25;
			char rand_char = (char)ascii;
			str[cont] = rand_char;
			cont++;
		}
		str[cont] = espacio;
		cont++;
	}

	//cout << str << '\n';

	char word[] = "IPN";
	char *ptr = strstr(str, word);
	if (ptr != NULL) {
		cout << "HUELLUM! (char)" << '\n';
	}
	//return str;
}

/**/
int main(int argc, char const *argv[]) {
	/* code */
	srand(time(NULL));
	/*
	cout << "Ejercicio 1" << '\n';

	int n;
	string line;
	//cin >> n;
	//getline(cin, line);

	//cout << n << '\n';
	//cout << line << '\n';

	cout << "Ejercicio 2" << '\n';
	string cadena("ESCOM");
	cout << cadena.at(3) << '\n';
	*/
	string cad;

	size_t num = 35152000;

	cad = gen_randomSTRING(num, 3);

	//gen_randomCHAR(num, 3);

	return 0;
}

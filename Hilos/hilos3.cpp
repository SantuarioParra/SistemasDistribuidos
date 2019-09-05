#include <iostream>
#include <unistd.h>
#include <thread>
#include <mutex>
using namespace std;

int v = 0;
mutex m;


void incrementa(int n){
	
	while (n>0){
		m.lock();
		v++;
		m.unlock();
		n--;
	}
	//sleep(1);
	
}
void decrementa(int n){
	
	while (n>0){
		m.lock();
		v--;
		m.unlock();
		n--;
	}
	//sleep(1);
	
}

void funcion(int valor)
{
	printf ("Hilo %ld , Valor recibido %d \n",this_thread::get_id(),valor);
//	cout<<"Hilo " <<  this_thread::get_id() << " Valor recibido: " << valor << endl;
	sleep(2);
}

int main(){
//	thread th1(funcion, 5), th2(funcion, 10);
	

	thread th1(incrementa,10000), th2(decrementa,10000);
	cout  << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	th2.join();
	cout << "Variable: " << v <<endl;
	cout << "El hilo principal termina\n";

	exit(0);
}
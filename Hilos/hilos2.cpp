#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>  
using namespace std;

//atomic<int> v(0);

void incrementa(atomic<int>& v,int n){
	while (n>0){
		v++;
		n--;
	}
	sleep(1);
}
void decrementa(atomic<int>& v,int n){
	while (n>0){
		v--;
		n--;
	}
	sleep(1);
}

void funcion(int valor)
{
	printf ("Hilo %ld , Valor recibido %d \n",this_thread::get_id(),valor);
//	cout<<"Hilo " <<  this_thread::get_id() << " Valor recibido: " << valor << endl;
	sleep(2);
}

int main(){
//	thread th1(funcion, 5), th2(funcion, 10);
	atomic<int> v(0);
	thread th1(incrementa,ref(v),10000), th2(decrementa,ref(v),10000);
	cout  << "Proceso principal espera que los hilos terminen\n";
	th1.join();
	th2.join();
	cout << "Variable: " << v <<endl;
	cout << "El hilo principal termina\n";

	exit(0);
}

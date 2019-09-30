run: compile	
compile: PaqueteDatagrama.o SocketDatagrama.o
	g++ cliente.cpp PaqueteDatagrama.o SocketDatagrama.o -o cliente
	g++ servidor.cpp PaqueteDatagrama.o SocketDatagrama.o -o servidor
PaqueteDatagrama.o:
	g++ -c PaqueteDatagrama.cpp
SocketDatagrama.o:
	g++ -c SocketDatagrama.cpp
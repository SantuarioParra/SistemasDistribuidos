#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <netinet/in.h>
#include <netdb.h>
#include <strings.h>
#include <string.h>
#include <unistd.h>

int puerto = 7200;
char direccion[10];
char port[10];

int main(int arg, char * argv[]) {
    struct sockaddr_in msg_to_server_addr, client_addr;
    int s, num[2], res;

    s = socket(AF_INET, SOCK_DGRAM, 0);
    /* rellena la dirección del servidor */
    bzero((char *) &msg_to_server_addr, sizeof(msg_to_server_addr));
    msg_to_server_addr.sin_family = AF_INET;
    msg_to_server_addr.sin_addr.s_addr = inet_addr("10.100.77.82");
    printf("%d",argv[1]);

    msg_to_server_addr.sin_port = htons(puerto);

    /* rellena la direcciòn del cliente*/
    bzero((char *) &client_addr, sizeof(client_addr));
    client_addr.sin_family = AF_INET;
    client_addr.sin_addr.s_addr = INADDR_ANY;

    /*cuando se utiliza por numero de puerto el 0, el sistema se encarga de asignarle uno */
    client_addr.sin_port = htons(0);
    bind(s, (struct sockaddr *) &client_addr, sizeof(client_addr));
    num[0] = 2;
    num[1] = 10; /*rellena el mensaje */
    sendto(s, (char *) num, 2 * sizeof(int), 0, (struct sockaddr *) &msg_to_server_addr, sizeof(msg_to_server_addr));

    /* se bloquea esperando respuesta */
    recvfrom(s, (char *) &res, sizeof(int), 0, NULL, NULL);

    printf("Resultado de la operacion: \n");
    printf("%d + %d = %d\n", num[0], num[1], res);
    printf("Direccion del host: \n");
    memcpy(direccion, &msg_to_server_addr.sin_addr.s_addr, 4);
    memcpy(port,&msg_to_server_addr.sin_port,2);
    for (int i = 0; i < 4; ++i) {
        printf("%d", direccion[i]);
    }
    printf("\n Puerto del servidor: \n");
    for (int j = 0; j <2 ; ++j) {
        printf("%x",port[j]);
    }
    printf("\n");
    close(s);
}


#include "conexao.h"
#include <iostream>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>



Conexao::Conexao(int porta, char* ip)
{
    this->ip = ip;
    this->porta = porta;
}

void Conexao::conect()
{
    int sck;
    if ((sck = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("cannot create socket");
        return;
    }
    this->sock = sck;
    struct sockaddr_in myAddr;

    memset((char *)&myAddr, 0, sizeof(myAddr));
    myAddr.sin_family = AF_INET;
    myAddr.sin_addr.s_addr = htonl(INADDR_ANY);
    myAddr.sin_port = htons(0);

    struct hostent *hp; /* host information */
    struct sockaddr_in servAddr; /* server address */
    /* fill in the server's address and data */
    memset((char*)&servAddr, 0, sizeof(servAddr));
    servAddr.sin_family = AF_INET;
    servAddr.sin_addr.s_addr = inet_addr(this->ip);
    servAddr.sin_port = htons(this->porta);

    if (bind(sck, (struct sockaddr *)&myAddr, sizeof(myAddr)) < 0) {
        perror("bind failed");
        return;
    }
    //memcpy((void *)&servAddr.sin_addr, hp->h_addr_list[0], hp->h_length);
    if (connect(sck,(struct sockaddr *)&servAddr, sizeof(servAddr)) < 0){
        perror("connect failed");
        return;
    }
    enviar("Cliente Iniciado");
    /*
    if (send(sck, "Cliente Iniciado!\n", 16, 0) < 0)
    {
        perror("send");
        return;
    }
    */


    std::cout <<"Primeiro: " <<sck;
}
int Conexao::enviar(char* msg)
{
    if (send(this->sock, msg, strlen(msg), 0) < 0)
    {
        perror("send");
        return 0;
    }
    return 1;
}



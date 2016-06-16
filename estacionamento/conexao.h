#ifndef CONEXAO_H
#define CONEXAO_H

#include<string>

using namespace std;

class Conexao
{
public:
    int porta;
    char* ip;
    int sock;
public:
    Conexao(int porta,char* ip);
    void conect();
    int enviar(char *msg);


};

#endif // CONEXAO_H

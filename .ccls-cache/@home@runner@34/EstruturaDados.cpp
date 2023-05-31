#include <cstdlib>
#include <iostream>
#include "Node.h"

using namespace std;

// Classe abstrata para representar uma estrutura de dados
class EstruturaDados {
public:
    virtual void inserir(char valor) = 0;
    virtual void remover() = 0;
    virtual void exibir();
};
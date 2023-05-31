#ifndef ESTRUTURADADOS_H
#define ESTRUTURADADOS_H

// Classe abstrata para representar uma estrutura de dados
class EstruturaDados {
public:
    virtual void inserir(char valor) = 0;
    virtual void remover() = 0;
    virtual void exibir() = 0;
};

#endif /* ESTRUTURADADOS_H */
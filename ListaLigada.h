#ifndef LISTALIGADA_H
#define LISTALIGADA_H
#import "Node.h"
#import "EstruturaDados.h"

class ListaLigada : public EstruturaDados{
private:
    NodePtr cabeca;

public:
    ListaLigada();
    ~ListaLigada();
    void setCabeca(NodePtr);
    NodePtr getCabeca();
    
    void inserir(char valor) override;
    void remover() override;
    void exibir() override;
};

#endif /* LISTALIGADA_H */
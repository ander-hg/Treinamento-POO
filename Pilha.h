#ifndef PILHA_H
#define PILHA_H

#include "EstruturaDados.h"
#include "ListaLigada.h"

class Pilha : public EstruturaDados {
private:
  ListaLigada lista;

public:
  void inserir(char valor) override;
  void remover() override;
  void exibir() override;
};

#endif
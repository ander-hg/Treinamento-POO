#ifndef FILA_H
#define FILA_H

#include "EstruturaDados.h"
#include "ListaLigada.h"

class Fila : public EstruturaDados {
private:
  ListaLigada lista;

public:
  void inserir(char valor) override;
  void remover() override;
  void exibir() override;
};

#endif
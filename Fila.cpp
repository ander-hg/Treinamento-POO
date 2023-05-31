#include <iostream>
#include "Fila.h"

void Fila::inserir(char valor) {
  lista.inserir(valor);
}

void Fila::remover() {
  if (lista.getCabeca() != NULL) {
    NodePtr atual = lista.getCabeca();
    NodePtr anterior = nullptr;
    while (atual->getProx() != NULL) {
      anterior = atual;
      atual = atual->getProx();
    }
    if (anterior != nullptr) {
      anterior->setProx(nullptr);
    } else {
      lista.setCabeca(NULL);
    }
    delete atual;
  }
}

void Fila::exibir() {
  lista.exibir();
}
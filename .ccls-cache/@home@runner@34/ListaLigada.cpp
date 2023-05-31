#include <iostream>
#include "ListaLigada.h"

ListaLigada::ListaLigada() : cabeca(NULL) {}

ListaLigada::~ListaLigada() {
  NodePtr atual = cabeca;
  while (atual != NULL) {
    NodePtr proximo = atual->getProx();
    delete atual;
    atual = proximo;
  }
}

void ListaLigada::setCabeca(NodePtr no) {
  cabeca = no;
}

NodePtr ListaLigada::getCabeca() {
  return cabeca;
}

void ListaLigada::inserir(char valor) {
  NodePtr novoNo = new Node(valor, cabeca);
  cabeca = novoNo;
}

void ListaLigada::remover() {
  if (cabeca != NULL) {
    NodePtr temp = cabeca;
    cabeca = cabeca->getProx();
    delete temp;
  }
}

void ListaLigada::exibir() {
    NodePtr atual = cabeca;
    while (atual != NULL) {
        std::cout << atual->getInfo() << "-";
        atual = atual->getProx();
    }
    std::cout << std::endl;
}
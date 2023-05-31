#include <iostream>
#include "Pilha.h"
#include "Fila.h"
#include "Node.h"

using namespace std;

int main() {
  NodePtr node1 = new Node('a', NULL);
  NodePtr node2 = new Node('b', NULL);
  *node1 + *node2;
  std::cout << "No Ligado: " << node1->getInfo() << "--" << node1->getProx()->getInfo() << endl;
  delete node1;
  delete node2;

  char op = 't';
  char valor;
  cout << "digite: (f)fila (p)pilha  [enter]" << endl;
  cin >> op;
  // pilha
  if (op == 'p'){
    Pilha p;
    while (op != 's'){
      cout << "digite: (e)empilhar, (d)desempilhar, (s)sair [enter]" << endl;
      cin >> op;
      switch (op) {
        case 'e' : cout << "digite valor INTEIRO para empilhar [enter]" << endl;
        cin >> valor; // CUIDADO: DIGITE UM INTEIRO MESMO!!!
        p.inserir(valor);
        break;
        case 'd' : p.remover();
        break;
        default : cout << "saindo... " << endl; op = 's'; break;
      }; // case
      p.exibir();
    } // while
  }

  // fila
  else if (op == 'f'){
    Fila f;
    while (op != 's'){
      cout << "digite: (e)enfileirar, (d)desenfileirar, (s)sair [enter]" << endl;
      cin >> op;
      switch (op) {
        case 'e' : cout << "digite valor INTEIRO para enfileirar [enter]" << endl;
        cin >> valor; // CUIDADO: DIGITE UM INTEIRO MESMO!!!
        f.inserir(valor);
        break;
        case 'd' : f.remover();
        break;
        default : cout << "saindo... " << endl; op = 's'; break;
      }; // case
      f.exibir();
    } // while
  }
  
  cout <<"pressione uma tecla... " << endl;
  return 0;
}
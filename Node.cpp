#include <cstdlib>
#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(char x, NodePtr ptrprox) : info(x), proximo(ptrprox){}

Node::~Node(){}

char Node::getInfo(){
  return info;
}

NodePtr Node::getProx(){
  return proximo;
}

void Node::setProx(Node *ptrnode){
  proximo = ptrnode;
}

Node& Node::operator+(Node& outro) {
    if (this->getProx() == nullptr) {
        this->setProx(&outro);
    }
    return *this;
}
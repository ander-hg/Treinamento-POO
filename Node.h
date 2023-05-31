#ifndef NODE_H
#define NODE_H

class Node{
  private:
    char info;
    Node *proximo;
  public:
    Node(char X, Node *ptrnode);
    ~Node();
    char getInfo();
    Node *getProx();
    void setProx(Node *ptrnode);
};

typedef Node *NodePtr;

#endif /* NODE_H */
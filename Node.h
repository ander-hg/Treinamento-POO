#ifndef NODE_H
#define NODE_H

class Node{
  private:
    char info;
    Node *proximo;
  public:
    Node(char X, Node *);
    ~Node();
    char getInfo();
    Node *getProx();
    void setProx(Node *);
    Node& operator+(Node& outro) ;
};

typedef Node *NodePtr;

#endif /* NODE_H */
#include "node.h"

class Tree{
  public:
    vector<int> listTree(int number);
    string printFullTree(int number);
    bool reducesTo1();
  private:
    static int hi;
    Node* child;
    vector<Node*> parents;
    void rebalance();
};

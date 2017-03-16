class Node{
  public:
    Node(int number);
    Node(int number,Node* next);
    ~Node();
    int number;
    Node* next;
    Node* left;
    Node* right;
    Node* parent;
};

Node::Node(int number){
  this->number = number;
  this->next = nullptr;
  this->left = nullptr;
  this->right = nullptr;
  this->parent = nullptr;
}
Node::Node(int number){
  this->number = number;
  this->next = nullptr;
}

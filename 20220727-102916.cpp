#include <iostream>
using namespace std;
class Node{
    private:
    int data;
    Node* next;
    public:
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
    void setData(int data)
    {
        this->data=data;
        
    }
    void setNext(Node* next)
    {
        this->next=next;
        
    }
    int getData()
    {
        return this->data;
    }
    Node* getNext()
    {
        return this->next;
    }
    
};
int main() {
   Node n1(2),n2(3),n3(4),n4(5),n5(10);
   n1.getData();
   n1.getNext();
   
   n1.setNext(&n2);
   n2.setNext(&n3);
   n3.setNext(&n4);
   n4.setNext(&n5);
    return 0;
}
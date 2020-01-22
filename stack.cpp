#include<stdio.h>
#include<iostream>
using namespace std;
template <typename Type>
class Node
{
    public:
  Type data;
  Node* prev;
  public:
  Node(){}
};
template<typename Type>
class Stack
{
    static Node<Type>* top_of_stack;
//    Stack* next;
  //  Type number;
    //Node* temp;
    public:
    Stack()
    {
        top_of_stack=NULL;
       // number=temp;
    }
    void push(Type temp)
    {
            Node<Type> val;
        //=new Node();
            val.data=temp;
            val.prev=NULL;
            if(top_of_stack->prev==NULL)
            {
                top_of_stack=val;
                return;
            }
            val->prev=top_of_stack;
            //top_of_stack->prev=node;
            top_of_stack=val;
    }
    void pop()
    {
        cout<<top_of_stack->data<<"\n";
        top_of_stack=top_of_stack->prev;
    }
};
/*template<>
class Stack<char*>
{
  static Node<char*>* top_of_stack;
//    Stack* next;
  //  Type number;
    //Node* temp;
    public:
    Stack()
    {
        top_of_stack=NULL;
       // number=temp;
    }
    void push(char* temp)
    {
            Node<char*> val;//=(Node*)malloc(sizeof(Node));
            val.data=temp;
            val.prev=NULL;
            if(top_of_stack==NULL)
            {
                top_of_stack=val;
                return;
            }
            val->prev=top_of_stack;
            //top_of_stack->prev=node;
            top_of_stack=val;
    }
    void pop()
    {
        if(top_of_stack==NULL)
        {
            cout<<"Stack is NULL";
            return;
        }
        cout<<top_of_stack->data<<"\n";
        top_of_stack=top_of_stack->prev;
    }
};*/
main()
{
  Stack<int> obj;
  obj.push(10);
  obj.push(20);
  obj.push(30);
  obj.push(40);
  obj.pop();
  obj.pop();
  obj.push(45);
  obj.pop();
}

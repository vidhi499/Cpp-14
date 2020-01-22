#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
template<typename Type>
class Stack
{
    Type number;
public:
    Stack(Type temp)
    {
        cout<<"template constructor called\n"<<temp<<"\n";
    }
};
template<>
class Stack<char*>
{
    int number;
public:
    Stack(char* temp)
    {
        cout<<"Special constructor called\n";//<<temp<<"\n";
        cout<<temp;
    }
};
int main()
{
    char* str3="hello90";
    Stack<char> ch('n');
    Stack<string> str("hello");
    Stack<float> num1(78.8f);
    Stack<int> num2(89);
    Stack<double> num3(9.0);
    Stack<char*> str1(str3);
}

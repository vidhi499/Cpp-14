#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
main()
{
    auto num=4;
    auto num1=9.0f;
    auto ptr=&num1;
    cout<<"typeid of num :"<<typeid(num).name()<<"\n";
    cout<<"typeid of num1 :"<<typeid(num1).name()<<"\n";
    cout<<"typeid of ptr :"<<typeid(ptr).name()<<"\n";
}

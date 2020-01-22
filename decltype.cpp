#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
struct MyType
{
    int num;
    double val;
};
main()
{
    struct MyType num;
    decltype(num) temp;
    temp.num=4;
    temp.val=6.8f;
    cout<<"\n\ttypeid :"<<typeid(temp).name()<<"\n";
    cout<<"\n\tSize of temp:"<<sizeof(temp)<<"\n";
    cout<<"\n\tnum:"<<temp.num<<"\n";
    cout<<"\n\tval:"<<temp.val;
    cout<<"\n\t"<<sizeof(double);
}

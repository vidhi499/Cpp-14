#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
main()
{
    int num=23;
    int& temp=num;
    auto res=temp;
    decltype(auto) out=temp;
    cout<<"res type:"<<typeid(res).name()<<"\n";
    cout<<"temp type:"<<typeid(temp).name()<<"\n";
    cout<<"out type:"<<typeid(out).name()<<"\n";
    temp=33;
    cout<<"num:"<<num<<"\n";
    out=45;
    cout<<"num:"<<num<<"\n";
    res=78;
    cout<<"num:"<<num<<"\n";
}

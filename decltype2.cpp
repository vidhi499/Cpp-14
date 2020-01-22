#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
int addFun(int num1,int num2)
{
    return(num1+num2);
}
main()
{
    decltype(addFun(int,int)) res=addFun(12,34);
    cout<<"res type :"<<typeid(res).name()<<"\n";
    cout<<"res :"<<res;
}

#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
template<typename Type1,typename Type2>
auto addFun(Type1 num1,Type2 num2)->decltype(num1<num2?num1:num2)
{

    return(num1<num2?num1:num2);
}
main()
{
    auto res=addFun(12,3.4f);
    cout<<"res type:"<<typeid(res).name()<<"\n";
    cout<<"res:"<<res;
}

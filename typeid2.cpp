#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
template<typename Type1,typename Type2>
auto fun(Type1 num1,Type2 num2)->decltype(num1+num2)
{
    auto out=num1+num2;
    return(out);
}
main()
{
    auto res=fun(12,3.4f);
    cout<<"type of res:"<<typeid(res).name()<<"\n";
    cout<<res;
}

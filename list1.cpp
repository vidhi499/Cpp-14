#include<stdio.h>
#include<iostream>
#include<initializer_list>
using namespace std;
template<typename Type>
void fun(initializer_list<Type> list)
{
  for(auto it=list.begin();it!=list.end();it++)
  {
      cout<<*it<<" ";
  }
  cout<<"\n";
}
main()
{
  fun({1,2,3});
  fun({2.3,4.5,6.7});
  fun({'A','B','C'});
}

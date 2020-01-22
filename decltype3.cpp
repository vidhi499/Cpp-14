#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
main()
{
  int num=89;
  decltype(num) temp=78;
  decltype((num)) ptr=temp;
  cout<<"type of num is:"<<typeid(num).name()<<"\n";
  cout<<"type of temp is:"<<typeid(temp).name()<<"\n";
  cout<<"type of ptr is:"<<typeid(ptr).name()<<"\n";
  cout<<num<<"\n";
  cout<<temp<<"\n";
  cout<<ptr<<"\n";
  ptr=678;
  cout<<"temp:"<<temp;
}

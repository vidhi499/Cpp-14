#include<stdio.h>
#include<iostream>
#include<typeinfo>
#include<initializer_list>
using namespace std;
int callMe(int num1,float num2);
main()
{
  const int num=4;
  decltype(num) temp=5;
  cout<<"Size of temp :"<<sizeof(temp)<<"\n";
//  temp=8;
  cout<<"temp :"<<temp<<"\n";
  decltype(callMe) *temp1;
  temp1=callMe;
  cout<<"name :"<<typeid(temp1).name()<<"\n";
  (*temp1)(12,6.7f);

}
int callMe(int num1,float num2)
{
    cout<<"Sum :"<<num1+num2;
}

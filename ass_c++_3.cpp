#include<iostream>
using namespace std;

class AddAmount{
public:
int amount=50;
AddAmount(){
cout<<"The amount of the default constructor :"<<amount<<endl;}
AddAmount(int a){
amount=a+amount;
cout<<"The amount from paramterized is:"<<amount<<endl;
}
};


int main(){
AddAmount s,s1(40);
return 0;
}
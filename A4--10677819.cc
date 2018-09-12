#include<iostream>
using namespace std;

int gcd(int num1,int num2){

gcd(num2,num1%num2);

return(num2 !=0);


int main()
{

int num1,num2,gcd;

cout<<"Please Enter a number"<<endl;
cin>>num1;

cout<<"Please Enter another number"<<endl;
cin>>num2;


gcd(num1,num2);


cout<<"The Greatest Common Divisor is:"<<gcd<<endl;


return 0;
}



#include<iostream>
using namespace std;
int main()
{
int a=3;
int*b=&a;
//what is a pointer?= Data types which holds the address of other data types
cout<<"the address of a is"<<&a<<endl;
//*--->(address of) operator
//*--->(value at) Dereference operator
cout<<"the address of a is"<<b<<endl;

int**c=&b;
cout<<"the value of b is"<<&b<<endl;
cout<<"the value of b is"<<&b<<endl;

return 0;
}
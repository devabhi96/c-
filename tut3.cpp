#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"tell me your age"<<endl;
cin>>age;

if(age<18)
{
cout<<"you are not permitted to enter"<<endl;
}
else if(age==18){
    cout<<"you are permitted at kids license"<<endl;
}
else {cout<<"you are permitted"<<endl;

}



return 0;
}

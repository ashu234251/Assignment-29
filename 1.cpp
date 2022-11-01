/*
1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}
*/
#include<iostream>
using namespace std;
class Complex
{
       int real,img;
    public:
       Complex()
       {}
       Complex(int r,int i)
       {
        real=r;
        img=i;
       }
       Complex(int z)
       {
        cout<<"PC called"<<endl;
        real=z;
        img=z;
       }
       void setValues(int x,int y)
       {
         real=x;
         img=y;
       }
       void display()
       {
        cout<<"Real is: "<<real<<"   Imaginary is: "<<img<<endl;
       }
};
int main()
{
    Complex c1(5,6),c2;
    int x=5,y=6;
    c1.display();
    
    return 0;
}
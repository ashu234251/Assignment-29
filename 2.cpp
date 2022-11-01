/*
2. Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}
*/
#include<iostream>
using namespace std;
class Complex
{
      int real,img;
    public:
      void setData(int r,int i)
      {
        real=r;
        img=i;
      }
      void display()
      {
        cout<<"Real is: "<<real<<"   Imaginary is: "<<img<<endl;
      }
      operator int()
      {
        return real+img;
      }
};
int main()
{
    Complex c1,c2;
    c1.setData(5,16);
    int x;
    x=(int)c1;
    cout<<"Sum of real and imaginary values is: "<<x<<endl;

    return 0;
}
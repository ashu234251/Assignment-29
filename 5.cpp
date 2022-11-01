/*
5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}
*/
#include<iostream>
using namespace std;
class Invent1
{
      int inv11,inv12;
    public:
      Invent1()
      {}
      Invent1(int x,int y)
      {
        inv11=x;
        inv12=y;
      }
      int getValue1()
      {
        return inv11;
      }
      int getValue2()
      {
        return inv12;
      }
      void display()
      {
        cout<<"First is: "<<inv11<<"  and Second is: "<<inv12<<endl;
      }
      operator float()
      {
        return inv11+inv12;
      }
};
class Invent2
{
      int inv21,inv22;
    public:
      Invent2()
      {}
      Invent2(int x,int y)
      {
        inv21=x;
        inv22=y;
      }
      Invent2(Invent1 I)
      {
        inv21=I.getValue1();
        inv22=I.getValue2();
      }
      void display()
      {
        cout<<"First is : "<<inv21<<"  and Second is : "<<inv22<<endl;
      }
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    s1.display();

    float tv;
    tv=s1;
    cout<<"Sum of Value of Invent1 is: "<<tv<<endl;

    d1=s1;
    d1.display();
    return 0;
}
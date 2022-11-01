/*
9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
Example-
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Dollar
{
      int dollar;
    public:
      Dollar()
      {}
      Dollar(int d)
      {
        dollar=d;
      }
      void display()
      {
        cout<<"Dollars are : "<<dollar<<endl;
      }
};

int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}
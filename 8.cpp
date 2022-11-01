/*
8. Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
      int rupee;
    public:
      void display()
      {
        cout<<"Rupees are: "<<rupee<<endl;
      }
      Rupee(int r)
      {
        rupee=r;
      }
      operator int()
      {
        return rupee;
      }
};
int main()
{
Rupee r = 10;
int x = r;
r.display();
cout<<"Value is: "<<x<<endl;
return 0;
}
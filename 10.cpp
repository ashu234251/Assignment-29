/*
10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.
Example-
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Rupee
{
      int rupee;
    public:
      Rupee()
      {}
      Rupee(int r)          // required for dollar to rupee conversion. Because operator Rupee() gives dollar*100 which needs to be stored in rupee.
      {
        rupee=r;
      }
      int getrupee()
      {
        return rupee;
      }
      void display()
      {
        cout<<"Rupees are: "<<rupee<<endl;
      }
};
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
      Dollar(Rupee R)
      {
        dollar=(R.getrupee())/100;
      }
      void display()
      {
        cout<<"Dollars are: "<<dollar<<endl;
      }
      operator Rupee()
      {
        return dollar*100;
      }
};
int main()
{
Rupee r = 2300;
Dollar d = r;   // Rupee to Dollar conversion
d.display();
r.display();
r = d;   // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}
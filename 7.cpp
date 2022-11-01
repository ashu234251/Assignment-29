/*
7. Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class Minute
{
      int minutes;
    public:
      Minute(int m)
      {
        minutes=m;
      }
      Minute()
      {}
      void display()
      {
        cout<<"Minutes are : "<<minutes<<endl;
      }
};
class Time
{
      int hour,min;
    public: 
      Time()
      {}
      Time(int h,int m)
      {
        hour=h;
        min=m;
      }
      operator Minute()
      {
        return min;
      }
      void display()
      {
        cout<<"Hour: "<<hour<<"   Minutes: "<<min<<endl;
      }
};
int main()
{
Time t1(2,30);
t1.display();
Minute m1(121);
m1.display();
m1=t1; // Fetch minute from time
t1.display();
m1.display();
return 0;
}
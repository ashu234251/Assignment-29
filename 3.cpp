/*
3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}
*/
#include<iostream>
using namespace std;
class Product
{
      int id;
      const char *product_name;
    public:
      void setData(int i,const char *name)
      {
        id=i;
        product_name=name;
      }
      int getId()
      {
        return id;
      }
      const char* getName()
      {
        return product_name;
      }
      void display()
      {
        cout<<"Product I'd is: "<<id<<"    Product Name is: "<<product_name<<endl; 
      }
};
class Item
{
      int price;
      const char *item_name;
    public:
      void setData(int p,const char *name)
      {
        price=p;
        item_name=name;
      }
      void display()
      {
        cout<<"Item Price is: "<<price<<"    Item Name is: "<<item_name<<endl;
      }
      Item()
      {}
      Item(Product P)
      {
        cout<<"Item(Product) called."<<endl;
        price=P.getId();
        item_name=P.getName();
      }
};

int main()
{
    Product p1,p2;
    p1.setData(11,"Ashish Varshney");
    Item i1,i2;
    i1=(Item)p1;
    i1.display();
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
class product{
    public:
    int productId;
    string productName;
    double price;
    int quantityInStock;

    product(int id,string name,double price,int stock){

        productId=id;
        productName=name;
        this->price=price;
        quantityInStock=stock;
    }
    void print()
    {
        cout<<"ID : "<<productId<<endl;
        cout<<"Name : "<<productName<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Quantity : "<<quantityInStock<<endl;

    }
    void update(int p){
        quantityInStock=quantityInStock+p;
    }

};

int main()
{
    product p1(101,"Laptop",1200.50,10);
    cout<<"Product 1 Information:"<<endl;
    p1.print();
    cout<<endl<<endl;
    product p2(102,"Headphones",50.75,50);
    cout<<"Product 2 Information:"<<endl;
    p2.print();
    cout<<endl<<endl;
    cout<<"Updating stock for product 1: 5 units"<<endl<<endl;

    cout<<"Product 1 Information after update:"<<endl;
    p1.update(5);
    p1.print();



}
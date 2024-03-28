#include<bits/stdc++.h>
using namespace std;
class Shape{
public:
    double width;
    double height;
};

class Rectangle:public Shape{
public:
    Rectangle(double width,double height)
    {
        this->width = width;
        this->height = height;
    }
    double RectangleArea()
    {
        return this->width * this->height;

    }

    double  Rectangle_perimeter()
    {
        return 2*(this->width + this->height);

    }

    void print()
    {
        cout<<"Width: "<<this->width<<endl;
        cout<<"Height: "<<this->height<<endl;
        cout<<"Area of rectangle is: "<<RectangleArea()<<endl;
        cout<<"Perimeter of rectangle is: "<<Rectangle_perimeter()<<endl;

    }
};

int main()
{
    Rectangle  rec1(5,10);
    cout<<"Rectangle 1 "<<endl<<endl;
    rec1.print();
    cout<<endl;

   Rectangle rec2(3.76,4.44);
   cout<<"Rectangle 2 "<<endl<<endl;
    rec2.print();
    cout<<endl;


}


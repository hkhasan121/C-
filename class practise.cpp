#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    double cgpa;
    string phone;
    public:
   string Department;

    Student()
    {
        name="daniel";
        cgpa=0.00;
        phone="01909558178";
        Department="CSE";
    }
    void printCgpa()
    {
        cout<<name<<" "<<cgpa<<endl;
    }
    void setName(string n)
    {
        name=n;
    }
    void setCgpa(double c)
    {
        cgpa=c;
    }
    void setDepartment(string d)
    {
        Department=d;

    }
    string getDepartment()
    {
        return name;
    }
    double getName()
    {
        return cgpa;
    }
    double getPhone(){
        return cgpa;
    }

    void printDetails()
    {
        cout<<name<<"  "<<cgpa<<"  "<<Department<<endl;
    }
    ~Student()
    {
        cout<<"Done"<<endl;
    }
};

int main()
{
    Student rafi;
    Student limon;
    Student tamim;
    rafi.setName("tamim");
    limon.setCgpa(3.70);
    tamim.setDepartment("CS");
    //limon.setPhone("01944");
    rafi.setCgpa(3.50);
    tamim.printCgpa();
    rafi.printDetails();
    tamim.setCgpa(rafi.getName());
    rafi.setName(limon.getDepartment());
    limon.Department="CS";
    rafi.printDetails();
    //rafi.cgpa=3.80;
    limon.printDetails();
    rafi.printDetails();
    tamim.printCgpa();
    cout<<rafi.getName()<<" "<<tamim.getPhone()<<endl;
    cout<<"GOOD LUCK"<<endl;

}


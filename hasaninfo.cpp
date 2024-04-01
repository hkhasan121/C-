#include<bits/stdc++.h>
using namespace std;

class Hasan{
    private:
    string name;
    string id;
    string semester;
    string department ;
    int year;
    string season;
    double cgpa;
    public:
    Hasan()
        {
            cgpa=0.00;

        }

        void setName(string n)
        {
            name=n;
        }
        void setId(string ID)
        {
            id=ID;
        }
        void setSemester(string sem)
        {
            semester = sem;
        }
        void setDepartment(string dep)
        {
            department = dep;
        }
        void setYear(int y)
        {
            year = y;
        }
        void setSeason(string sea)
        {
            season = sea;
        } 
        void setCgpa(double cg)
        {
            cgpa = cg;
        } 

        string getName()
        {
            return name;
        }
        string getId()
        {
            return id;
        }
        string getSemester()
        {
             return semester;
        }
        string getDepartment()
        {
            return department;
        }
        int getYear()
        {
             return year;
        }
        string getSeason()
        {
             return season;
        } 
        double getCgpa()
        {
             return cgpa;
        } 

        void display_information()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Department: "<<department<<endl;
            cout<<"Semester: "<<semester<<endl;
            cout<<"Season: "<<season<<endl;
            cout<<"Year: "<<year<<endl;
            cout<<"CGPA: "<<cgpa<<endl;
            cout<<endl<<endl;
        }




};

int main()
{
    Hasan h;
    h.setName("Hasan Sikder");
    h.setId("41230201039");
    h.setSemester("First");
    h.setDepartment("CSE");
    h.setSeason("Summer");
    h.setYear(2023);
    h.setCgpa(3.909);
    h.display_information();

    Hasan h1;
    h.setName("Hasan Sikder");
    h.setId("41230201039");
    h.setSemester("Second");
    h.setDepartment("CSE");
    h.setSeason("Fall");
    h.setYear(2023);
    h.setCgpa(3.94);
    h.display_information();


}
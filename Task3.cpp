#include<bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
};

class Test
{
public:
    int marks;
    string grade;
};

class Result: public Student,public Test
{
public:
    void input_student_details()
    {
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>rollNumber;
    }
    void input_test_details()
    {
        cout<<"Enter marks obtained: ";
        cin>>marks;
        cout<<"Enter grade: ";
        cin>>grade;
    }

    void display_student_information()
    {
        cout<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Grade: "<<grade<<endl;
        cout<<endl;
    }
};

int  main()
{
    Result student1;
    student1.input_student_details();
    student1.input_test_details();
    student1.display_student_information();

     Result student2;
    student2.input_student_details();
    student2.input_test_details();
    student2.display_student_information();
}

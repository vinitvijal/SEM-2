// Define a class Person having name as a data member. Inherit two classes Student and Employee from Person. Student has additional attributes as course, marks and year and Employee has department and salary. Write display() method in all the three classes to display the corresponding attributes. Provide the necessary methods to show runtime polymorphism.

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:

    Person(string name)
    {
        this->name = name;
    }

    virtual void display()
    {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person
{
private:
    string course;
    int marks;
    int year;

public:
        Student(string name, string course, int marks, int year) : Person(name)
        {
            this->course = course;
            this->marks = marks;
            this->year = year;
        }
    
        void display()
        {
            Person::display();
            cout << "Course: " << course << endl;
            cout << "Marks: " << marks << endl;
            cout << "Year: " << year << endl;
        }
    };



class Employee : public Person
{
private:
    string department;
    int salary;
    
public:
        
        Employee(string name, string department, int salary) : Person(name)
        {
            this->department = department;
            this->salary = salary;
        }
        
        void display()
        {
            Person::display();
            cout << "Department: " << department << endl;
            cout << "Salary: " << salary << endl;
        }
    };

int main(){
    Person *p;
    Student s("Pikachu", "BSc", 90, 2019);
    Employee e("Doraemon", "BMS", 100000);
    p = &s;
    p->display();
    p = &e;
    p->display();
    return 0;
}
// Identify the type of inheritance and implement it by modeling the examination database.
// Person is the parent class and student is the child of person and exam is the child of student.

#include <iostream>

using namespace std;
class Person
{
protected:
  char name[20];
  char address[20];

public:
  void getdata()
  {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
  }
  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
  }
};
class Student : public Person
{
protected:
  float percentage;
  int marks;

public:
  void getdata()
  {
    Person::getdata();
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter marks: ";
    cin >> marks;
  }
  void display()
  {
    Person::display();
    cout << "Percentage: " << percentage << endl;
    cout << "Marks: " << marks << endl;
  }
};

class Exam : public Student
{
protected:
  int marks;

public:
  void getdata()
  {
    Student::getdata();
    cout << "Enter marks: ";
    cin >> marks;
  }
  void display()
  {
    Student::display();
    cout << "Marks: " << marks << endl;
  }
};

int main()
{
  Exam e;
  e.getdata();
  e.display();
  return 0;
}

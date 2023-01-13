// 48.	Identify the type of inheritance and implement the following relation:
// Person is the base class.Student and sports are child classes of Person.Exam is the child class of Student.Result is the child class of exam and sports.

#include <iostream>
using namespace std;

class Person
{
protected:
  char name[20];
  int age;

public:
  void getdata()
  {
    cout << "Enter name and age: ";
    cin >> name >> age;
  }
  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Student : public Person
{
protected:
  int rollno;
  char course[20];

public:
  void getdata()
  {
    Person::getdata();
    cout << "Enter roll no and course: ";
    cin >> rollno >> course;
  }
  void display()
  {
    Person::display();
    cout << "Roll no: " << rollno << endl;
    cout << "Course: " << course << endl;
  }
};

class Exam : public Student
{
protected:
  int marks[5];

public:
  void getdata()
  {
    Student::getdata();
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
      cin >> marks[i];
  }
  void display()
  {
    Student::display();
    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
      cout << marks[i] << " ";
    cout << endl;
  }
};

class Sports
{
protected:
  int score;

public:
  void getdata()
  {
    cout << "Enter score: ";
    cin >> score;
  }
  void display()
  {
    cout << "Score: " << score << endl;
  }
};

class Result : public Exam, public Sports
{
protected:
  int total;

public:
  void getdata()
  {
    Exam::getdata();
    Sports::getdata();
  }
  void display()
  {
    Exam::display();
    Sports::display();
    total = 0;
    for (int i = 0; i < 5; i++)
      total += marks[i];
    total += score;
    cout << "Total: " << total << endl;
  }
};

int main()
{
  Result r;
  r.getdata();
  r.display();
  return 0;
}
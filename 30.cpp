#include <iostream>
using namespace std;
class Person{
protected:
  char name[20];
  char address[20];
public:
  void getdata(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter address: ";
    cin >> address;
  }
  void display(){
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
  }
};
class Student : public Person{
protected:
  float percentage;
  int marks;
public:
  void getdata(){
    Person::getdata();
    cout << "Enter percentage: ";
    cin >> percentage;
    cout << "Enter marks: ";
    cin >> marks;
  }
  void display(){
    Person::display();
    cout << "Percentage: " << percentage << endl;
    cout << "Marks: " << marks << endl;
  }
};
class Staff : public Person{
protected:
  float salary;
public:
  void getdata(){
    Person::getdata();
    cout << "Enter salary: ";
    cin >> salary;
  }
  void display(){
    Person::display();
    cout << "Salary: " << salary << endl;
  }
};
int main()
{
  Student s;
  Staff st;
  s.getdata();
  st.getdata();
  s.display();
  st.display();
  return 0;
}

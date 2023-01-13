#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
  int emp_id;
  string emp_name;
  void get(int x, string s)
  {
    emp_id = x;
    emp_name = s;
  }
};
class Emp_union
{
protected:
  int member_id;
  void set(int x)
  {
    member_id = x;
  }
};
class Emp_info : private Employee, private Emp_union
{
  int basic_salary;

public:
  void init(string c, int a, int b, int d)
  {
    get(a, c);
    set(b);
    basic_salary = d;
  }
  void show()
  {
    cout << "The name of the employee is " << emp_name << "\n";
    cout << "The employee id of the employee is " << emp_id << "\n";
    cout << "The member id of the employee is " << member_id << "\n";
    cout << "The basic salary of the employee is " << basic_salary << "\n";
  }
};
int main()
{
  Emp_info e1;
  int m, n, o;
  string s1;
  cout << "Enter the name ";
  getline(cin, s1);
  cout << "Enter the employee id ";
  cin >> m;
  cout << "Enter the member id ";
  cin >> n;
  cout << "Enter the basic salary ";
  cin >> o;
  e1.init(s1, m, n, o);
  e1.show();
}

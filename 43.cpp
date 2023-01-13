#include <iostream>
using namespace std;

class GrandParent
{
protected:
  int a;

public:
  GrandParent(int x)
  {
    a = x;
    cout << "GrandParent Constructor called with value: " << a << endl;
  }
};

class Parent : public GrandParent
{
protected:
  int b;

public:
  Parent(int x, int y) : GrandParent(x)
  {
    b = y;
    cout << "Parent Constructor called with value: " << b << endl;
  }
};

class Child : public Parent
{
protected:
  int c;

public:
  Child(int x, int y, int z) : Parent(x, y)
  {
    c = z;
    cout << "Child Constructor called with value: " << c << endl;
  }
};

int main()
{
  Child obj(10, 20, 30);
  return 0;
}

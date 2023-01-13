#include <iostream>
using namespace std;

class Base1
{
protected:
  int a;

public:
  Base1(int x)
  {
    a = x;
    cout << "Base1 Constructor called with value: " << a << endl;
  }
};

class Base2
{
protected:
  int b;

public:
  Base2(int y)
  {
    b = y;
    cout << "Base2 Constructor called with value: " << b << endl;
  }
};

class Derived : public Base1, public Base2
{
protected:
  int c;

public:
  Derived(int x, int y, int z) : Base1(x)
  {
    c = z;
    cout << "Derived Constructor called with value: " << c << endl;
    Base2::Base2(y);
  }
};

int main()
{
  Derived obj(10, 20, 30);
  return 0;
}

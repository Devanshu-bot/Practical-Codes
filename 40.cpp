#include <iostream>
using namespace std;

class Base1
{
protected:
  int a;

public:
  Base1(int x = 0)
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
  Base2(int y = 0)
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
  Derived(int x = 40, int y = 50, int z = 60) : Base1(x), Base2(y)
  {
    c = z;
    cout << "Derived Constructor called with value: " << c << endl;
  }
};

int main()
{
  Derived obj;
  return 0;
}

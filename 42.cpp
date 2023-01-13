#include <iostream>
using namespace std;

class Base1
{
public:
  int x;
  Base1(int a)
  {
    x = a;
    cout << "Constructor of Base1 is called, x = " << x << endl;
  }
};

class Base2
{
public:
  int y;
  Base2(int b)
  {
    y = b;
    cout << "Constructor of Base2 is called, y = " << y << endl;
  }
};

class Derived : public Base1, public Base2
{
public:
  int z;
  Derived(int a, int b, int c) : Base1(a), Base2(b)
  {
    z = c;
    cout << "Constructor of Derived is called, z = " << z << endl;
  }
};

int main()
{
  Derived obj(1, 2, 3);
  cout << "obj.x = " << obj.x << ", obj.y = " << obj.y << ", obj.z = " << obj.z << endl;
  return 0;
}

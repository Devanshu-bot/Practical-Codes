#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imag;

public:
  Complex() {}
  Complex(int x, int y)
  {
    real = x;
    imag = y;
  }
  Complex operator+(Complex c2)
  {
    Complex temp;
    temp.real = real + c2.real;
    temp.imag = imag + c2.imag;
    return temp;
  }
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
};

int main()
{
  Complex c1(3, 4), c2(5, 6), c3;
  c3 = c1 + c2;
  cout << "c1 = ";
  c1.display();
  cout << "c2 = ";
  c2.display();
  cout << "c3 = c1 + c2 = ";
  c3.display();
  return 0;
}

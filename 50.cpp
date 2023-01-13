#include <iostream>
using namespace std;

class Complex
{
private:
  int real;
  int imag;

public:
  Complex() {}
  Complex(int r, int i)
  {
    real = r;
    imag = i;
  }
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
  friend Complex operator+(Complex c1, Complex c2);
};

Complex operator+(Complex c1, Complex c2)
{
  Complex res;
  res.real = c1.real + c2.real;
  res.imag = c1.imag + c2.imag;
  return res;
}

int main()
{
  Complex c1(2, 3), c2(1, 2), c3;
  c3 = c1 + c2;
  cout << "Result: ";
  c3.display();
  return 0;
}

#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imag;

public:
  Complex(int r = 0, int i = 0)
  {
    real = r;
    imag = i;
  }
  void addComplex(Complex *c1, Complex *c2)
  {
    real = c1->real + c2->real;
    imag = c1->imag + c2->imag;
  }
  void print()
  {
    cout << real << " + i" << imag << endl;
  }
};

int main()
{
  Complex c1(10, 5);
  Complex c2(2, 4);
  Complex c3;
  c3.addComplex(&c1, &c2);
  cout << "c1 = ";
  c1.print();
  cout << "c2 = ";
  c2.print();
  cout << "c3 = ";
  c3.print();
  return 0;
}
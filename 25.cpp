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
  Complex(const Complex &c)
  {
    real = c.real;
    imag = c.imag;
  }
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
};

int main()
{
  int r, i;
  cout << "Enter the real and imaginary parts of the complex number: ";
  cin >> r >> i;
  Complex c1(r, i);
  cout << "Original complex number: ";
  c1.display();

  Complex c2 = c1;
  cout << "Copied complex number: ";
  c2.display();
  return 0;
}

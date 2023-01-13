#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imag;

public:
  void setData(int x, int y)
  {
    real = x;
    imag = y;
  }
  void addComplex(Complex c1, Complex c2)
  {
    real = c1.real + c2.real;
    imag = c1.imag + c2.imag;
  }
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
};

int main()
{
  Complex c1, c2, c3;
  c1.setData(3, 4);
  c2.setData(5, 6);
  c3.addComplex(c1, c2);
  cout << "c1 = ";
  c1.display();
  cout << "c2 = ";
  c2.display();
  cout << "c3 = c1 + c2 = ";
  c3.display();
  return 0;
}
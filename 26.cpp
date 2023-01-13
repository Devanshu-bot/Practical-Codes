#include <iostream>
using namespace std;

class Complex
{
private:
  double real;
  double imag;

public:
  Complex(double r = 0, double i = 0)
  {
    real = r;
    imag = i;
  }

  Complex operator*(Complex const &obj)
  {
    Complex res;
    res.real = real * obj.real - imag * obj.imag;
    res.imag = real * obj.imag + imag * obj.real;
    return res;
  }

  void print()
  {
    cout << real << " + " << imag << "i" << endl;
  }
};

int main()
{
  double real1, imag1, real2, imag2;

  cout << "Enter real part of first complex number: ";
  cin >> real1;
  cout << "Enter imaginary part of first complex number: ";
  cin >> imag1;
  cout << "Enter real part of second complex number: ";
  cin >> real2;
  cout << "Enter imaginary part of second complex number: ";
  cin >> imag2;

  Complex c1(real1, imag1);
  Complex c2(real2, imag2);
  Complex result = c1 * c2;

  cout << "Multiplication of the complex numbers: ";
  result.print();

  return 0;
}

#include <iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int width;

public:
  Rectangle() {}
  Rectangle(int l, int w)
  {
    length = l;
    width = w;
  }
  void setData(int l, int w)
  {
    length = l;
    width = w;
  }
  int getArea()
  {
    return length * width;
  }
  void display()
  {
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << getArea() << endl;
  }
  friend class Calculator;
  friend void displayWidth(Rectangle);
};

class Calculator
{
public:
  void doubleWidth(Rectangle &r)
  {
    r.width *= 2;
  }
};

void displayWidth(Rectangle r)
{
  cout << "Width: " << r.width << endl;
}

int main()
{
  Rectangle rect(4, 5);
  cout << "Original rectangle:" << endl;
  rect.display();

  Calculator calc;
  calc.doubleWidth(rect);
  cout << "Rectangle after doubleWidth function of class Calculator:" << endl;
  rect.display();

  displayWidth(rect);
  return 0;
}

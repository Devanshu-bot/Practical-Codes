#include <iostream>
using namespace std;

class Number
{
private:
  int num;

public:
  Number(int n = 0)
  {
    num = n;
  }
  void display()
  {
    cout << "Number: " << num << endl;
  }
  Number operator++()
  {
    return Number(++num);
  }
  Number operator++(int)
  {
    return Number(num++);
  }
};

int main()
{
  Number n1(10);
  cout << "Original ";
  n1.display();
  cout << "Prefix Increment ";
  (++n1).display();
  cout << "Postfix Increment ";
  (n1++).display();
  cout << "After Increment ";
  n1.display();
  return 0;
}

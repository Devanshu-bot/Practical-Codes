#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
  string str;

public:
  MyString()
  {
    str = "";
  }
  MyString(string s)
  {
    str = s;
  }
  string getString()
  {
    return str;
  }
  MyString operator+(const MyString &other)
  {
    return MyString(str + other.str);
  }
};

int main()
{
  MyString str1("Hello ");
  MyString str2("world!");
  MyString str3 = str1 + str2;
  cout << str3.getString() << endl;
  return 0;
}

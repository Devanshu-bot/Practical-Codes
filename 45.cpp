#include <iostream>
using namespace std;

class Publication
{
protected:
  string title;
  float price;

public:
  Publication(string t, float p)
  {
    title = t;
    price = p;
  }
  virtual void getdata()
  {
    cout << "Enter title: ";
    cin >> title;
    cout << "Enter price: ";
    cin >> price;
  }
  virtual void display()
  {
    cout << "Title: " << title << endl;
    cout << "Price: " << price << endl;
  }
};

class Sales
{
protected:
  float sales[3];

public:
  Sales()
  {
    for (int i = 0; i < 3; i++)
    {
      sales[i] = 0;
    }
  }
  void getdata()
  {
    cout << "Enter sales for the last 3 months: " << endl;
    for (int i = 0; i < 3; i++)
    {
      cin >> sales[i];
    }
  }
  void display()
  {
    cout << "Sales for the last 3 months: ";
    for (int i = 0; i < 3; i++)
    {
      cout << sales[i] << " ";
    }
    cout << endl;
  }
};

class Book : public Publication, public Sales
{
private:
  int pages;

public:
  Book(string t, float p, int pg) : Publication(t, p), Sales()
  {
    pages = pg;
  }
  void getdata()
  {
    Publication::getdata();
    Sales::getdata();
    cout << "Enter number of pages: ";
    cin >> pages;
  }
  void display()
  {
    Publication::display();
    Sales::display();
    cout << "Number of pages: " << pages << endl;
  }
};

int main()
{
  Book b("Effective C++", 20.5, 200);
  b.getdata();
  cout << "Book details:" << endl;
  b.display();
  return 0;
}

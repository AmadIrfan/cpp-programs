#include <iostream>
using namespace std;
main()
{
  long double p1, p2, p3, p4;
  int netp, soldc;
  cout << "Enter net price of each copy of novel ";
  cin >> netp;
  cout << "Enter no of copies that will be sold ";
  cin >> soldc;
  p1 = 25000;
  p2 = netp * 12.5 / 100.0 * soldc;
  if (soldc <= 4000)
  {
    p3 = netp * 10.0 / 100.0 * soldc;
  }
  else
  {
    p3 = (netp * 10.0 / 100.0 * 4000) + (netp * 14.0 / 100.0 * (soldc - 4000));
  }
  if (p1 > p2 && p1 > p3 )
  {
    cout << p1 << " "
         << "Option one is best" << endl;
  }
  else if (p2 > p1 && p2 > p3)
  {
    cout << p2 << " "
         << "Option two is best" << endl;
  }
  else //(p3 > p1 && p3 > p2 && p3 > p4)
  {
    cout << p3 << " "<< "Option three is best" << endl;
  }
}
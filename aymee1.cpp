#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
main()
{
  int a=32, *ptr = &a; 
  char ch='A',*cho = &ch;
  cho+=a;                                                                                                                                                                                                                                 
  *ptr+=ch;
  cout<<a<<","<<ch<<endl;
  return 0;
}
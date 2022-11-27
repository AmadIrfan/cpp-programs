#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
struct nodetype
{
    int info;
    nodetype *link;
};
nodetype *list=NULL; 
int main()
{
    nodetype *first,*current,*last,*temp,*trail,*p,*q;
    nodetype *link=new nodetype;
    link->info=47;
    link->link=NULL;
    list=link;
    
    return 0;
}
// ROLL NO 2021-CS-25
// NAME Amad Irfan
/*The figure consists of 6 blocks with size h * h, placed as in the figure below. The lower left angle
of the building is at position {0, 0}. The upper right angle of the figure is on position {2*h, 4*h}.
The coordinates given in the figure are for h = 2:
Write a program that enters an integer h and the coordinates of a given point {x, y} (integers) and
prints whether the point is inside the figure (inside), outside of the figure (outside) or on any of
the borders of the figure (border)*/

#include <iostream>
using namespace std;
int main()
{
    int h, x, y;
    string output;
    // USER INPUT VALUES
    cout << "Enter The Value Of h: ";
    cin >> h;
    cout << "Enter The Coordinate Point of X ";
    cin >> x;
    cout << "Enter The Coordinate Point of Y ";
    cin >> y;
    // conditions start from here
    if ((x==0 ||x==1|| x==2)&&(y==0||y==2||y==4||y==6))
    {
        output="Boarder";
    }
    if ((x==2||x==4||x==6)&&(y==0||y==2||y==4||y==6||y==8))
    {
        output="Boarder";
    }
    if ((x>0&&x<6)&&(y>0&&y<2))
    {
        output="inside";
    }
    if ((x>2&&x<4)&&(y>0&&y<8))
    {
        output="inside";
    }
    if ((x<2||x>4)&&(y>2))
    {
    output="outside";
    }
    if ((x==2||x==4)&&(y>2))
    {
        output="outside";
    }
    if((x<2||x>4)&&(y>8)){
    
        output="outside";
    }
    
    cout<<endl<<endl<<output;
    
}
//  program ends
// ROLL NO 2021-CS-28
// NAME YASIR HASSAH
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
    // USER INPUT VALUES
    cout << "Enter The Value Of h: ";
    cin >> h;
    cout << "Enter The Coordinate Point of X ";
    cin >> x;
    cout << "Enter The Coordinate Point of Y ";
    cin >> y;
    // conditions start from here
    if (x < 6 && y < 2)
    {
        cout << "Inside";
    }
    if (((y > 2) && (y < 8)) && ((x > 2) && (x < 4)))
    {
        cout << "Inside";
    }
    if (((x >= 0) && (x < 2)) && (y > 2))
    {
        cout << "Outside";
    }
    if ((y > 8) && ((x >= 2) && (x <= 4)))
    {
        cout << "Outside";
    }
    if ((y > 2) && (x > 4))
    {
        cout << "Outside";
    }
    if ((y == 2) && ((x >= 0) && (x < 2)))
    {
        cout << "Border.";
    }
    if ((x == 2) && ((y >= 2) && (y <= 8)))
    {
        cout << "Border";
    }
    if ((y == 8) && ((x > 2) && (x <= 4)))
    {
        cout << "Border";
    }
    if ((x == 4) && ((y >= 2) && (y <= 8)))
    {
        cout << "Border";
    }
    if ((y == 2) && ((x >= 4) && (x <= 6)))
    {
        cout << "Border";
    }
    if ((x == 6) && (y >= 0) && (y < 2))
    {
        cout << "Border";
    }
    // conditions end here
}
// the end

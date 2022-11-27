// Name: Amad Irfan
// Roll No: 2021-CS-25

// question
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
    string output;
    int h, x, y;
    cout << "Enter The Value Of h: ";
    cin >> h;
    cout << "Enter The Coordinates Of Point x ";
    cin >> x;
    cout << "Enter The Coordinates Of Point y ";
    cin >> y;

    if ((y < (3 * h)) && (x < h))
    {
        output = "Inside";
    }
   else if ((y < (h * 4)) && ((x > h) && (x < (h * 2))))

    {
        output = "Inside";
    }

    else if ((y > h) && (x < h))
    {
        output = "outside";
    }
    else if ((y > (h * 4)) && ((x >= h) && (x < (h * 2))))
    {
        output = "outside";
    }
    else if ((y > h) && (x > (h * 2)))
    {
        output = "outside";
    }

    else if ((y == h) && (x >= (h * 2)) && (y <= (h * 3)))
    {
        output = "Border";
    }
    else if ((x == (h * 3)) && ((y >= 0) && (y < h)))
    {
        output = "Border";
    }
    else if ((x == h) && ((y >= h) && (y <= (h * 4))))
    {
        output = "Border";
    }
    else if ((y == (h * 4)) && ((x > h) && (x <= (h * 2))))
    {
        output = "Border";
    }
   else if ((x == (h * 2)) && ((y >= h) && (y <= (h * 4))))
    {
        output = "Border";
    }

    cout << endl
         << output;
}

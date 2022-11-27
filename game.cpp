#include <iostream>                                                                                              
#include <time.h>
#include <windows.h>
#include <fstream>
#include <conio.h>
using namespace std;
char maze[50][110];
int davex = 8;      // x position of character
int davey = 4;      // y position of character
int enemyX1 = 1;    // Enemy1 X-coordinate
int enemyY1 = 1;    // Enemy1 y-coordinate
int enemyX2 = 7;    // Enemy2 X-coordinate
int enemyY2 = 1;    // Enemy2 y-coordinate
int enemyY3 = 71;   // Enemy3 y-coordinate
int enemyX3 = 2;    // Enemy3 X-coordinate
int enemyX4 = 6;    // Enemy4 X-coordinate
int enemyY4 = 71;   // Enemy4 y-coordinate
int enemyX5 = 8;    // Enemy5 X-coordinate
int enemyY5 = 76;   // Enemy5 y-coordinate
int enemyX6 = 17;   // Enemy6 X-coordinate
int enemyY6 = 47;   // Enemy6 y-coordinate
int enemyX7 = 17;   // Enemy7 X-coordinate
int enemyY7 = 107;  // Enemy7 y-coordinate
int enemyX8 = 18;   // Enemy8 X-coordinate
int enemyY8 = 1;    // Enemy8 y-coordinate
int enemyX9 = 20;   // Enemy9 X-coordinate
int enemyY9 = 1;    // Enemy9 y-coordinate
int enemyX10 = 25;  // Enemy10 X-coordinate
int enemyY10 = 1;   // Enemy10 y-coordinate
int enemyX11 = 26;  // Enemy11 X-coordinate
int enemyY11 = 57;  // Enemy11 y-coordinate
int enemyX12 = 27;  // Enemy12 X-coordinate
int enemyY12 = 61;  // Enemy12 y-coordinate
int enemyX13 = 27;  // Enemy13 X-coordinate
int enemyY13 = 83;  // Enemy13 y-coordinate
int enemyX14 = 31;  // Enemy14 X-coordinate
int enemyY14 = 8;   // Enemy14 y-coordinate
int enemyX15 = 36;  // Enemy15 X-coordinate
int enemyY15 = 87;  // Enemy15 y-coordinate
int enemyX16 = 40;  // Enemy16 X-coordinate
int enemyY16 = 17;  // Enemy16 y-coordinate
int enemyX17 = 46;  // Enemy17 X-coordinate
int enemyY17 = 102; // Enemy17 y-coordinate
int enemyX18 = 46;  // Enemy18 X-coordinate
int enemyY18 = 1;   // Enemy18 y-coordinate
int enemyX19 = 47;  // Enemy19 X-coordinate
int enemyY19 = 23;  // Enemy19 y-coordinate
int enemyX20 = 48;  // Enemy20 X-coordinate
int enemyY20 = 1;   // Enemy20 y-coordinate
bool gamerunning = true;
int trophiex = 3;  // x position of trophie
int trophiey = 74; // y position of trophie
int score = 0;
int lives = 3;
string dir1 = "Left";  // direction of enemy 1 left
string dir2 = "Left";  // direction of enemy 2 left
string dir3 = "Left";  // direction of enemy 3 left
string dir4 = "Left";  // direction of enemy 4 left
string dir5 = "Left";  // direction of enemy 5 left
string dir6 = "Left";  // direction of enemy 6 left
string dir7 = "Left";  // direction of enemy 7 left
string dir8 = "Left";  // direction of enemy 8 left
string dir9 = "Left";  // direction of enemy 9 left
string dir10 = "Left"; // direction of enemy 10 left
string dir11 = "Left"; // direction of enemy 11 left
string dir12 = "Left"; // direction of enemy 12 left
string dir13 = "Left"; // direction of enemy 13 left
string dir14 = "Left"; // direction of enemy 14 left
string dir15 = "Left"; // direction of enemy 15 left
string dir16 = "Left"; // direction of enemy 16 left
string dir17 = "Left"; // direction of enemy 17 left
string dir18 = "Left"; // direction of enemy 18 left
string dir19 = "Left"; // direction of enemy 19 left
string dir20 = "Left"; // direction of enemy 20 left
fstream file;
void gotoxy(int y, int x);
void loadmaze();
void printmaze();
void printmaze1();
void movedanemy1Left();
void movedanemy1Right();
void movedanemy2Left();
void movedanemy2Right();
void movedanemy3Left();
void movedanemy3Right();
void movedanemy4Left();
void movedanemy4Right();
void movedanemy5Left();
void movedanemy5Right();
void movedanemy6Left();
void movedanemy6Right();
void movedanemy7Left();
void movedanemy7Right();
void movedanemy8Left();
void movedanemy8Right();
void movedanemy9();
void movedanemy10();
void movedanemy11();
void movedanemy12();
void movedanemy13();
void movedanemy14();
void movedanemy15();
void movedanemy16();
void movedanemy17();
void movedanemy18();
void movedanemy19();
void movedanemy20();
void movedaveLeft();
void movedaveRight();
void movedaveUp();
void movedaveDown();
void initializer();
void gameover();

main()
{
    loadmaze();
    system("CLS");
    printmaze();
    getch();
    while (lives > 0)
    {
        initializer();
        while (gamerunning)
        {
            Sleep(100);
            gotoxy(130, 2);
            cout << "Score: " << score;
            gotoxy(120, 9);
            cout << "Rules: ";
            gotoxy(130, 10);
            cout << "_Use UP keys to move UP";
            gotoxy(130, 11);
            cout << "_Use Left key to Move Back";
            gotoxy(130, 12);
            cout << "_Use Right Key to Move Forword";
            gotoxy(130, 13);
            cout << "_Use Down Key to Move Down";
            gotoxy(130, 20);
            cout << "________________________";
            gotoxy(130, 22);
            cout << "Play Distract Journey";
            gotoxy(130, 24);
            cout << "_______________________";
            gotoxy(130, 25);
            cout << "Players Lives: " << lives;
            // getch();
            gameover();
            movedanemy1Left();
            movedanemy1Right();
            movedanemy2Left();
            movedanemy2Right();
            movedanemy3Left();
            movedanemy3Right();
            movedanemy4Left();
            movedanemy4Right();
            movedanemy5Left();
            movedanemy5Right();
            movedanemy6Left();
            movedanemy6Right();
            movedanemy7Left();
            movedanemy7Right();
            movedanemy8Left();
            movedanemy8Right();
            movedanemy9();
            movedanemy10();
            movedanemy11();
            movedanemy12();
            movedanemy13();
            movedanemy14();
            movedanemy15();
            movedanemy16();
            movedanemy17();
            movedanemy18();
            movedanemy19();
            movedanemy20();
            if (GetAsyncKeyState(VK_LEFT))
            {
                movedaveLeft(); // to move dave left
            }
            if (GetAsyncKeyState(VK_RIGHT))
            {
                movedaveRight(); // to move dave right
            }
            if (GetAsyncKeyState(VK_UP))
            {
                movedaveUp(); // to move dave up
            }
            if (GetAsyncKeyState(VK_DOWN))
            {
                movedaveDown(); // to move dave down
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                gamerunning = false; // game end
            }
        }
        lives--;
    }
    getch();
    if (lives < 0)
    {
        gotoxy(131, 25);
        cout << "Game Over " << endl;

        getch();
    }
    getch();
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
    for (int i = 0; i < 50; i++)
    {
        for (int j = 0; j < 110; j++)
        {
            cout << maze[i][j];
        }
        cout << endl;
    }
}
void loadmaze()
{

    file.open("maze.txt", ios::in);
    for (int i = 0; i < 50; i++)
    {
        string word;
        getline(file, word);
        for (int j = 0; j < 110; j++)
        {
            // file >> maze[i][j];

            maze[i][j] = word[j];
        }
        // file << endl;
    }
    file.close();
}

void movedanemy1Right()
{

    if (dir1 == "Left")
    {
        if (maze[enemyX1][enemyY1 + 1] != '#')
        {
            if (maze[enemyX1][enemyY1 + 1] == ' ' || maze[enemyX1][enemyY1 + 1] == 'C')
            {
                enemyY1++;
                gotoxy(enemyY1, enemyX1);
                cout << 'A';
                maze[enemyX1][enemyY1] = 'A';
                maze[enemyX1][enemyY1 - 1] = ' ';
                gotoxy(enemyY1 - 1, enemyX1);
                cout << ' ';
            }
        }
        else if (maze[enemyX1][enemyY1 + 1] == '#')
        {
            dir1 = "Right";
        }
    }
}
void movedanemy1Left()
{
    if (dir1 == "Right")
    {
        if (maze[enemyX1][enemyY1 - 1] != '#')
        {
            if (maze[enemyX1][enemyY1 - 1] == ' ' || maze[enemyX1][enemyY1 - 1] == 'C')
            {
                enemyY1--;
                gotoxy(enemyY1, enemyX1);
                cout << 'A';
                maze[enemyX1][enemyY1] = 'A';
                maze[enemyX1][enemyY1 + 1] = ' ';
                gotoxy(enemyY1 + 1, enemyX1);
                cout << ' ';
            }
        }
        else if (maze[enemyX1][enemyY1 - 1] == '#')
        {
            dir1 = "Left";
        }
    }
}
void movedanemy2Right()
{
    if (dir2 == "Left")
    {
        if (maze[enemyX2][enemyY2 + 1] != '-')
        {
            if (maze[enemyX2][enemyY2 + 1] == ' ' || maze[enemyX2][enemyY2 + 1] == 'C')
            {
                enemyY2++;
                gotoxy(enemyY2, enemyX2);
                cout << 'A';
                maze[enemyX2][enemyY2] = 'A';
                maze[enemyX2][enemyY2 - 1] = ' ';
                gotoxy(enemyY2 - 1, enemyX2);
                cout << ' ';
            }
        }
        else if (maze[enemyX2][enemyY2 + 1] == '-')
        {
            dir2 = "Right";
        }
    }
}
void movedanemy2Left()
{
    if (dir2 == "Right")
    {
        if (maze[enemyX2][enemyY2 - 1] != '#')
        {
            if (maze[enemyX2][enemyY2 - 1] == ' ' || maze[enemyX2][enemyY2 - 1] == 'C')
            {
                enemyY2--;
                gotoxy(enemyY2, enemyX2);
                cout << 'A';
                maze[enemyX2][enemyY2] = 'A';
                maze[enemyX2][enemyY2 + 1] = ' ';
                gotoxy(enemyY2 + 1, enemyX2);
                cout << ' ';
            }
        }
        else if (maze[enemyX2][enemyY2 - 1] == '#')
        {
            dir2 = "Left";
        }
    }
}
void movedanemy3Right()
{
    if (dir3 == "Left")
    {
        if (maze[enemyX3][enemyY3 + 1] != '#')
        {
            if (maze[enemyX3][enemyY3 + 1] == ' ' || maze[enemyX3][enemyY3 + 1] == 'C')
            {
                enemyY3++;
                gotoxy(enemyY3, enemyX3);
                cout << 'T';
                maze[enemyX3][enemyY3] = 'T';
                maze[enemyX3][enemyY3 - 1] = ' ';
                gotoxy(enemyY3 - 1, enemyX3);
                cout << ' ';
            }
        }
        else if (maze[enemyX3][enemyY3 + 1] == '#')
        {
            dir3 = "Right";
        }
    }
}
void movedanemy3Left()
{
    if (dir3 == "Right")
    {
        if (maze[enemyX3][enemyY3 - 1] != 'w')
        {
            if (maze[enemyX3][enemyY3 - 1] == ' ' || maze[enemyX3][enemyY3 - 1] == 'C')
            {
                enemyY3--;
                gotoxy(enemyY3, enemyX3);
                cout << 'T';
                maze[enemyX3][enemyY3] = 'T';
                maze[enemyX3][enemyY3 + 1] = ' ';
                gotoxy(enemyY3 + 1, enemyX3);
                cout << ' ';
            }
        }
        else if (maze[enemyX3][enemyY3 - 1] == 'w')
        {
            dir3 = "Left";
        }
    }
}
void movedanemy4Left()
{
    if (dir4 == "Right")
    {
        if (maze[enemyX4][enemyY4 - 1] != '-')
        {
            if (maze[enemyX4][enemyY4 - 1] == ' ' || maze[enemyX4][enemyY4 - 1] == 'C')
            {
                enemyY4--;
                gotoxy(enemyY4, enemyX4);
                cout << 'A';
                maze[enemyX4][enemyY4] = 'A';
                maze[enemyX4][enemyY4 + 1] = ' ';
                gotoxy(enemyY4 + 1, enemyX4);
                cout << ' ';
            }
        }
        else if (maze[enemyX4][enemyY4 - 1] == '-')
        {
            dir4 = "Left";
        }
    }
}

void movedanemy4Right()
{
    if (dir4 == "Left")
    {
        if (maze[enemyX4][enemyY4 + 1] != '#')
        {
            if (maze[enemyX4][enemyY4 + 1] == ' ' || maze[enemyX4][enemyY4 + 1] == 'C')
            {
                enemyY4++;
                gotoxy(enemyY4, enemyX4);
                cout << 'A';
                maze[enemyX4][enemyY4] = 'A';
                maze[enemyX4][enemyY4 - 1] = ' ';
                gotoxy(enemyY4 - 1, enemyX4);
                cout << ' ';
            }
        }
        else if (maze[enemyX4][enemyY4 + 1] == '#')
        {
            dir4 = "Right";
        }
    }
}
void movedanemy5Right()
{
    if (dir5 == "Left")
    {
        if (maze[enemyX5][enemyY5 + 1] != '#')
        {
            if (maze[enemyX5][enemyY5 + 1] == ' ' || maze[enemyX5][enemyY5 + 1] == 'C')
            {
                enemyY5++;
                gotoxy(enemyY5, enemyX5);
                cout << 'A';
                maze[enemyX5][enemyY5] = 'A';
                maze[enemyX5][enemyY5 - 1] = ' ';
                gotoxy(enemyY5 - 1, enemyX5);
                cout << ' ';
            }
        }
        else if (maze[enemyX5][enemyY5 + 1] == '#')
        {
            dir5 = "Right";
        }
    }
}
void movedanemy5Left()
{
    if (dir5 == "Right")
    {
        if (maze[enemyX5][enemyY5 - 1] != '\\')
        {
            if (maze[enemyX5][enemyY5 - 1] == ' ' || maze[enemyX5][enemyY5 - 1] == 'C')
            {
                enemyY5--;
                gotoxy(enemyY5, enemyX5);
                cout << 'A';
                maze[enemyX5][enemyY5] = 'A';
                maze[enemyX5][enemyY5 + 1] = ' ';
                gotoxy(enemyY5 + 1, enemyX5);
                cout << ' ';
            }
        }
        else if (maze[enemyX5][enemyY5 - 1] == '\\')
        {
            dir5 = "Left";
        }
    }
}
void movedanemy6Right()
{
    if (dir6 == "Left")
    {
        if (maze[enemyX6][enemyY6 + 1] != '-')
        {
            if (maze[enemyX6][enemyY6 + 1] == ' ' || maze[enemyX6][enemyY6 + 1] == 'C')
            {
                enemyY6++;
                gotoxy(enemyY6, enemyX6);
                cout << 'A';
                maze[enemyX6][enemyY6] = 'A';
                maze[enemyX6][enemyY6 - 1] = ' ';
                gotoxy(enemyY6 - 1, enemyX6);
                cout << ' ';
            }
        }
        else if (maze[enemyX6][enemyY6 + 1] == '-')
        {
            dir6 = "Right";
        }
    }
}

void movedanemy6Left()
{
    if (dir6 == "Right")
    {
        if (maze[enemyX6][enemyY6 - 1] != '|')
        {
            if (maze[enemyX6][enemyY6 - 1] == ' ' || maze[enemyX6][enemyY6 - 1] == 'C')
            {
                enemyY6--;
                gotoxy(enemyY6, enemyX6);
                cout << 'A';
                maze[enemyX6][enemyY6] = 'A';
                maze[enemyX6][enemyY6 + 1] = ' ';
                gotoxy(enemyY6 + 1, enemyX6);
                cout << ' ';
            }
        }
        else if (maze[enemyX6][enemyY6 - 1] == '|')
        {
            dir6 = "Left";
        }
    }
}
void movedanemy7Right()
{
    if (dir7 == "Left")
    {
        if (maze[enemyX7][enemyY7 + 1] != '#')
        {
            if (maze[enemyX7][enemyY7 + 1] == ' ' || maze[enemyX7][enemyY7 + 1] == 'C')
            {
                enemyY7++;
                gotoxy(enemyY7, enemyX7);
                cout << 'A';
                maze[enemyX7][enemyY7] = 'A';
                maze[enemyX7][enemyY7 - 1] = ' ';
                gotoxy(enemyY7 - 1, enemyX7);
                cout << ' ';
            }
        }
        else if (maze[enemyX7][enemyY7 + 1] == '#')
        {
            dir7 = "Right";
        }
    }
}
void movedanemy7Left()
{
    if (dir7 == "Right")
    {
        if (maze[enemyX7][enemyY7 - 1] != '-')
        {
            if (maze[enemyX7][enemyY7 - 1] == ' ' || maze[enemyX7][enemyY7 - 1] == 'C')
            {
                enemyY7--;
                gotoxy(enemyY7, enemyX7);
                cout << 'A';
                maze[enemyX7][enemyY7] = 'A';
                maze[enemyX7][enemyY7 + 1] = ' ';
                gotoxy(enemyY7 + 1, enemyX7);
                cout << ' ';
            }
        }
        else if (maze[enemyX7][enemyY7 - 1] == '-')
        {
            dir7 = "Left";
        }
    }
}
void movedanemy8Right()
{
    if (dir8 == "Left")
    {
        if (maze[enemyX8][enemyY8 + 1] != 'w')
        {
            if (maze[enemyX8][enemyY8 + 1] == ' ' || maze[enemyX8][enemyY8 + 1] == 'C')
            {
                enemyY8++;
                gotoxy(enemyY8, enemyX8);
                cout << 'A';
                maze[enemyX8][enemyY8] = 'A';
                maze[enemyX8][enemyY8 - 1] = ' ';
                gotoxy(enemyY8 - 1, enemyX8);
                cout << ' ';
            }
        }
        else if (maze[enemyX8][enemyY8 + 1] == 'w')
        {
            dir8 = "Right";
        }
    }
}
void movedanemy8Left()
{
    if (dir8 == "Right")
    {
        if (maze[enemyX8][enemyY8 - 1] != '#')
        {
            if (maze[enemyX8][enemyY8 - 1] == ' ' || maze[enemyX8][enemyY8 - 1] == 'C')
            {
                enemyY8--;
                gotoxy(enemyY8, enemyX8);
                cout << 'A';
                maze[enemyX8][enemyY8] = 'A';
                maze[enemyX8][enemyY8 + 1] = ' ';
                gotoxy(enemyY8 + 1, enemyX8);
                cout << ' ';
            }
        }
        else if (maze[enemyX8][enemyY8 - 1] == '#')
        {
            dir8 = "Left";
        }
    }
}
void movedanemy9()
{
    if (dir9 == "Left")
    {
        if (maze[enemyX9][enemyY9 + 1] != '/')
        {
            if (maze[enemyX9][enemyY9 + 1] == ' ' || maze[enemyX9][enemyY9 + 1] == 'C')
            {
                enemyY9++;
                gotoxy(enemyY9, enemyX9);
                cout << 'A';
                maze[enemyX9][enemyY9] = 'A';
                maze[enemyX9][enemyY9 - 1] = ' ';
                gotoxy(enemyY9 - 1, enemyX9);
                cout << ' ';
            }
        }
        else if (maze[enemyX9][enemyY9 + 1] == '/')
        {
            dir9 = "Right";
        }
    }

    if (dir9 == "Right")
    {
        if (maze[enemyX9][enemyY9 - 1] != '#')
        {
            if (maze[enemyX9][enemyY9 - 1] == ' ' || maze[enemyX9][enemyY9 - 1] == 'C')
            {
                enemyY9--;
                gotoxy(enemyY9, enemyX9);
                cout << 'A';
                maze[enemyX9][enemyY9] = 'A';
                maze[enemyX9][enemyY9 + 1] = ' ';
                gotoxy(enemyY9 + 1, enemyX9);
                cout << ' ';
            }
        }
        else if (maze[enemyX9][enemyY9 - 1] == '#')
        {
            dir9 = "Left";
        }
    }
}
void movedanemy10()
{
    if (dir10 == "Left")
    {
        if (maze[enemyX10][enemyY10 + 1] != '#')
        {
            if (maze[enemyX10][enemyY10 + 1] == ' ' || maze[enemyX10][enemyY10 + 1] == 'C')
            {
                enemyY10++;
                gotoxy(enemyY10, enemyX10);
                cout << 'A';
                maze[enemyX10][enemyY10] = 'A';
                maze[enemyX10][enemyY10 - 1] = ' ';
                gotoxy(enemyY10 - 1, enemyX10);
                cout << ' ';
            }
        }
        else if (maze[enemyX10][enemyY10 + 1] == '#')
        {
            dir10 = "Right";
        }
    }
    if (dir10 == "Right")
    {
        if (maze[enemyX10][enemyY10 - 1] != '#')
        {
            if (maze[enemyX10][enemyY10 - 1] == ' ' || maze[enemyX10][enemyY10 - 1] == 'C')
            {
                enemyY10--;
                gotoxy(enemyY10, enemyX10);
                cout << 'A';
                maze[enemyX10][enemyY10] = 'A';
                maze[enemyX10][enemyY10 + 1] = ' ';
                gotoxy(enemyY10 + 1, enemyX10);
                cout << ' ';
            }
        }
        else if (maze[enemyX10][enemyY10 - 1] == '#')
        {
            dir10 = "Left";
        }
    }
}
void movedanemy11()
{
    if (dir11 == "Left")
    {
        if (maze[enemyX11][enemyY11 + 1] != '#')
        {
            if (maze[enemyX11][enemyY11 + 1] == ' ' || maze[enemyX11][enemyY11 + 1] == 'C')
            {
                enemyY11++;
                gotoxy(enemyY11, enemyX11);
                cout << 'J';
                maze[enemyX11][enemyY11] = 'J';
                maze[enemyX11][enemyY11 - 1] = ' ';
                gotoxy(enemyY11 - 1, enemyX11);
                cout << ' ';
            }
        }
        else if (maze[enemyX11][enemyY11 + 1] == '#')
        {
            dir11 = "Right";
        }
    }
    if (dir11 == "Right")
    {
        if (maze[enemyX11][enemyY11 - 1] != '#')
        {
            if (maze[enemyX11][enemyY11 - 1] == ' ' || maze[enemyX11][enemyY11 - 1] == 'C')
            {
                enemyY11--;
                gotoxy(enemyY11, enemyX11);
                cout << 'J';
                maze[enemyX11][enemyY11] = 'J';
                maze[enemyX11][enemyY11 + 1] = ' ';
                gotoxy(enemyY11 + 1, enemyX11);
                cout << ' ';
            }
        }
        else if (maze[enemyX11][enemyY11 - 1] == '#')
        {
            dir11 = "Left";
        }
    }
}
void movedanemy12()
{
    if (dir12 == "Left")
    {
        if (maze[enemyX12][enemyY12 + 1] != 'w')
        {
            if (maze[enemyX12][enemyY12 + 1] == ' ' || maze[enemyX12][enemyY12 + 1] == 'C')
            {
                enemyY12++;
                gotoxy(enemyY12, enemyX12);
                cout << 'A';
                maze[enemyX12][enemyY12] = 'A';
                maze[enemyX12][enemyY12 - 1] = ' ';
                gotoxy(enemyY12 - 1, enemyX12);
                cout << ' ';
            }
        }
        else if (maze[enemyX12][enemyY12 + 1] == 'w')
        {
            dir12 = "Right";
        }
    }
    if (dir12 == "Right")
    {
        if (maze[enemyX12][enemyY12 - 1] != '-')
        {
            if (maze[enemyX12][enemyY12 - 1] == ' ' || maze[enemyX12][enemyY12 - 1] == 'C')
            {
                enemyY12--;
                gotoxy(enemyY12, enemyX12);
                cout << 'A';
                maze[enemyX12][enemyY12] = 'A';
                maze[enemyX12][enemyY12 + 1] = ' ';
                gotoxy(enemyY12 + 1, enemyX12);
                cout << ' ';
            }
        }
        else if (maze[enemyX12][enemyY12 - 1] == '-')
        {
            dir12 = "Left";
        }
    }
}
void movedanemy13()
{
    if (dir13 == "Left")
    {
        if (maze[enemyX13][enemyY13 + 1] != '#')
        {
            if (maze[enemyX13][enemyY13 + 1] == ' ' || maze[enemyX13][enemyY13 + 1] == 'C')
            {
                enemyY13++;
                gotoxy(enemyY13, enemyX13);
                cout << 'A';
                maze[enemyX13][enemyY13] = 'A';
                maze[enemyX13][enemyY13 - 1] = ' ';
                gotoxy(enemyY13 - 1, enemyX13);
                cout << ' ';
            }
        }
        else if (maze[enemyX13][enemyY13 + 1] == '#')
        {
            dir13 = "Right";
        }
    }
    if (dir13 == "Right")
    {
        if (maze[enemyX13][enemyY13 - 1] != 'w')
        {
            if (maze[enemyX13][enemyY13 - 1] == ' ' || maze[enemyX13][enemyY13 - 1] == 'C')
            {
                enemyY13--;
                gotoxy(enemyY13, enemyX13);
                cout << 'A';
                maze[enemyX13][enemyY13] = 'A';
                maze[enemyX13][enemyY13 + 1] = ' ';
                gotoxy(enemyY13 + 1, enemyX13);
                cout << ' ';
            }
        }
        else if (maze[enemyX13][enemyY13 - 1] == 'w')
        {
            dir13 = "Left";
        }
    }
}
void movedanemy14()
{
    if (dir14 == "Left")
    {
        if (maze[enemyX14][enemyY14 + 1] != '|')
        {
            if (maze[enemyX14][enemyY14 + 1] == ' ' || maze[enemyX14][enemyY14 + 1] == 'C')
            {
                enemyY14++;
                gotoxy(enemyY14, enemyX14);
                cout << 'A';
                maze[enemyX14][enemyY14] = 'A';
                maze[enemyX14][enemyY14 - 1] = ' ';
                gotoxy(enemyY14 - 1, enemyX14);
                cout << ' ';
            }
        }
        else if (maze[enemyX14][enemyY14 + 1] == '|')
        {
            dir14 = "Right";
        }
    }
    if (dir14 == "Right")
    {
        if (maze[enemyX14][enemyY14 - 1] != '#')
        {
            if (maze[enemyX14][enemyY14 - 1] == ' ' || maze[enemyX14][enemyY14 - 1] == 'C')
            {
                enemyY14--;
                gotoxy(enemyY14, enemyX14);
                cout << 'A';
                maze[enemyX14][enemyY14] = 'A';
                maze[enemyX14][enemyY14 + 1] = ' ';
                gotoxy(enemyY14 + 1, enemyX14);
                cout << ' ';
            }
        }
        else if (maze[enemyX14][enemyY14 - 1] == '#')
        {
            dir14 = "Left";
        }
    }
}
void movedanemy15()
{
    if (dir15 == "Left")
    {
        if (maze[enemyX15][enemyY15 + 1] != '#')
        {
            if (maze[enemyX15][enemyY15 + 1] == ' ' || maze[enemyX15][enemyY15 + 1] == 'C')
            {
                enemyY15++;
                gotoxy(enemyY15, enemyX15);
                cout << 'J';
                maze[enemyX15][enemyY15] = 'J';
                maze[enemyX15][enemyY15 - 1] = ' ';
                gotoxy(enemyY15 - 1, enemyX15);
                cout << ' ';
            }
        }
        else if (maze[enemyX15][enemyY15 + 1] == '#')
        {
            dir15 = "Right";
        }
    }
    if (dir15 == "Right")
    {
        if (maze[enemyX15][enemyY15 - 1] != '|')
        {
            if (maze[enemyX15][enemyY15 - 1] == ' ' || maze[enemyX15][enemyY15 - 1] == 'C')
            {
                enemyY15--;
                gotoxy(enemyY15, enemyX15);
                cout << 'J';
                maze[enemyX15][enemyY15] = 'J';
                maze[enemyX15][enemyY15 + 1] = ' ';
                gotoxy(enemyY15 + 1, enemyX15);
                cout << ' ';
            }
        }
        else if (maze[enemyX15][enemyY15 - 1] == 'J')
        {
            dir15 = "Left";
        }
    }
}
void movedanemy16()
{
    if (dir16 == "Left")
    {
        if (maze[enemyX16][enemyY16 + 1] != '|')
        {
            if (maze[enemyX16][enemyY16 + 1] == ' ' || maze[enemyX16][enemyY16 + 1] == 'C')
            {
                enemyY16++;
                gotoxy(enemyY16, enemyX16);
                cout << 'A';
                maze[enemyX16][enemyY16] = 'A';
                maze[enemyX16][enemyY16 - 1] = ' ';
                gotoxy(enemyY16 - 1, enemyX16);
                cout << ' ';
            }
        }
        else if (maze[enemyX16][enemyY16 + 1] == '|')
        {
            dir16 = "Right";
        }
    }
    if (dir16 == "Right")
    {
        if (maze[enemyX16][enemyY16 - 1] != '#')
        {
            if (maze[enemyX16][enemyY16 - 1] == ' ' || maze[enemyX16][enemyY16 - 1] == 'C')
            {
                enemyY16--;
                gotoxy(enemyY16, enemyX16);
                cout << 'A';
                maze[enemyX16][enemyY16] = 'A';
                maze[enemyX16][enemyY16 + 1] = ' ';
                gotoxy(enemyY16 + 1, enemyX16);
                cout << ' ';
            }
        }
        else if (maze[enemyX16][enemyY16 - 1] == '#')
        {
            dir16 = "Left";
        }
    }
}
void movedanemy17()
{
    if (dir17 == "Left")
    {
        if (maze[enemyX17][enemyY17 + 1] != '#')
        {
            if (maze[enemyX17][enemyY17 + 1] == ' ' || maze[enemyX17][enemyY17 + 1] == 'C')
            {
                enemyY17++;
                gotoxy(enemyY17, enemyX17);
                cout << 'A';
                maze[enemyX17][enemyY17] = 'A';
                maze[enemyX17][enemyY17 - 1] = ' ';
                gotoxy(enemyY17 - 1, enemyX17);
                cout << ' ';
            }
        }
        else if (maze[enemyX17][enemyY17 + 1] == '#')
        {
            dir17 = "Right";
        }
    }
    if (dir17 == "Right")
    {
        if (maze[enemyX17][enemyY17 - 1] != '-')
        {
            if (maze[enemyX17][enemyY17 - 1] == ' ' || maze[enemyX17][enemyY17 - 1] == 'C')
            {
                enemyY17--;
                gotoxy(enemyY17, enemyX17);
                cout << 'A';
                maze[enemyX17][enemyY17] = 'A';
                maze[enemyX17][enemyY17 + 1] = ' ';
                gotoxy(enemyY17 + 1, enemyX17);
                cout << ' ';
            }
        }
        else if (maze[enemyX17][enemyY17 - 1] == '-')
        {
            dir17 = "Left";
        }
    }
}

void movedanemy18()
{
    if (dir18 == "Left")
    {
        if (maze[enemyX18][enemyY18 + 1] != '_')
        {
            if (maze[enemyX18][enemyY18 + 1] == ' ' || maze[enemyX18][enemyY18 + 1] == 'C')
            {
                enemyY18++;
                gotoxy(enemyY18, enemyX18);
                cout << 'A';
                maze[enemyX18][enemyY18] = 'A';
                maze[enemyX18][enemyY18 - 1] = ' ';
                gotoxy(enemyY18 - 1, enemyX18);
                cout << ' ';
            }
        }
        else if (maze[enemyX18][enemyY18 + 1] == '_')
        {
            dir18 = "Right";
        }
    }
    if (dir18 == "Right")
    {
        if (maze[enemyX18][enemyY18 - 1] != '#')
        {
            if (maze[enemyX18][enemyY18 - 1] == ' ' || maze[enemyX18][enemyY18 - 1] == 'C')
            {
                enemyY18--;
                gotoxy(enemyY18, enemyX18);
                cout << 'A';
                maze[enemyX18][enemyY18] = 'A';
                maze[enemyX18][enemyY18 + 1] = ' ';
                gotoxy(enemyY18 + 1, enemyX18);
                cout << ' ';
            }
        }
        else if (maze[enemyX18][enemyY18 - 1] == '#')
        {
            dir18 = "Left";
        }
    }
}
void movedanemy19()
{
    if (dir19 == "Left")
    {
        if (maze[enemyX19][enemyY19 + 1] != '|')
        {
            if (maze[enemyX19][enemyY19 + 1] == ' ' || maze[enemyX19][enemyY19 + 1] == 'C')
            {
                enemyY19++;
                gotoxy(enemyY19, enemyX19);
                cout << 'A';
                maze[enemyX19][enemyY19] = 'A';
                maze[enemyX19][enemyY19 - 1] = ' ';
                gotoxy(enemyY19 - 1, enemyX19);
                cout << ' ';
            }
        }
        else if (maze[enemyX19][enemyY19 + 1] == '|')
        {
            dir19 = "Right";
        }
    }
    if (dir19 == "Right")
    {
        if (maze[enemyX19][enemyY19 - 1] != '#')
        {
            if (maze[enemyX19][enemyY19 - 1] == ' ' || maze[enemyX19][enemyY19 - 1] == 'C')
            {
                enemyY19--;
                gotoxy(enemyY19, enemyX19);
                cout << 'A';
                maze[enemyX19][enemyY19] = 'A';
                maze[enemyX19][enemyY19 + 1] = ' ';
                gotoxy(enemyY19 + 1, enemyX19);
                cout << ' ';
            }
        }
        else if (maze[enemyX19][enemyY19 - 1] == '#')
        {
            dir19 = "Left";
        }
    }
}
void movedanemy20()
{
    if (dir20 == "Left")
    {
        if (maze[enemyX20][enemyY20 + 1] != '#')
        {
            if (maze[enemyX20][enemyY20 + 1] == ' ' || maze[enemyX20][enemyY20 + 1] == 'C')
            {
                enemyY20++;
                gotoxy(enemyY20, enemyX20);
                cout << 'A';
                maze[enemyX20][enemyY20] = 'A';
                maze[enemyX20][enemyY20 - 1] = ' ';
                gotoxy(enemyY20 - 1, enemyX20);
                cout << ' ';
            }
        }
        else if (maze[enemyX20][enemyY20 + 1] == '#')
        {
            dir20 = "Right";
        }
    }
    if (dir20 == "Right")
    {
        if (maze[enemyX20][enemyY20 - 1] != '#')
        {
            if (maze[enemyX20][enemyY20 - 1] == ' ' || maze[enemyX20][enemyY20 - 1] == 'C')
            {
                enemyY20--;
                gotoxy(enemyY20, enemyX20);
                cout << 'A';
                maze[enemyX20][enemyY20] = 'A';
                maze[enemyX20][enemyY20 + 1] = ' ';
                gotoxy(enemyY20 + 1, enemyX20);
                cout << ' ';
            }
        }
        else if (maze[enemyX20][enemyY20 - 1] == '#')
        {
            dir20 = "Left";
        }
    }
}
void movedaveRight()
{
    if (maze[davex][davey + 1] == ' ' || maze[davex][davey + 1] == '+')
    {
        maze[davex][davey] = ' ';
        if (maze[davex][davey + 1] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davey = davey + 1;
        gotoxy(davey, davex);
        maze[davex][davey] = 'C';
        cout << 'C';
    }
}
void movedaveLeft()
{
    if (maze[davex][davey - 1] == ' ' || maze[davex][davey - 1] == '+')
    {
        maze[davex][davey] = ' ';

        if (maze[davex][davey - 1] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davey = davey - 1;
        gotoxy(davey, davex);
        maze[davex][davey] = 'C';
        cout << 'C';
    }
}

void movedaveUp()
{
    if (maze[davex - 1][davey] == ' ' || maze[davex - 1][davey] == '+')
    {

        maze[davex][davey] = ' ';
        if (maze[davex - 1][davey] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davex = davex - 1;
        gotoxy(davey, davex);
        maze[davex][davey] = 'C';

        cout << 'C';
    }
}
void movedaveDown()
{
    if (maze[davex + 1][davey] == ' ' || maze[davex + 1][davey] == '+')
    {
        maze[davex][davey] = ' ';
        if (maze[davex + 1][davey] == '+')
        {
            score++;
        }
        gotoxy(davey, davex);
        cout << ' ';

        davex = davex + 1;
        gotoxy(davey, davex);
        maze[davex][davey] = 'C';

        cout << 'C';
    }
}

void gameover()
{
    if (maze[davex][davey] == maze[enemyX1][enemyY1] || maze[davex][davey] == maze[enemyX2][enemyY2] || maze[davex][davey] == maze[enemyX3][enemyY3] || maze[davex][davey] == maze[enemyX4][enemyY4] || maze[davex][davey] == maze[enemyX5][enemyY5])
    {

        gamerunning = false;
    }
    if (maze[davex][davey] == maze[enemyX6][enemyY6] || maze[davex][davey] == maze[enemyX10][enemyY10] || maze[davex][davey] == maze[enemyX7][enemyY7] || maze[davex][davey] == maze[enemyX8][enemyY8] || maze[davex][davey] == maze[enemyX9][enemyY9])
    {
        gamerunning = false;
    }
    if (maze[davex][davey] == maze[enemyX11][enemyY11] || maze[davex][davey] == maze[enemyX12][enemyY12] || maze[davex][davey] == maze[enemyX13][enemyY13] || maze[davex][davey] == maze[enemyX14][enemyY14] || maze[davex][davey] == maze[enemyX15][enemyY15])
    {
        gamerunning = false;
    }
    if (maze[davex][davey] == maze[enemyX16][enemyY16] || maze[davex][davey] == maze[enemyX17][enemyY17] || maze[davex][davey] == maze[enemyX18][enemyY18] || maze[davex][davey] == maze[enemyX19][enemyY19] || maze[davex][davey] == maze[enemyX20][enemyY20])
    {
        gamerunning = false;
    }
}
void initializer()
{

    davex = 8; // x position of character
    davey = 4; // y position of character
    gamerunning = true;
    maze[davex][davey] = 'C';
} // initializing all variables and data structure

#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

int lives = 3; // for lives
int score = 0; // for score

// my car in 2D array
char car[6][7] = {{' ', ' ', ' ', '#', ' ', ' ', ' '},
                  {' ', ' ', '#', '#', '#', ' ', ' '},
                  {'#', '#', '#', '#', '#', '#', '#'},
                  {' ', '#', '#', '#', '#', '#', ' '},
                  {'#', '#', '#', '#', '#', '#', '#'},
                  {' ', ' ', '#', '#', '#', ' ', ' '}};

int car_x = 27; // my car X-axis
int car_y = 50; // my car Y-axis

int enemyX[7];    // enemy cars X-axis
int enemyY[7];    // enemy cars Y-axis
int enemyFlag[7]; // enemy flags used in program for on / off enemy car

int const row = 209, col = 61; // track 2D array row and columns
char track[row][col];          // array for game track

void head();                                // function for main head of game
char mainMenu();                            // function for main menu
void carDesign();                           // function for the car which shown in main menu
void playGame();                            // function for actual playing game
void resetEverything();                     // function for reseting all necessary varaibles before starting the game
void playingGameBox();                      // function for printing the game box along with track
void gameName(int x, int y);                // function for displaying game name name in game box
void items();                               // function for displaying valuse of score and lives
void instructions();                        // function for printing instructions of the control of the game
void gameOverMessage(int x, int y);         // finction lose its all three lives than the game over message appears
void readTrack();                           // function for reading track from file
bool gameover();                            // function for checking the collisions of my car anf enemy cars
void rep(int m, int x, int y, int c);       // function for printing space behind the car
void move_car(int car_x, int car_y, int m); // function for moving my car
void gotoxy(int x, int y);                  // function for displaying some thing on specific location
void movingTrack(int x);                    // functio nfor moving track on screen
void GenerateEnemy();                       // function for generating randomly enemy cars
int GenRandomNu();                          // function for generating random numbers from 0 to 6
void drawEnemy(int ind);                    // function for displayong enemy car
void increaseIndex();                       // function for changing the index of enemy car for moving
void resetingIndex();                       // if car reach specific height  than reset the enemy car index
void erase(int x, int y);                   // if enemy car reach the specific loctaion than remove that car from screen

main()
{
    readTrack();

    char op;
    while (true)
    {
        system("cls");
        op = mainMenu();

        if (op == '1')
        {
            playGame();
        }
        else if (op == '2')
        {
            // help
        }
        else if (op == '3')
        {
            break;
        }
    }
}

void playGame()
{
    system("cls");
    char m = 0;
    int x;
    int a = row - 61;
    int loop = 0, killStop = 0, b = 0;

    resetEverything();
    playingGameBox();
    gameName(73, 3);

    instructions();

    while (true)
    {

        gotoxy(70, 50);
        items();

        if (lives == 0)
        {
            gameOverMessage(1, 30);
            break;
        }

        x = a;

        movingTrack(x);

        a = a - 1;
        if (a == 0)
        {
            a = row - 61;
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            if (car_x > 1)
            {
                car_x--;
                m = 1;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            if (car_x < 52)
            {
                car_x++;
                m = 2;
            }
        }
        if (GetAsyncKeyState(VK_UP))
        {
            if (car_y > 0)
            {
                car_y--;
                m = 3;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            if (car_y < 53)
            {
                car_y++;
                m = 4;
            }
        }
        move_car(car_x, car_y, m);
        if (GetAsyncKeyState(VK_ESCAPE))
        {

            break;
        }
        if (loop == 5)
        {
            GenerateEnemy();
            loop = 0;
        }
        loop++;
        drawEnemy(0);
        drawEnemy(1);
        drawEnemy(2);
        drawEnemy(3);
        drawEnemy(4);
        drawEnemy(5);
        drawEnemy(6);

        if (killStop == 0)
        {
            b = 0;
            if (gameover())
            {
                killStop = 25;
                b = 1;
            }
        }
        if (b == 1)
        {
            killStop--;
        }

        increaseIndex();
        resetingIndex();
        Sleep(50);
    }
    cin.ignore();
}

void resetEverything()
{
    lives = 3;
    score = 0;
    car_x = 27;
    car_y = 50;
    enemyFlag[0] = enemyFlag[1] = enemyFlag[2] = enemyFlag[3] = enemyFlag[4] = enemyFlag[5] = enemyFlag[6] = 0;
}

void readTrack()
{
    string line;
    fstream file;

    file.open("GameTrack.txt", ios::in);

    for (int x = 0; x < row; x++)
    {
        getline(file, line);

        for (int y = 0; y < col; y++)
        {
            track[x][y] = line[y];
        }
    }

    file.close();
}

void movingTrack(int x)
{

    for (int n = 0; n < 59; n++)
    {
        gotoxy(0, n);
        cout << track[x];

        x = x + 1;
    }
}

void move_car(int car_x, int car_y, int m)
{
    int n = car_y;
    rep(m, car_x, car_y, 1);

    for (int i = 0; i < 6; i++)
    {

        gotoxy(car_x, n);
        for (int y = 0; y < 7; y++)
        {
            cout << car[i][y];
        }
        n++;
    }

    rep(m, car_x, car_y, 0);
}

void rep(int m, int x, int y, int c)
{
    if (m == 1)
    {
        x = x + 7;
        for (int t = 0; t < 6; t++)
        {
            gotoxy(x, y + t);
            cout << " ";
        }
    }
    else if (m == 2 && c == 1)
    {
        x--;
        for (int t = 0; t < 6; t++)
        {
            gotoxy(x, y + t);
            cout << " ";
        }
    }
    else if (m == 3)
    {
        y = y + 6;
        gotoxy(x, y);
        cout << "      ";
    }
    else if (m == 4)
    {
        y--;
        gotoxy(x, y);
        cout << "      ";
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

int GenRandomNu()
{
    return rand() % (7);
}

void GenerateEnemy()
{
    int random;
    random = GenRandomNu();

    if (random == 0 && enemyFlag[0] == 0)
    {
        enemyX[0] = 4;
        enemyY[0] = 0;
        enemyFlag[0] = 1;
    }
    else if (random == 1 && enemyFlag[1] == 0)
    {
        enemyX[1] = 19;
        enemyY[1] = 0;
        enemyFlag[1] = 1;
    }
    else if (random == 2 && enemyFlag[2] == 0)
    {
        enemyX[2] = 34;
        enemyY[2] = 0;
        enemyFlag[2] = 1;
    }
    else if (random == 3 && enemyFlag[3] == 0)
    {
        enemyX[3] = 49;
        enemyY[3] = 0;
        enemyFlag[3] = 1;
    }
    else if (random == 4 && enemyFlag[4] == 0)
    {
        enemyX[4] = 12;
        enemyY[4] = 0;
        enemyFlag[4] = 1;
    }
    else if (random == 5 && enemyFlag[5] == 0)
    {
        enemyX[5] = 27;
        enemyY[5] = 0;
        enemyFlag[5] = 1;
    }
    else if (random == 6 && enemyFlag[6] == 0)
    {
        enemyX[6] = 42;
        enemyY[6] = 0;
        enemyFlag[6] = 1;
    }
}

void drawEnemy(int ind)
{
    if (enemyFlag[ind] == 1)
    {
        if (enemyY[ind] != 0)
        {
            gotoxy(enemyX[ind], enemyY[ind] - 1);
            cout << "       ";
        }
        gotoxy(enemyX[ind], enemyY[ind]);
        cout << "*******";
        gotoxy(enemyX[ind], enemyY[ind] + 1);
        cout << " ***** ";
        gotoxy(enemyX[ind], enemyY[ind] + 2);
        cout << "*******";
        gotoxy(enemyX[ind], enemyY[ind] + 3);
        cout << "  ***  ";
        gotoxy(enemyX[ind], enemyY[ind] + 4);
        cout << "   *   ";
    }
}

void increaseIndex()
{
    for (int idx = 0; idx < 7; idx++)
    {
        if (enemyFlag[idx] == 1)
        {
            enemyY[idx] = enemyY[idx] + 1;
        }
    }
}

void resetingIndex()
{
    for (int idx = 0; idx < 7; idx++)
    {
        if (enemyY[idx] == 54)
        {
            erase(enemyX[idx], enemyY[idx]);
            enemyY[idx] = 0;
            enemyFlag[idx] = 0;
            score++;
        }
    }
}

void erase(int x, int y)
{
    gotoxy(x, y - 1);
    cout << "       ";
    gotoxy(x, y);
    cout << "       ";
    gotoxy(x, y + 1);
    cout << "       ";
    gotoxy(x, y + 2);
    cout << "       ";
    gotoxy(x, y + 3);
    cout << "       ";
    gotoxy(x, y + 4);
    cout << "       ";
}

bool gameover()
{
    bool flag = false;
    for (int i = 0; i < 7; i++)
    {

        for (int x = 0; x < 7; x++)
        {
            if ((car_x + x >= enemyX[i] && car_x + x <= enemyX[i] + 6) && (car_y >= enemyY[i] && car_y <= enemyY[i] + 3))
            {
                flag = true;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            if (car_x == enemyX[i] + 6 && car_y + 2 == enemyY[i] + j)
            {
                flag = true;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            if (car_x == enemyX[i] + 6 && car_y + 4 == enemyY[i] + j)
            {
                flag = true;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            if (car_x + 6 == enemyX[i] && car_y + 2 == enemyY[i] + j)
            {
                flag = true;
            }
        }

        for (int j = 0; j < 3; j++)
        {
            if (car_x + 6 == enemyX[i] && car_y + 4 == enemyY[i] + j)
            {
                flag = true;
            }
        }
    }

    if (flag)
    {
        lives--;
        car_x = 27;
        car_y = 50;
        return true;
    }
    return false;
}

void head()
{
    cout << "        ----------------------------------------------------------------------------------------------------------------------  " << endl;
    cout << "       [                               _______    _______    _____            _______     _______     ______                  ] " << endl;
    cout << "       [                 |\\       |   |          |          |      \\         |           /       \\   |      \\                 ] " << endl;
    cout << "       [                 | \\      |   |          |          |       \\        |          |         |  |       |                ] " << endl;
    cout << "       [                 |  \\     |   |          |          |        \\       |          |         |  |       |                ] " << endl;
    cout << "       [                 |   \\    |   |_______   |_______   |        |       |_______   |         |  |______/                 ] " << endl;
    cout << "       [                 |    \\   |   |          |          |        |       |          |         |  |\\                       ] " << endl;
    cout << "       [                 |     \\  |   |          |          |        /       |          |         |  |  \\                     ] " << endl;
    cout << "       [                 |      \\ |   |          |          |       /        |          |         |  |    \\                   ] " << endl;
    cout << "       [                 |       \\|   |_______   |_______   |_____ /         |           \\_______/   |      \\                 ] " << endl;
    cout << "       [                                                                                                                      ] " << endl;
    cout << "       [                                                                                                                      ] " << endl;
    cout << "       [           ______     ______     _______    _______    _____                                                          ] " << endl;
    cout << "       [          /      \\   |      \\   |          |          |      \\                                                        ] " << endl;
    cout << "       [         |           |       |  |          |          |       \\                                                       ] " << endl;
    cout << "       [         |           |       |  |          |          |        \\                                                      ] " << endl;
    cout << "       [          \\______    |______/   |_______   |_______   |        |                                                      ] " << endl;
    cout << "       [                 \\   |          |          |          |        |     /    ___  ___   __    ___   ___          ___  \\  ] " << endl;
    cout << "       [                  |  |          |          |          |        /    |    |    |   | |  \\  |   | |   | |\\  /| |      | ] " << endl;
    cout << "       [                  |  |          |          |          |       /     |    |    |___| |__/  |  _  |___| | \\/ | |---   | ] " << endl;
    cout << "       [          \\______/   |          |_______   |_______   |_____ /       \\   |___ |   | |  \\  |_| | |   | |    | |___  /  ] " << endl;
    cout << "       [                                                                                                                      ] " << endl;
    cout << "       [----------------------------------------------------------------------------------------------------------------------]  " << endl;

    for (int i = 0; i < 30; i++)
    {
        gotoxy(7, 23 + i);
        cout << "[";
        gotoxy(126, 23 + i);
        cout << "]";
    }
    cout << endl;
    cout << "       [----------------------------------------------------------------------------------------------------------------------]  " << endl;
}

char mainMenu()
{
    char option;
    head();
    carDesign();

    gotoxy(30, 25);
    cout << " SELECT ANY ONE OPTION >>>";

    gotoxy(30, 30);
    cout << " 1. PLAY GAME  :) ";
    gotoxy(30, 31);
    cout << " 2. HELP ! ";
    gotoxy(30, 32);
    cout << " 3. EXIT ";

    gotoxy(30, 34);
    cout << " YOUR OPTION...: ";
    option = getche();
    return option;
}

void carDesign()
{
    gotoxy(25, 38);
    cout << "                         __________________________        " << endl;
    gotoxy(25, 38 + 1);
    cout << "                       /        \\          \\        \\      " << endl;
    gotoxy(25, 38 + 2);
    cout << "                     /          |           |        \\     " << endl;
    gotoxy(25, 38 + 3);
    cout << "            _______/____________|___________|_________\\    " << endl;
    gotoxy(25, 38 + 4);
    cout << "          /_|                _  |         _ |        _ \\   " << endl;
    gotoxy(25, 38 + 5);
    cout << "         |                      |           |       |_| |  " << endl;
    gotoxy(25, 38 + 6);
    cout << "         |        ____          |           |   ____    |  " << endl;
    gotoxy(25, 38 + 7);
    cout << "         |_______/____\\_________|___________|__/____\\___|  " << endl;
    gotoxy(25, 38 + 8);
    cout << "                |      |                      |      |     " << endl;
    gotoxy(25, 38 + 9);
    cout << "                 \\____/                        \\____/      " << endl;
}

void gameName(int x, int y)
{
    gotoxy(x, y);
    cout << "         ___  ___  __      ___   __    ___  ";
    gotoxy(x, y + 1);
    cout << " |\\   | |    |    |  \\    |     /  \\  |   \\ ";
    gotoxy(x, y + 2);
    cout << " | \\  | |___ |___ |   |   |___ |    | |___/ ";
    gotoxy(x, y + 3);
    cout << " |  \\ | |    |    |   |   |    |    | | \\   ";
    gotoxy(x, y + 4);
    cout << " |   \\| |___ |___ |__/    |     \\__/  |  \\  ";
    gotoxy(x, y + 5);
    cout << "";
    gotoxy(x, y + 6);
    cout << "         ___   ___   ___  ___  __           ";
    gotoxy(x, y + 7);
    cout << "        |   | |   | |    |    |  \\          ";
    gotoxy(x, y + 8);
    cout << "        |___  |___| |___ |___ |   |         ";
    gotoxy(x, y + 9);
    cout << "            | |     |    |    |   |         ";
    gotoxy(x, y + 10);
    cout << "        |___| |     |___ |___ |__/     GAME     ";
}

void items()
{
    gotoxy(70, 20);
    cout << " SCORE : " << score;
    gotoxy(70, 22);
    cout << " LIVES : " << lives;
}

void instructions()
{
    gotoxy(82, 50);
    cout << " CONTROLS OF CAR ";
    gotoxy(77, 52);
    cout << " FOR MOVING LEFT  : LEFT ARROW KEY ";
    gotoxy(77, 53);
    cout << " FOR MOVING RIGHT : RIGHT ARROW KEY ";
    gotoxy(77, 54);
    cout << " FOR MOVING UP    : UP ARROW KEY ";
    gotoxy(77, 55);
    cout << " FOR MOVING DOWN  : DOWN ARROW KEY ";
}

void playingGameBox()
{

    for (int x = 0; x < 126 - 61; x++)
    {

        if (x < (126 - 61) / 2)
        {
            gotoxy(61 + x, 0);
            cout << "[";
            gotoxy(61 + x, 16);
            cout << "[";
            gotoxy(61 + x, 48);
            cout << "[";
            gotoxy(61 + x, 58);
            cout << "[";
        }
        else
        {
            gotoxy(61 + x, 0);
            cout << "]";
            gotoxy(61 + x, 16);
            cout << "]";
            gotoxy(61 + x, 48);
            cout << "]";
            gotoxy(61 + x, 58);
            cout << "]";
        }
    }

    for (int i = 0; i < 59; i++)
    {
        gotoxy(61, i);
        cout << "[[[";
        gotoxy(126, i);
        cout << "]]]";
    }
}

void gameOverMessage(int x, int y)
{
    gotoxy(x, y - 1);
    cout << "                                                                                                                                          " << endl;
    gotoxy(x, y);
    cout << "           ########     ############    ##         ##    ############        ############    #             #    ############    ########  " << endl;
    gotoxy(x, y + 1);
    cout << "         #         #    #          #    # #       # #    #                   #          #    #             #    #               #       # " << endl;
    gotoxy(x, y + 2);
    cout << "        #          #    #          #    #  #     #  #    #                   #          #    #             #    #               #        #" << endl;
    gotoxy(x, y + 3);
    cout << "       #                #          #    #   #   #   #    #                   #          #    #             #    #               #        #" << endl;
    gotoxy(x, y + 4);
    cout << "      #                 #          #    #    # #    #    #                   #          #     #           #     #               #       # " << endl;
    gotoxy(x, y + 5);
    cout << "      #                 ############    #     #     #    ############        #          #      #         #      ############    ########  " << endl;
    gotoxy(x, y + 6);
    cout << "      #                 #          #    #           #    #                   #          #       #       #       #               ##        " << endl;
    gotoxy(x, y + 7);
    cout << "       #                #          #    #           #    #                   #          #        #     #        #               #  #      " << endl;
    gotoxy(x, y + 8);
    cout << "        #      ####     #          #    #           #    #                   #          #         #   #         #               #    #    " << endl;
    gotoxy(x, y + 9);
    cout << "         #     #  #     #          #    #           #    #                   #          #          # #          #               #      #  " << endl;
    gotoxy(x, y + 10);
    cout << "          ######  #     #          #    #           #    ############        ############           #           ############    #       # " << endl;
    gotoxy(x, y + 11);
    cout << "                                                                                                                                          " << endl;
}
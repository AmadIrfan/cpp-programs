#include <iostream> 
#include <fstream> 
#include <conio.h> 
#include <windows.h> 
#include <iomanip> 
#include <cmath>
using namespace std; 
int lives = 3;       //Player Lives 
bool gameRunning = true; 
string previous="right"; 
int stage0[58][162];    //Integer Maze 
char stage[58][162];    //Character Maze 

int playerX = 4;    //Player X-coordinate 
int playerY = 2;    //Player Y-coordinate 
int playerr [3][3]; 
char player [3][3];

//Ghost Health //Ghost X-coordinate //Ghost Y-coordinate
int ghostlife=180; 
int ghostX = 50; //Ghost X-coordinate 
int ghostY = 2; //Ghost Y-coordinate 
int ghost[7][14]; 
char ghostbig[7][14]; 
int enem[4][7]; 
char enemy [4][7]; 
int enemy_life2=100; 
int enemyX2 = 11; //Enemy2 X-coordinate 
int enemyY2 = 144;  //Enemy2 y-coordinate 
//Enemy2 Health
//Enemy2 X-coordinate //Enemy 2 Y-coordinate
int enemy_life1 = 100;
int enemyX1 = 19;       // Enemy1 X-coordinate
int enemyY1 = 3;        // Enemy1 X-coordinate
int enemy_life3=100;    //Enemy3 Health 
int enemyX3 = 35;   //Enemy3 X-coordinate 
int enemyY3 = 6;    //Enemy3 Y-coordinate
int enemy_life4=100 ;//Enemy 4 Health 
int enemyX4=27; //Enemy4 X-coordinate 
int enemyY4=40; //Enemy 4 Y-coordinate
int score = 0; //Score Counter 
    //Function to load data
void load_data(); 
void gotoxy(int x, int y); 
void print_stage(); 
void print_enemy(); 
void print_enemy2(); 
void print_enemy3() ; 
void print_enemy4(); 
void print_player(); 
void move_enemy1_right(); 
void move_enemy1_left(); 
void move_enemy2_right(); 
void move_enemy_left(); 
void move_enemy3_right(); 
void move_enemy3_left();

void move_enemy4_right(); 
void move_enemy4_left(); 
void move_enemy1(); 
void move_enemy2(); 
void move_enemy3(); 
void move_enemy4(); 
string dir1 = "right"; 
string dir2 = "left"; 
string dir3 = "left"; 
string dir4 = "right"; 
string dirg = "right"; 

void move_player_up(); 
void move_player_left(); 
void move_player_right(); 
void print_ghost(); 
void move_ghost_left(); 
void move_ghost_left(); 
void move_ghost(); 
bool Gravity=true; 
void gravity();
//Function for gravity 
bool up=false; 
int count=0; 
bool gun = false;   // gun 
void fire(); 
bool key = false;   //key
void initializer(); 
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

main()          //main Function
{
    load_data();
    system("Color 70");
    while (lives!= 0)
    {
        system("cls"); 
        print_stage(); 
        initializer(); 
        gameRunning - true; 
        while (gameRunning)
        {
            gotoxy(170, 2);
            cout << "Score: "<< score; gotoxy(170,3); 
            cout << "Enemy1 Health: " << enemy_life2; 
            gotoxy(170, 4); cout << "Enemy2 Health: " << enemy_life1; 
            gotoxy(170,5); cout << "Enemy3 Health: " << enemy_life4; 
            gotoxy(170,6); cout << "Enemy 4 Health: " << enemy_life3; 
            gotoxy(170,7); cout << "Ghost Health: " << ghostlife; 
            gotoxy(178,9); cout << "Rules: "; 
            gotoxy(170, 10); 
            cout << "_Use Cursor keys to move"; 
            gotoxy(170, 11); 
            cout << "_Use Left Shift to fire"; 
            gotoxy(170, 12);
            cout << "_You Have to collect gun to fire"; 
            gotoxy(170, 13); cout << "_You win if you go through the door";
            gotoxy(170, 14); cout << " You Should Collect key for door"; 
            gotoxy(170, 15); cout << "_You Lose if you hit the enemies or ghost"; 
            gotoxy(170,16); cout << "And if you stand above the fire"; 
            gotoxy(170,20); cout << "________________________"; 
            gotoxy(170, 22); cout << "Play Distract Journey";
            gotoxy(170, 24); cout << "_______________________" ;
            gotoxy(170,25);
            cout << "Players Lives";
            for (int i=0; i<lives; i++)
            {
                char x = 3; 
                cout << x <<" ";
            }
            gotoxy(170,26);
            if(key == true) cout << "Key Collected";
            gotoxy(170,27);
            if(gun == true) cout << "Gun Collected";
            gotoxy(170,33);
            cout << "Developer: Syed Hashir";
            gotoxy(170,32);
            cout << "Game Version: 1.1";
            gravity(); 
            move_enemy1(); 
            move_enemy2(); 
            move_enemy3(); 
            move_enemy4(); 
            move_ghost(); // display();
            if (GetAsyncKeyState(VK_RIGHT))
            {
                move_player_right(); 
                previous="right";
            }

            if (GetAsyncKeyState(VK_LEFT))
            {
                move_player_left(); 
                previous = "left";
            }

            if (GetAsyncKeyState(VK_LSHIFT))
            {
                Sleep(10); 
                fire();
            }
                
            if(up == true)
            {
                move_player_up(); 
                Gravity=false; 
                count++;
            }
            else
            {
                if(GetAsyncKeyState(VK_UP))    up=true;
            }
            if (GetAsyncKeyState(VK_ESCAPE))
            {
                break;
            }
            if (count==4)
            {
                up=false;
                count=0;
                Gravity=true;
            }
        }
        lives--; 
        gotoxy(170,26);
        cout << "GameOver";
        gotoxy(170, 27);
        cout << "Press any key to continue";
        getch();
    }
}           //end of main
void load_data() 
{
    fstream file;               //loading maze
    file.open("stage.txt", ios::in);
    for (int i = 0; i < 58; i++)
    {
        for (int j = 0; j < 162; j++)
        {
            file >> stage0[i][j]; 
            char y = stage0[i][j]; 
            stage[i][j] = y;
        }
        if (file.eof()) break;
    }
    file.close();


    file.open("player.txt", ios::in);       //loading player
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            file >> playerr[i][j]; 
            char y = playerr[i][j];
            player[i][j] = y;
        }
        if (file.eof())   break;
    }
    file.close();

    file.open("ghost.txt", ios::in);            //loading ghost
    for (int i = 0; i <7; i++)
    {
        for (int j = 0; j < 14; j++)
        {
            file >> ghost[i][j]; 
            char y = ghost[i][j]; 
            ghostbig[i][j] = y;
        }
        if (file.eof())   break;
    }
    file.close();


    file.open("enemy.txt", ios::in);            //loading enemy
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <7; j++)
        {
            file >> enem[i][j]; 
            char y = enem[i][j]; 
            enemy[i][j] = y;
        }
        if (file.eof())  break;
    }
    file.close(); 
}

void gotoxy(int x, int y)
{ 
    COORD coordinates; 
    coordinates.X = x; 
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates); 
} 
void print_stage()              //printing maze
{
    for (int i = 0; i < 58; i++)
    {
        for (int j = 0; j < 162; j++)
        {
            cout << stage[i][j];
        }
        cout << endl;
    }
}
void print_enemy1()             //printing enemy1
{ 
    // SetConsoleTextAttribute(h,22);
    // SetConsoleTextAttribute(h,12);
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <7; j++)
        {
            gotoxy(enemyY1, enemyX1);
            cout << enemy[i][j]; 
            enemyY1++;
        }
        enemyY1 -= 7; 
        enemyX1++;
    }
    enemyX1 -= 4;
}
void print_enemy2()             //printing enemy2
{
    // SetConsoleTextAttribute(h,4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <7; j++)
        {
            gotoxy(enemyY2, enemyX2);
            cout << enemy[i][j];
            enemyY2++;
        }
        enemyY2 -= 7; 
        enemyX2++;
    }
    enemyX2 -= 4;
}

void print_player()             //printing player
{
    // SetConsoleTextAttribute(h,1);
    for (int i=0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gotoxy(playerY, playerX); 
            cout << player[i][j]; 
            playerY++;
        }
        playerY-= 3; 
        playerX++;
        
    }
    playerX-=3;
} 

void move_enemy1_right()          // moving enemy towards right
{
    int y = stage0[enemyX1][enemyY1 + 7];

    if (y != 219 && enemy_life1!=0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY1, enemyX1);
                cout << ' ' ; 
                enemyY1++;  
            }
            enemyY1 -= 7; 
            enemyX1++;
        }
        enemyX1 -= 4;
        enemyY1++; 
        gotoxy(enemyY1, enemyX1); 
        print_enemy1(); 
        gotoxy(enemyY1, enemyX1);
    }
    if((playerY-enemyY1<=5 && playerY-enemyY1>=2) && (enemyX1-playerX>=-1 && enemyX1-playerX<=2))
    {
        gameRunning = false;
    }
}

void move_enemy1_left()             // moving enemy towards left
{
    int y = stage0[enemyX1][enemyY1 - 1];
    if (y != 219 && enemy_life1!=0)
    {
        gotoxy(enemyY1, enemyX1);
        for (int i = 0; i <4; i++)
        {
            for (int j = 0; j <7; j++)
            {
                gotoxy(enemyY1, enemyX1); 
                cout << ' '; 
                enemyY1++;
            }
            enemyY1 -= 7; 
            enemyX1++;
        }

        enemyX1 -= 4;
        enemyY1--;
        gotoxy(enemyY1,enemyX1);
        print_enemy1();
        gotoxy(enemyY1, enemyX1);
    } 
    if((enemyY1-playerY<=2 && enemyY1-playerY>=0) && (enemyX1-playerX>=-1 && enemyX1-playerX<=2))
    {
        gameRunning = false;
    }

}

void move_enemy2_right()
{
    int y = stage0[enemyX2][enemyY2 + 7];
    if (y != 219 && enemy_life2!=0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j <7; j++)
            {
                gotoxy(enemyY2, enemyX2); 
                cout << ' '; 
                enemyY2++;
            }
            enemyY2 -= 7; 
            enemyX2++;
        }
        enemyX2 -= 4;
        enemyY2++;
        gotoxy(enemyY2, enemyX2);
        print_enemy2();
        gotoxy(enemyY2, enemyX2);
    }   
    if((playerY-enemyY2<=5 && playerY-enemyY2>=2) && (enemyX2-playerX>=-1 && enemyX2-playerX<-2))
    {
        gameRunning = false;
    } 
}

void move_enemy2_left()
{
    int x = stage0[enemyX2][enemyY2 - 1];
    if (x != 219 && enemy_life2!=0)
    {
        gotoxy(enemyY2, enemyX2);
        for (int i = 0; i <4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY2, enemyX2); 
                cout << ' '; 
                enemyY2++;
            }
            enemyY2 -= 7; 
            enemyX2++;
        }
        enemyX2 -= 4;
        enemyY2--;
        gotoxy(enemyY2, enemyX2);
        print_enemy2();
        gotoxy(enemyY2, enemyX2);
    }
    if((enemyY2-playerY<=2 && enemyY2-playerY>0) && (enemyX2-playerX>=-1 && enemyX2-playerX<=2))
    {
        gameRunning = false;
    }
}


void move_enemy1()
{
    if(enemy_life1==0 )
    {
        gotoxy(enemyY1, enemyX1);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY1, enemyX1); 
                cout << ' '; 
                enemyY1++;
            }
            enemyY1 -= 7; 
            enemyX1++;
        }
        enemyX1 -= 4;
    }
    else
    {
        if (dir1 == "right")    move_enemy1_right();
        if (dir1 == "left")     move_enemy1_left();
        if (stage0[enemyX1][enemyY1 - 1] == 219)    dir1= "right";
        if (stage0[enemyX1][enemyY1 + 7] == 219)    dir1= "left";
        if (stage0[enemyX1+2][enemyY1] == 169)      enemy_life1-=50;
        if (stage0[enemyX1+2][enemyY1] == 170)      enemy_life1-=50;
    }

}

void move_enemy2()
{
    if(enemy_life2==0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY2, enemyX2); 
                cout << ' '; 
                enemyY2++;
            }
            enemyY2 -= 7; 
            enemyX2++;
        }
        enemyX2 -= 4;
    }

    else
    {
        if (dir2 == "right")    move_enemy2_right();
        if (dir2 == "left")     move_enemy2_left();
        if (stage0[enemyX2][enemyY2 - 1] == 219)        dir2 = "right";
        if (stage0[enemyX2][enemyY2 + 7] == 219)        dir2 = "left";
        if (stage0[enemyX2+2][enemyY2] == 169)      enemy_life2-=50;
        if (stage0[enemyX2+2][enemyY2] == 170)      enemy_life2-=50;
    }
}

void print_enemy3()
{
    // SetConsoleTextAttribute(h,4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            gotoxy(enemyY3, enemyX3); 
            cout << enemy[i][j]; 
            enemyY3++;
        }
        enemyY3 -= 7; 
        enemyX3++; 
    }
    enemyX3 -= 4; 
}
void move_enemy3_right()
{ 
    int y = stage0[enemyX3][enemyY3 + 7];
    if (y != 219 && enemy_life3!=0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY3, enemyX3); 
                cout << ' '; 
                enemyY3++;
            }
            enemyY3 -= 7; 
            enemyX3++;
        }
        enemyX3 -= 4;
        enemyY3++;
        gotoxy(enemyY3, enemyX3);
        print_enemy3();
        gotoxy(enemyY3, enemyX3);
    }
    if((playerY-enemyY3<=5 && playerY-enemyY3>=2)&& (enemyX3-playerX>=-1 && enemyX3-playerX<=2))
    {
        gameRunning = false;
    }
}

void move_enemy3_left()
{
    
    int x = stage0[enemyX3][enemyY3 - 1];
    if (x != 219 && enemy_life3!=0)
    {
        gotoxy(enemyY3, enemyX3); 
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY3, enemyX3); 
                cout << ' '; 
                enemyY3++;
            }
            enemyY3 -= 7; 
            enemyX3++;  
        }
        enemyX3 -= 4; 
        enemyY3--; 
        gotoxy(enemyY3, enemyX3); 
        print_enemy3();
        gotoxy(enemyY3, enemyX3);
    }
    if((enemyY3-playerY<=2 && enemyY3-playerY>=0) && (enemyX3-playerX>=-1 && enemyX3-playerX <=2))
    {
        gameRunning = false;
    }
}

void move_enemy3()
{ 
    if(enemy_life3==0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY3, enemyX3);
                cout << ' ';
                enemyY3++;
            }
            enemyY3 -= 7;
            enemyX3++;
        }
        enemyX3 -= 4;
    }
    else
    {
        if (dir3 == "right")    move_enemy3_right();
        if (dir3 == "left")     move_enemy3_left();
        if (stage0[enemyX3][enemyY3 - 1] == 219)        dir3 = "right";
        if (stage0[enemyX3][enemyY3 + 7] == 219)        dir3 = "left";
        if (stage0[enemyX3+2][enemyY3] == 169)      enemy_life3-=50;
        if (stage0[enemyX3+2][enemyY3] == 170)      enemy_life3-=50;
    }
}

void print_enemy4()
{
    // SetConsoleTextAttribute(h,4);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            gotoxy(enemyY4, enemyX4);
            cout << enemy[i][j];
            enemyY4++;
        }
        enemyY4 -= 7;
        enemyX4++;
    }
    enemyX4 -= 4;
}

void move_enemy4_right() 
{
    int y = stage0[enemyX4][enemyY4 + 7];
    if (y != 219 && enemy_life4!=0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY4, enemyX4);
                cout << ' ';
                enemyY4++;
            }
            enemyY4 -= 7; 
            enemyX4++;
        }
        enemyX4 -= 4;
        enemyY4++;
        gotoxy(enemyY4, enemyX4);
        print_enemy4();
        gotoxy(enemyY4, enemyX4);
    }
    if((playerY-enemyY3<=5 && playerY-enemyY3>=2) && (enemyX3-playerX>=-1 && enemyX3-playerX<=2))
    {
        gameRunning = false;
    }
}

void move_enemy4_left()
{
    int x = stage0[enemyX4][enemyY4 - 1];
    if (x != 219 && enemy_life4!=0)
    {
        gotoxy(enemyY4, enemyX4);
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY4, enemyX4);
                cout << ' ';
                enemyY4++;
            }
            enemyY4 -= 7;
            enemyX4++;
        }
        enemyX4 -= 4;
        enemyY4--;
        gotoxy(enemyY4, enemyX4);
        print_enemy4();
        gotoxy(enemyY4, enemyX4);
    }

    if((enemyY4-playerY<=2 && enemyY4-playerY>=0) && (enemyX4-playerX>=-1 && enemyX4-playerX<=2))
    {
        gameRunning = false; 
    }
}
void move_enemy4()
{
    if(enemy_life4==0)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                gotoxy(enemyY4, enemyX4);
                cout << ' ';
                enemyY4++;
            }
            enemyY4 -= 7;
            enemyX4++;
        }
        enemyX4 -= 4;
    }

    else
    {
        if (dir4 == "right")        move_enemy4_right();
        if (dir4 == "left")         move_enemy4_left();
        if (stage0[enemyX4][enemyY4 - 1] == 219)     dir4 = "right";
        if (stage0[enemyX4][enemyY4 + 7] == 219)     dir4 = "left";
        if (stage0[enemyX4+2][enemyY4] == 169)      enemy_life4-=50;
        if (stage0[enemyX4+2][enemyY4] == 170)      enemy_life4-=50;
    }
}

void move_player_left()
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            if (stage [playerX+i][playerY+j] ==71)
            {
                gun = true; 
                gotoxy(157,4); 
                cout << ' ';
                gotoxy(158, 4);
                cout << ' ';
            }
        }
    }
    int x = stage0[playerX][playerY-1]; 
    if (x != 219)
    {
        gotoxy(playerY, playerX); 
        if(stage0[playerX][playerY-1] == 235) score++; 
        if(stage0[playerX+1][playerY-1] ==235) score++; 
        if(stage0[playerX+2][playerY-1] ==235) score++;
        if(stage0[playerX][playerY-1] == 15) score+-2; 
        if(stage0[playerX+1][playerY-1] == 15) score=2; 
        if(stage0[playerX+2][playerY-1] == 15) score+=2;
        if(stage0[playerX][playerY-1] == 4) score+=5; 
        if(stage0[playerX+1][playerY-1] == 4) score+=5; 
        if(stage0[playerX+2][playerY-1] == 4) score+=5; 
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                gotoxy(playerY, playerX); 
                cout << ' '; 
                playerY++;
            }
            playerY-= 3;
            playerX++;
        }
        playerX -= 3; 
        playerY--; 
        gotoxy(playerY, playerX); 
        print_player(); 
        gotoxy(playerY, playerX);
    }
}

void move_player_right()
{
    for (int i=-1; i<2; i++)
    {
        if(stage0[playerX+i][playerY+3]==197)       key = true;
    }
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            if(stage0[playerX+i][playerY+j]==71)
            {
                gun = true; 
                gotoxy(157,4);
                cout << ' '; 
                gotoxy(158,4); 
                cout << ' ';
            }
        }
    }
    if (key == true && stage0[playerX][playerY+4]==221)
    {
        gotoxy(170,28);
        cout << "YOU WON! GAME OVER";
        lives = 1;
        gameRunning = false;
        getch();
        getch();
    }

    int x = stage0[playerX][playerY+3]; 
    int y = stage0[playerX+1][playerY+4];
    if (x != 219 && x!=221 && y!=219 && y!=221)
    {
        gotoxy(playerY, playerX); 
        if(stage0[playerX][playerY+4] == 235) score++; 
        if(stage0[playerX+1][playerY+4] == 235) score++; 
        if(stage0[playerX+2][playerY+4] == 235) score++;
        if(stage0[playerX][playerY+4] == 15) score+=2; 
        if(stage0[playerX+1][playerY+4] == 15) score+=2; 
        if(stage0[playerX+2][playerY+4] == 15) score+=2;
        if(stage0[playerX][playerY+4] == 4) score+=5; 
        if(stage0[playerX+1][playerY+4] == 4) score+=5; 
        if(stage0[playerX+2][playerY+4] == 4) score+=5;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            gotoxy(playerY, playerX); 
            cout << ' '; 
            playerY++;
        }
        playerY-= 3;
        playerX++;
    }
    playerX -= 3; 
    playerY++; 
    gotoxy (playerY, playerX); 
    print_player(); 
    gotoxy(playerY, playerX);
}
void move_player_up() 
{
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<2; j++)
        {
            if(stage0[playerX+i][playerY+j] ==71)
            {   
                gun = true;
                gotoxy(157,4);
                cout << ' ';
                gotoxy(158,4);
                cout << ' ';
            }
        }
    }

    int x = stage0[playerX-1][playerY+1]; 
    if(x == 197) key == true;
    if (stage0[playerX][playerY+1]==157)
    {
        gameRunning = false;
    }
    if (x!= 22)
    {
        if(x==71)
        {
            gun = true; 
            gotoxy(157,4); 
            cout << ' ';
            gotoxy(158, 4); 
            cout << ' ';
        }
        gotoxy (playerY, playerX); 
        if(stage0[playerX-1][playerY] == 235) score++; 
        if(stage0[playerX-1][playerY+1] == 235) score++; 
        if(stage0[playerX-1][playerY+2] == 235) score++;
        if(stage0[playerX-1][playerY] == 15) score+=2; 
        if(stage0[playerX-1][playerY+1] == 15) score+=2; 
        if(stage0[playerX-1][playerY+2] == 15) score+=2;
        if(stage0[playerX-1][playerY] == 4) score+=5; 
        if(stage0[playerX-1][playerY+1] == 4) score+=5; 
        if(stage0[playerX-1][playerY+2] == 4) score+=5; 
        
        for (int i = 0; i < 3; i++)
        {
            for (int j =0; j < 3; j++)
            {
                gotoxy(playerY, playerX); 
                cout << ' '; 
                playerY++;
            }
            playerY-= 3; 
            playerX++;
        }
        playerX -= 3; 
        playerX--;
        gotoxy(playerY, playerX);
        print_player();
        gotoxy(playerY, playerX);

    }
}
void print_ghost()
{
    // SetConsoleTextAttribute(h,6);
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 14; j++)
        {   
            gotoxy(ghostY, ghostX); 
            cout << ghostbig[i][j]; 
            ghostY++;
        }
        ghostY-=14; 
        ghostX++;
    }
    ghostX-=7;
}

void move_ghost_right()
{
    int x=stage0[ghostX+5][ghostY+14];
    if (x != 221 && ghostlife!=0) 
    {
        gotoxy(ghostY, ghostX);
        for (int i = 0; i <7; i++)
        {
            for (int j =0; j < 14; j++)
            {
                gotoxy(ghostY, ghostX);
                cout << ' ';
                ghostY++;
            }
            ghostY-= 14;
            ghostX++;
        }
        ghostX -= 7;
        ghostY++;
        gotoxy(ghostY, ghostX);
        print_ghost();
        gotoxy(ghostY, ghostX);
    }
    if(ghostY-playerY > 0)
    {
        if((ghostX-playerX>=-4 && ghostX-playerX <=-1) && (ghostY-playerY<2 && playerY-ghostY>=-1))
        {
            gameRunning = false;
        }
    }
    if(ghostY-playerY < 0)
    {
        if((ghostX-playerX>=-4 && ghostX-playerX <=-1) && (playerY-ghostY<=13 && playerY-ghostY>=10))
        {
            gameRunning = false;
        }
    }
}

void move_ghost_left()
{
    int x = stage0[ghostX][ghostY-1];
    if (x != 219 && ghostlife!=0)
    {
        gotoxy(ghostY, ghostX);
        for (int i = 0; i <7; i++)
        {
            for (int j = 0; j < 14; j++)
            {
                gotoxy(ghostY, ghostX);
                cout << ' ';
                ghostY++;
            }
            ghostY-= 14;
            ghostX++;
        }
        ghostX -= 7; 
        ghostY--; 
        gotoxy(ghostY, ghostX); 
        print_ghost(); 
        gotoxy(ghostY, ghostX);
    }
    if((ghostX-playerX>=-4 && ghostX-playerX<=-1) && (ghostX-playerY<=2 && ghostY-playerY>=0))
    {
        gameRunning = false;
    }
    if(ghostY-playerY >= 0)
    {
        if((ghostX-playerX>=-4 && ghostX-playerX <=-1) && (ghostY-playerY<2 && ghostY-playerY>=0))
        {
            gameRunning = false;
        }
    }
    if(ghostY-playerY < 0)
    {
        if((ghostX-playerX>=-4 && ghostX-playerX <=-1) && (playerY-ghostY<=13 && playerY-ghostY>=10))
        {
            gameRunning = false;
        }
    }
}

void move_ghost()
{
    if(ghostlife==0) 
    {
        for (int i = 0; i <7; i++)
        {
            for (int j = 0; j < 14; j++)
            {
                gotoxy(ghostY, ghostX);
                cout << ' ';
                ghostY++; 
            }
            ghostY-=14;
            ghostX++;
        }
        ghostX-=7;
    }
    else 
    {
        Sleep(10);
        if (dirg == "right")    move_ghost_right();
        if (dirg == "left")     move_ghost_left();
        if (stage0[ghostX][ghostY-1] == 219)       dirg = "right";
        if (stage0[ghostX+5][ghostY + 15] == 221)    dirg = "left";  
    }
}

void gravity()                      //gravity
{
    if (Gravity==true)
    {
        int x = stage0[playerX+3][playerY];
        if (stage0[playerX+3][playerY+1]==157)
        {
            gameRunning = false;
        }
        if (x!=22 && x!=157)
        {
            gotoxy(playerY, playerX);
            if(stage0[playerX+3] [playerY] == 235) score++;
            if(stage0[playerX+3] [playerY+1] == 235) score++;
            if(stage0[playerX+3] [playerY+2] == 235)score++;
            if(stage0[playerX+3] [playerY] == 15) score+=2;
            if(stage0[playerX+3] [playerY+1] == 15) score+=2;
            if(stage0[playerX+3] [playerY+2] == 15) score+=2;
            if(stage0[playerX+3] [playerY] == 4) score+=5;
            if(stage0[playerX+3] [playerY+1] == 4) score+=5;
            if(stage0[playerX+3] [playerY+2] == 4) score+=5;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    gotoxy(playerY, playerX);
                    cout << ' ';
                    playerY++;
                }
                playerY-= 3;
                playerX++;
            }
            playerX-=3;
            playerX++;
            gotoxy(playerY,playerX);
            print_player();
            gotoxy(playerY,playerX);
        }

        if( x == 236 )
        {
            gameRunning - false;
        }
    }
}
void fire()                 //firing gun
{
    if(gun == true)
    {
        if (previous=="right")
        {
            gotoxy(playerY+3, playerX+1);
            int i=0;

        while(stage0[playerX+1][playerY+3+i]!=219 && stage0[playerX+1][playerY+3+i]!=221)
        {
            gotoxy(playerY+3+i,playerX+1);
            cout << ' ';
            i++;
            gotoxy(playerY+3+i,playerX+1);


                if( stage0[playerX+1][playerY+3+i]==178 || stage0[playerX+1][playerY+4+i]==178 || stage0[playerX+1][playerY+5+i]==178 || stage0[playerX+1][playerY+3+i]==17 || stage0[playerX+1][playerY+4+i]==17 )
                    {
                        if(playerX >= 16 && playerX <=24)
                        {
                            if (enemy_life1!=0) enemy_life1 -=50;
                            getch();
                            getch();
                        }
                        if(playerX >= 8 && playerX <=15) 
                        {
                            if(enemy_life2!=0) enemy_life2 -=50;
                        }
                            
                        if(playerX >=32 && playerX <=39) 
                        {
                            if(enemy_life3!=0) enemy_life3 -=50; 
                        }
                            
                        if(playerX >= 25 && playerX <=31)
                        {
                            if (enemy_life4!=0) enemy_life4 -=50;
                        }
                            
                        if(playerX >= 49 && playerX<= 60 )
                        {
                            if(ghostlife!=0) ghostlife-=20;
                        }
                        gotoxy(playerY+3+i,playerX+1); 
                        cout << ' ';
                    }


                if(stage0[playerX+1][playerY+3+i]!=178 && stage0[playerX+1][playerY+3+i] !=236)
                {
                    char bullet = 169;
                    if(stage0[playerX+1][playerY+3+i]!=219 && stage0[playerX+1][playerY+3+1]!=221 ) cout << bullet;
                    if(stage0[playerX+1][playerY+3+i]==219 || stage0[playerX+1][playerY+3+i]==221)
                    {
                        gotoxy(playerY+2+i,playerX+1);
                        cout << ' ';
                    }
                }
            }
            if (stage0[playerX+1][playerY+3+i]==219 || stage[playerX+1][playerY+3+i]==221)
            {
                gotoxy(playerY+2+i,playerX+1);
                cout << ' ';
            }
        }

    if (previous=="left")
    {
        int i=0;
        gotoxy(playerY-1,playerX+1);
            while(stage0[playerX+1][playerY-1-i]!=219)
            {
                gotoxy(playerY-1-i,playerX+1);
                cout << ' ';
                i++;
                gotoxy(playerY-1-i,playerX+1);

                if(stage0[playerX+1][playerY-i]==178 || stage0[playerX+1][playerY-1-i]==178 || stage0[playerX+1][playerY-2-i]==178 || stage0[playerX+1][playerY-3-i]==178 || stage0[playerX+1][playerY-i]==16 || stage0[playerX+1][playerY-1-i]==16 ||stage0[playerX+1][playerY-2-i]==16)
                {
                    if(playerX >= 16 && playerX <=24)
                    {
                        if(enemy_life1!=0) enemy_life1 -=50;
                        getch();
                        getch();
                    }
                    if(playerX >= 8 && playerX <= 15)
                    {
                        if(enemy_life2!=0) enemy_life2 -=50;
                    }
                    
                    if(playerX >= 32 && playerX <= 39)
                    {
                        if(enemy_life3!=0) enemy_life3 -=50;
                    }
                    
                    if(playerX >= 25 && playerX <= 31)
                    {
                        if (enemy_life4!=0) enemy_life4 -=50;
                    }
                    
                    if(playerX >= 49 && playerX <= 60 )
                    {   
                        if(ghostlife!=0) ghostlife-=20;
                    }
                    
                    gotoxy(playerY-1-i,playerX+1);
                    cout << ' ';
                }
                if(stage0[playerX+1][playerY-1-i]!=178 && stage0[playerX+1][playerY-1-i]!=17) 
                {
                    gotoxy(playerY-1-i,playerX+1);
                    char bullet = 170;
                    if(stage0[playerX+1][playerY-1-i]!=219 ) cout <<bullet;
                    if(stage0[playerX+1] [playerY-1-i]==219)
                    {
                        gotoxy(playerY-i,playerX+1);
                        cout << ' ';
                    }
                }
            }
            if (stage0[playerX+1][playerY-1-i]==219 )
            {
                gotoxy(playerY-i,playerX+1);
                cout << ' ';
            }
        }
    }
}
void initializer()              //initializing all variables and data structures
{
    gameRunning = true;
    playerX = 4;    //Player X-coordinate  
    playerY = 2;    //Player y-coordinate 
    ghostlife=100;  //Ghost Health 
    ghostX= 50;     //Ghost X-coordinate 
    ghostY = 2;     //Ghost Y-coordinate 1206
    enemy_life2=100; //Enemy 2 Health 
    enemyX2 = 11;   //Enemy2 X-coordinate
    enemyY2 = 144;  //Enemy2 Y-coordinate 
    enemy_life1=100;    //Enemy1 Health
    enemyX1 = 19;   //Enemy1 X-coordinate 
    enemyY1 = 3;    //Enemy1 Y-coordinate 
    enemy_life3=100; //Enemy3 Health
    enemyX3 = 35;   //Enemy3 X-coordinate
    enemyY3 = 6;    //Enemy3 Y-coordinate
    enemy_life4=100; //Enemy4 Health 
    enemyX4=27;     //Enemy4 X-coordinate 
    enemyY4=40;     //Enemy4 Y-coordinate
    score = 0;      //Score Counter
    gun = false; 
    key = false;
}

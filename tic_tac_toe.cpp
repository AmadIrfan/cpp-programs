#include <fstream>
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void surface_board();
bool taker(int choise);
void change_player();
void run_game();
int main_manu();
int winner_player();
int current_player = 1;
string plyr1, plyr2;
char current_marker = 'X';
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
int main()
{
     int input = 0;
     while (input < 2)
     {
          input = main_manu();
          if (input == 1)
          {
               system("cls");
               cout << "\t\t----------------------------------------------------------------------" << endl;
               cout << "\t\t-                            Tic Tac Toe                             -" << endl;
               cout << "\t\t----------------------------------------------------------------------" << endl;
               cout << "\t\t" << endl;
               cout << "\n\n\n";
               cout << "\n Enter Player 1's Name: ";
               cin >> plyr1;
               cout << "\n Enter Player 2's Name: ";
               cin >> plyr2;

               run_game();
          }
     }
}
void surface_board()
{
     system("cls");
     cout << "\t\t----------------------------------------------------------------------" << endl;
     cout << "\t\t-                            Tic Tac Toe                             -" << endl;
     cout << "\t\t----------------------------------------------------------------------" << endl;
     cout << "\t\t" << endl;
     cout << "\n\n\n";
     cout << "player 1 : " << plyr1 << "\t\t\t"
          << "player 2 :" << plyr2;
     cout << endl;
     cout << "\t\t"
          << "   " << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "  " << endl;
     cout << "\t\t"
          << " " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "  " << endl;
     cout << "\t\t"
          << "----------------" << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "" << endl;
     cout
         << "\t\t"
         << " " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "  " << endl;
     cout << "\t\t"
          << "----------------" << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "  " << endl;
     cout << "\t\t"
          << " " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;
     cout << "\t\t"
          << "   "
          << " |  "
          << "   |  "
          << "  " << endl;
     cout << "\n\n\n\t\t\n";
}
bool taker(int choise)
{
     int row, col;
     if (choise % 3 == 0)
     {
          row = (choise / 3) - 1;
     }
     else
     {
          row = choise / 3;
     }
     if (choise % 3 == 0)
     {
          col = 2;
     }
     else
     {
          col = (choise % 3) - 1;
     }
     if (board[row][col] != 'X' && board[row][col] != 'O')
     {
          board[row][col] = current_marker;
          return true;
     }
     else
          return false;
}
void change_player()
{
     if (current_player == 1)
     {
          current_player = 2;
     }
     else
          current_player = 1;
     if (current_marker == 'X' || current_marker == 'x')
     {
          current_marker = 'O';
     }
     else
          current_marker = 'X';
}
int winner_player()
{
     for (int i = 0; i < 3; i++)
     {
          if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
          {
               return current_player;
          }
          if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
          {
               return current_player;
          }
     }
     if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
     {
          return current_player;
     }
     if (board[2][0] == board[1][1] && board[1][1] == board[0][2])
     {

          return current_player;
     }
}
void run_game()
{
     int winner;
     int choise;
     for (int i = 0; i < 9; i++)
     {
          surface_board();
          cout << "Player " << current_player << "'s turn [" << current_marker << "]\n Enter your choise : ";
          cin >> choise;

          if (choise < 0 || choise > 9)
          {
               SetConsoleTextAttribute(h, 4);
               cout << "invalid input \n"
                    << endl;
               i--;
               SetConsoleTextAttribute(h, 15);
               cout << "Press any key to continue..." << endl;
               getch();
               continue;
          }
          if (!taker(choise))
          {
               SetConsoleTextAttribute(h, 4);
               cout << "this box is occupied \n"
                    << endl;
               i--;
               SetConsoleTextAttribute(h, 15);
               cout << "Press any key to continue..." << endl;
               getch();
               continue;
          }
          surface_board();
          winner = winner_player();
          if (winner == 1)
          {
               SetConsoleTextAttribute(h, 3);
               cout << "\t\t congratulation! " << plyr1 << " \n\t\t " << plyr1 << " is winner \n";
               SetConsoleTextAttribute(h, 15);
               cout << "Press any key to continue..." << endl;
               getch();
               break;
          }
          if (winner == 2)
          {
               SetConsoleTextAttribute(h, 3);
               cout << "\t\t congratulation! " << plyr2 << " \n \t\t" << plyr2 << " is  winner\n " << endl;
               SetConsoleTextAttribute(h, 15);
               cout << "Press any key to continue..." << endl;
               getch();
               break;
          }
          change_player();
     }

     if (winner != 1 && winner != 2)
     {
          SetConsoleTextAttribute(h, 3);
          cout << "\t\tThis is a tie match\n ";
          SetConsoleTextAttribute(h, 15);
          cout << "Press any key to continue..." << endl;
          getch();
          cout << endl;
     }
}
int main_manu()
{
     int input;
     system("cls");
     cout << "\t\t----------------------------------------------------------------------" << endl;
     cout << "\t\t-                             Tic Tak Toe                            -" << endl;
     cout << "\t\t----------------------------------------------------------------------" << endl;
     cout << "\t\t" << endl;
     cout << "\n\n\n";
     cout << "(1). Start game\n";
     cout << "(2). Exit\n";
     cout << "\n your choice: ";
     cin >> input;
     return input;
}
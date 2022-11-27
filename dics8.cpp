#include<iostream>
using namespace std;
int main()
{
int one,two;
cout<<"for player enter input ";
cin>>one;
cout<<"for player enter input ";
cin>>two;
//1	
	if(one=="rock" && two=="paper")
		{cout<<"Player 2 Wins";}
//2	
	if(one=="rock" && two=="scissors")
		{cout<<"Player 1 Wins";}
//3	
	if(one=="rock" && two=="rock")
		{cout<<"Match Draws";}
//4	
	if(one=="scissors" && two=="paper")
		{cout<<"Player 1 Wins";}
//5	
	if(one=="scissors" && two=="rock")
		{cout<<"Player 2 Wins";}
//6	
	if(one=="scissors" && two=="scissors")
		{cout<<"Match Draws";}
//7	
	if(one=="paper" && two=="rock")
		{cout<<"Player 1 Wins";}
//8
	if(one=="paper" && two=="scissors")
		{cout<<"Player 2 Wins";}
//9
	if(one=="paper" && two=="paper")
		{cout<<"Match Draws";}
//10
	if(one=="paper" && two=="rock")
		{cout<<"Player 1 Wins";}
//11
	if(one=="scissors" && two=="rock")
		{cout<<"Player 2 Wins";}
//12
	if(one=="rock" && two=="rock")
		{cout<<"Match Draws";}
//13
	if(one=="paper" && two=="scissors")
		{cout<<"Player 2 Wins";}
//14
	if(one=="rock" && two=="scissors")
		{cout<<"Player 1 Wins";}
//15
	if(one=="scissors" && two=="scissors")
		{cout<<"Match Draws";}
//16
	if(one=="rock" && two=="paper")
		{cout<<"Player 2 Wins";}
//17
	if(one=="scissors" && two=="paper")
		{cout<<"Player 1 Wins";}
//18
	if(one=="paper" && two=="paper")
		{cout<<"Match Draws";}
}
}
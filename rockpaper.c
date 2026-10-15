 #include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
//function to implement the game
int game(char you ,char computer)
{
//if both user and computer 
//has choose the same thing
if(you==computer)
return-1;
//if user's choice is stone and
//computers choice is paper
if (you=='s'&&computer=='p')
return 0;
//if user's choice is paper and
// computers's choice is stone
else if(you=='z' && computer=='p')
return 1;
}
//driver code
int main()
{
//stores the random number
int n;
char you,computer,result;
//chooses the random number
//every time
srand(time(NULL));
//than 100,divided it by 100
n=rand()%100;
//using simple probablity 100 is
//roughly divided among stone,
// paper ,and scissor
if(n<33)
//s is denoting stone
computer='s';
else if(n>33 && n<66)
//p is denoting paper
 computer='p';
//z is denoting scissor 
else
computer='z';
printf("\n\n\n\n\t\t\t\tEnter s for STONE,p for PAPER and Z for SCISSOR \n\t\t\t\t\t\t");
//input from the user
scanf("%c",&you);
//function call to play the game
result=game(you,computer);
 if (result==-1)
{
printf("\n\n\t\t\t\tGame draw!\n");
}
else if(result==1)
{
printf("\n\n\t\t\t wow! you have won the game! \n");
}
else
{
printf("\n\n\t\t\t oh!you have lost the game");
}          
printf("\t\t\t\tYOU choose:%c \n",you,computer);
return 0;
}

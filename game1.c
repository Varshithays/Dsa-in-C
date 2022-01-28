#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int game(char you, char comp)
{
    if(you == comp)
    return -1;
    if(you =='s'&& comp =='p')
    return 0;
    else if(you =='p'&& comp == 's')
    return 1;
    if(you =='s'&& comp == 'z')
    return 1;
    else if(you =='z'&& comp == 's')
    return 0;
    if(you =='p' && comp =='z')
    return 0;
    else if(you =='z' && comp  == 'p')
    return 1;
}
// Driver code
int main()
{
    int n;
    char you,comp,result;
    srand(time(NULL));
    n= rand() %100;
    if(n<33)
    comp='s';
    else if(n>33 && n<66)
    comp = 'p';
    else
    comp = 'z';
    printf("\n\n\n Enter s for STONE,p for PAPER and z for SCISSOR\n\t");
    scanf("%c",&you);
    result =game(you,comp);
        if(result ==-1){
            printf("\nGame draw!\n");
        }
   else if(result == 1){
        printf("\nWow! you won the game!\n");
    }
    else{
        printf("\nOh!  you lost the game!\n");
    }
    printf(" you choose : %c and computer choose: %c\n",you ,comp);
    return 0;

}
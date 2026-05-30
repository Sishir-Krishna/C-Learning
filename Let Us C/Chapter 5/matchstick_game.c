#include <stdio.h>
int main()
//In these types of questions first identify the losing conditions. If we face a choice between only 1 or 6 matchsticks we lose.
//If we face a choice between 2,3,4,or 5 matchsticks we can always win, since we can pick 1,2,3, or 4 matchsticks 
//and leave the opponent with 1 or 6 matchsticks. Hence, the winning strategy is to always pick matchsticks such that
//the total number of matchsticks drawn in each round is 5. This way, the computer will always win if the user starts first.
//5*4=20 and the remaining matchstick will be picked by the user.
{
    int user_pick, computer_pick,matchsticks=21;
    printf("Welcome to the Matchstick Game.\n");
    while(matchsticks>0)
    {
        printf("Enter the number of matchsticks you want to pick: \n");
        scanf("%d", &user_pick);
        if (user_pick<1 || user_pick>4)
        printf("Pick between 1 to 4 matchsticks per chance.\n");
        else
        {
            computer_pick=5-user_pick;
            //Computer will pick matchsticks such that the total number of matchsticks drawn in each round is 5.
            //This way, the computer will always win if the user starts first. 5*4=20 and the remaining matchstick will be picked by the user.
            printf("The Computer picked %d matchsticks.\n", computer_pick);
            matchsticks= matchsticks-(user_pick+computer_pick);
        }
    }
    printf("You have picked the last matchstick and hence lost the game.\n");
    return 0;
}
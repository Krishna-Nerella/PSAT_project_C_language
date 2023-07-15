#include <stdio.h>


char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main()
{
    int player = 1, flag, choice;
    char mark;
    int* p1;
    int* p2;
    p1=&player;
                                           //code
    do
    {
        board();
      
        if(*p1 % 2 != 0)
        {
            *p1=1;
        }
        else
        {
            *p1=2;
        }

        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        p2=&choice;
        
        if(*p1 == 1)
        {
            mark='X';
        }
        else
        {
            mark='O';
        }

        if (*p2 == 1 && square[1] == '1')
            square[1] = mark;
            
        else if (*p2 == 2 && square[2] == '2')
            square[2] = mark;
            
        else if (*p2 == 3 && square[3] == '3')
            square[3] = mark;
            
        else if (*p2 == 4 && square[4] == '4')
            square[4] = mark;
            
        else if (*p2 == 5 && square[5] == '5')
            square[5] = mark;
            
        else if (*p2 == 6 && square[6] == '6')
            square[6] = mark;
            
        else if (*p2 == 7 && square[7] == '7')
            square[7] = mark;
            
        else if (*p2 == 8 && square[8] == '8')
            square[8] = mark;
            
        else if (*p2 == 9 && square[9] == '9')
            square[9] = mark;
            
        else
        {
            printf("Invalid move ");

            player--;
           
            
        }
        flag= checkwin();

        player++;
    }while (flag ==  - 1);
    
    board();
    
    if (flag == 1)
        printf("==>\aPlayer %d win <== ", --player);
    else
        printf("==>\aGame draw <== ");

    

    
}

                                                 //checking conditions

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] 
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}


                                                         //table 


void board()
{
    
    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}




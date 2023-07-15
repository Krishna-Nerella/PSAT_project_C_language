#include <stdio.h>

#include <stdlib.h>

char matrix[3][3]; /* the tic tac toe matrix */

char check(void);

void init_matrix(void);

void get_player_move(void);

void get_computer_move(void);

void disp_matrix(void);
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board();

int main(void)

{
    
    int a;
    printf("1-user vs computer\n");
    printf("0-user vs user\n");
    printf("enter 0 or 1\n");
    scanf("%d",&a);
    
if (a==1){
    


char done;

printf("This is the game of Tic Tac Toe.\n");

printf("You will be playing against the computer.\n");

done = ' ';

init_matrix();

do {

disp_matrix();

get_player_move();

done = check(); /* see if winner */

if(done!= ' ') break; /* winner!*/

get_computer_move();

done = check(); /* see if winner */

} while(done== ' ');

if(done=='X') printf("You won!\n");

else printf("I won!!!!\n");

disp_matrix(); /* show final positions */

return 0;
    
}

//**********************************user vs user***************************************
                                                                    //krishna nerella

else if(a==0){
    
    
    int player = 1, flag, choice;
    int* p1;
    int* p2;
    p1=&player;
    

    char mark;
    do
    {
        board();
      
        if(*p1 = (*p1 % 2))
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
        
        if(mark = (*p1 == 1))
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
           
            scanf("%c",&mark);
        }
        
        
        
        flag= checkwin();

        player++;
    }while (flag ==  - 1);
    
    board();
    
    if (flag == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    

    

}

else
{
    printf("Invalid !!!!!!\n ");
    printf("Run again");
}

}

/* Initialize the matrix. */

void init_matrix(void)

{

int i, j;

for(i=0; i<3; i++)

for(j=0; j<3; j++) matrix[i][j] = ' ';

}

/* Get a player's move. */

void get_player_move(void)

{

int x, y;

printf("Enter X,Y coordinates for your move: ");

scanf("%d%*c%d", &x, &y);

x--; y--;

if(matrix[x][y]!= ' '){

printf("Invalid move, try again.\n");

get_player_move();

}

else matrix[x][y] = 'X';

}

/* Get a move from the computer. */

void get_computer_move(void)

{

int i, j;

for(i=0; i<3; i++){

for(j=0; j<3; j++)

if(matrix[i][j]==' ') break;

if(matrix[i][j]==' ') break;

}

if(i*j==9) {

printf("draw\n");

exit(0);

}

else

matrix[i][j] = 'O';

}

/* Display the matrix on the screen. */

void disp_matrix(void)

{

int t;

for(t=0; t<3; t++) {

printf(" %c | %c | %c ",matrix[t][0],

matrix[t][1], matrix [t][2]);

if(t!=2) printf("\n---|---|---\n");

}

printf("\n");

}

/* See if there is a winner. */

char check(void)

{

int i;

for(i=0; i<3; i++) /* check rows */

if(matrix[i][0]==matrix[i][1] &&

matrix[i][0]==matrix[i][2]) return matrix[i][0];

for(i=0; i<3; i++) /* check columns */

if(matrix[0][i]==matrix[1][i] &&

matrix[0][i]==matrix[2][i]) return matrix[0][i];

/* test diagonals */

if(matrix[0][0]==matrix[1][1] &&

matrix[1][1]==matrix[2][2])

return matrix[0][0];

if(matrix[0][2]==matrix[1][1] &&

matrix[1][1]==matrix[2][0])

return matrix[0][2];

return ' ';
}

                                                                            //nithyleshwaran

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

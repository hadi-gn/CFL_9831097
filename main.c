#include <stdio.h>
#include <stdlib.h>

void cell(char cell_1, char cell_2, char cell_3, char cell_4, char cell_5, char cell_6, char cell_7, char cell_8, char cell_9){
    system("cls");
    printf("player 1: O     player 2: X\n \n");
    printf("_____ _____ _____\n");
    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", cell_1, cell_2, cell_3);
    printf("_____|_____|_____|\n");

    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", cell_4, cell_5, cell_6);
    printf("_____|_____|_____|\n");

    printf("     |     |     |\n");
    printf("  %c  |  %c  |  %c  |\n", cell_7, cell_8, cell_9);
    printf("_____|_____|_____|");



}

int check (char selol1, char selol2, char selol3, char selol4,char selol5,char selol6,char selol7, char selol8,char selol9){
    if (selol1 == 'X' && selol2 == 'X' && selol3 == 'X') return 9;
    else if (selol4 == 'X' && selol5 == 'X' && selol6 == 'X') return 9;
    else if (selol7 == 'X' && selol8 == 'X' && selol9 == 'X') return 9;
    else if (selol1 == 'X' && selol4 == 'X' && selol7 == 'X') return 9;
    else if (selol2 == 'X' && selol5 == 'X' && selol8 == 'X') return 9;
    else if (selol3 == 'X' && selol6 == 'X' && selol9 == 'X') return 9;
    else if (selol1 == 'X' && selol5 == 'X' && selol9 == 'X') return 9;
    else if (selol3 == 'X' && selol5 == 'X' && selol7 == 'X') return 9;


    else if (selol1 == 'O' && selol2 == 'O' && selol3 == 'O') return 10;
    else if (selol4 == 'O' && selol5 == 'O' && selol6 == 'O') return 10;
    else if (selol7 == 'O' && selol8 == 'O' && selol9 == 'O') return 10;
    else if (selol1 == 'O' && selol4 == 'O' && selol7 == 'O') return 10;
    else if (selol2 == 'O' && selol5 == 'O' && selol8 == 'O') return 10;
    else if (selol3 == 'O' && selol6 == 'O' && selol9 == 'O') return 10;
    else if (selol1 == 'O' && selol5 == 'O' && selol9 == 'O') return 10;
    else if (selol3 == 'O' && selol5 == 'O' && selol7 == 'O') return 10;




}

int main()
{
    char selol[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int i = 9, j, k, check_for;
    cell(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
    for (j = 1; j<= 1; j++){
        printf("\n nobate player 1\n");
        scanf("%d", &k);
        if(k == 1) selol [1] = 'O';
        if(k == 2) selol [2] = 'O';
        if(k == 3) selol [3] = 'O';
        if(k == 4) selol [4] = 'O';
        if(k == 5) selol [5] = 'O';
        if(k == 6) selol [6] = 'O';
        if(k == 7) selol [7] = 'O';
        if(k == 8) selol [8] = 'O';
        if(k == 9) selol [9] = 'O';
        cell(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
    }

    for(j = 1; j <= 4; j++){
        printf("\n nobate player 2\n");
        scanf("%d", &k);
        if(k == 1) selol [1] = 'X';
        if(k == 2) selol [2] = 'X';
        if(k == 3) selol [3] = 'X';
        if(k == 4) selol [4] = 'X';
        if(k == 5) selol [5] = 'X';
        if(k == 6) selol [6] = 'X';
        if(k == 7) selol [7] = 'X';
        if(k == 8) selol [8] = 'X';
        if(k == 9) selol [9] = 'X';
        cell(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
        check_for = check(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
        if (check_for == 9){
            j = 10;
            printf("\n \n ***Player 2 is WINNER*** \a");
            return 0;
        }


        printf("\n nobate player 1\n");
        scanf("%d", &k);
        if(k == 1) selol [1] = 'O';
        if(k == 2) selol [2] = 'O';
        if(k == 3) selol [3] = 'O';
        if(k == 4) selol [4] = 'O';
        if(k == 5) selol [5] = 'O';
        if(k == 6) selol [6] = 'O';
        if(k == 7) selol [7] = 'O';
        if(k == 8) selol [8] = 'O';
        if(k == 9) selol [9] = 'O';
        cell(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
        check_for = check(selol[1],selol[2],selol[3],selol[4],selol[5],selol[6],selol[7],selol[8],selol[9]);
        if (check_for == 10){
            j = 10;
            printf("\n \n ***Player 1 is WINNER*** \a");
            return 0;
        }

    }
    printf("\n\n***bazi bedone barande***\a");

    return 0;
}

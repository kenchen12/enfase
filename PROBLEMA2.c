
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char board[3][3];
    int i, j;
    int x = 0, o = 0, w1 = 0, w2 = 0, player = -1;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%c", &board[i][j]);
            // printf("%c", board[i][j]);
            if(board[i][j] == 'X')
                x++;
            if(board[i][j] == '0')
                o++;
        }
        getchar();
        // printf("\n");
    }
   for(i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            if(board[i][0] == 'X' && x <= 5) {
                // printf("primeiro_venceu");
                w1 = 1;
                // return 0;
            }
            if(board[i][0] == '0' && o < 5) {
                // printf("segundo_venceu");
                w2 = 1;
                // return 0;
            }
        }
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i]){
            if(board[0][i] == 'X' && x <= 5) {
                // printf("primeiro_venceu");
                w1 = 1;
                // return 0;
            }
            if(board[0][i] == '0' && o < 5) {
                // printf("segundo_venceu");
                w2 = 1;
                // return 0;
            }
        }
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
        if(board[0][0] == 'X' && x <= 5) {
            // printf("primeiro_venceu");
            w1 = 1;
            // return 0;
        }
        if(board[0][0] == '0' && o < 5) {
            // printf("segundo_venceu");
            w2 = 1;
            // return 0;
        }
    }
    else if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
        if(board[1][1] == 'X' && x <= 5) {
            // printf("primeiro_venceu");
            w1 = 1;
            // return 0;
        }
        if(board[1][1] == '0' && o < 5) {
            // printf("segundo_venceu");
            w2 = 1;
            // return 0;
        }
    }
    
    if(x == o+1 && x + o != 9)
        player = 2;
    else if(x == o)
        player = 1;
        
    if(w1 == 0 && w2 == 0 && player == -1 && x + o == 9){
        printf("empate");
        return 0;
    }
    else if(w1 == 1 && w2 == 1){
        printf("invalido");
        return 0;
    }
    else if(w1 == 1){
        printf("primeiro_venceu");
        return 0;
    }
    else if(w2 == 1){
        printf("segundo_venceu");
        return 0;
    }
        
    if(player == 1)
        printf("primeiro");
    else if(player == 2)
        printf("segundo");
    else{
        printf("invalido");
    }
    
    

    return 0;
}

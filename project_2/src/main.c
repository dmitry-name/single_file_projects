#include <stdio.h>
#include <stdlib.h>

#define SIZE    10
#define MINES   12

int main(void)
{
    char pg[SIZE][SIZE] = {0};
    int mines = 0;
    
    while(mines < MINES)
    {
        int x = rand() % 10;
        int y = rand() % 10;
        int sum = 0;
        
        for (int i = -1; i < 2; i++)
        {
            for (int j = -1; j < 2; j++)
            {
                if (x + i >= 0 && x + i < SIZE && y + j >= 0 && y + j < SIZE)
                    sum += pg[x + i][y + j];
            }
        }
        if (sum == 0)
        {
            pg[x][y] = '*';
            mines++;
        } 
    }       
    for(int i = 0; i < SIZE; i++)
        for(int j = 0; j < SIZE; j++)
            printf("%c%c", pg[i][j] == '*' ? '*' : '0', j == SIZE-1 ? '\n' : ' ');

    return 0;
}
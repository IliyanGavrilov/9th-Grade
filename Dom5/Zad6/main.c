#include <stdio.h>
#include <stdlib.h>

void queen_move_positions(char letter, int pos)
{
    for(int i=1;i<=8;i++)
    {
        if(i != pos)
        {
            printf("%c%d ", letter, i);
        }
    }

    for(int i='a';i<='h';i++)
    {
        if(i != letter)
        {
            printf("%c%d ", i,pos);
        }
    }

    int row=pos+1,col=letter+1;
    while(row<=8 && col<='h')
    {
        printf("%c%d ", col,row);
        row++;
        col++;
    }

    row=pos-1,col=letter-1;
    while(row>=1 && col>='a')
    {
        printf("%c%d ", col,row);
        row--;
        col--;
    }

    row=pos-1,col=letter+1;
    while(row>=1 && col<='h')
    {
        printf("%c%d ", col,row);
        row--;
        col++;
    }

    row=pos+1,col=letter-1;
    while(row<=8 && col>='a')
    {
        printf("%c%d ", col,row);
        row++;
        col--;
    }

    printf("\n");
}

int main()
{
    queen_move_positions('h', 8);
    // expected output:
    // g8 f8 e8 d8 c8 b8 a8 h7 h6 h5 h4 h3 h2 h1 g7 f6 e5 d4 c3 b2 a1
    queen_move_positions('g', 2);
    // expected output:
    // f2 e2 d2 c2 b2 a2 g3 g4 g5 g6 g7 g8 h2 g1 f3 e4 d5 c6 b7 a8 h3 h1 f1
    return 0;
}

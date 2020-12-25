#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7, h = 8, i = 9, turn1, turn2;
    printf("lets play tic tac toe\n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n\n", a, b, c, d, e, f, g, h, i);
    checkpoint:
    if(a != 1 && b != 2 && c != 3 && d != 4 && e != 5 && f != 6 && g != 7 && h != 8 && i != 9)
    {
        printf("\nTIE.....badluck");
        goto checkpoint3;
    }
    printf("\nplayer1 turn:\nwhich position u want to put a cross: ");
    scanf("%d", &turn1);
    if(turn1 == a)
    {
        a = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == b)
    {
        b = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == c)
    {
        c = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == d)
    {
        d = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nlayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == e)
    {
        e = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == f)
    {
        f = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == g)
    {
        g = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == h)
    {
        h = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else if (turn1 == i)
    {
        i = 0;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == 0 && b == 0 && c == 0 || d == 0 && e == 0 && f == 0 || g == 0 && h == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && d == 0 && g == 0 || b == 0 && e == 0 && h == 0 || c == 0 && f == 0 && i == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == 0 && e == 0 && i == 0 || c == 0 && e == 0 && g == 0)
        {
            printf("\nplayer1 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint1;
    }
    
    else 
    {
        printf("enter appropiate values");
        goto checkpoint;
    }
   
   
   
   
   
    checkpoint1:
    if(a != 1 && b != 2 && c != 3 && d != 4 && e != 5 && f != 6 && g != 7 && h != 8 && i != 9)
    {
        printf("\nTIE.....badluck");
        goto checkpoint3;
    }
    printf("\nplayer2 turn:\nwhich position u want to put a cross: ");
    scanf("%d", &turn2);
    if(turn2 == a)
    {
        a = -1;
        printf(" %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == b)
    {
        b = -1;
        printf("  %d  | %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == c)
    {
        c = -1;
        printf("  %d  |  %d  | %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == d)
    {
        d = -1;
        printf("  %d  |  %d  |  %d  \n %d  |  %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == e)
    {
        e = -1;
        printf("  %d  |  %d  |  %d  \n  %d  | %d  |  %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == f)
    {
        f = -1;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  | %d  \n  %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == g)
    {
        g = -1;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n %d  |  %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == h)
    {
        h = -1;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  | %d  |  %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    else if (turn2 == i)
    {
        i = -1;
        printf("  %d  |  %d  |  %d  \n  %d  |  %d  |  %d  \n  %d  |  %d  | %d  ", a, b, c, d, e, f, g, h, i);
        if(a == -1 && b == -1 && c == -1 || d == -1 && e == -1 && f == -1 || g == -1 && h == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && d == -1 && g == -1 || b == -1 && e == -1 && h == -1 || c == -1 && f == -1 && i == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        else if(a == -1 && e == -1 && i == -1 || c == -1 && e == -1 && g == -1)
        {
            printf("\nplayer2 won CONGRATS!!");
            goto checkpoint3;
        }
        goto checkpoint;
    }
    
    
    else 
    {
        printf("enter appropiate values");
        goto checkpoint1;
    }
    checkpoint3:
    

    return 0;
}
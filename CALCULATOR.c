#include <stdio.h>

int main(void)

{
    float b, ans=0;
    char op;

    printf("CALCULATOR\n");
    printf("----------\n\n");
    printf("  ");
    scanf(" %f", &ans);

    while (b!=0) 
    {
        printf("  ");
        scanf(" %c", &op);
        printf("  ");
        scanf(" %f", &b);
        printf("\n");

        if (op=='+')
        {
            ans=ans+b;
            printf("= %.2f", ans);
        }
        else if (op=='-')
        {
            ans=ans-b;
            printf("= %.2f", ans);
        }
        else if (op=='x')
        {
            ans=ans*b;
            printf("= %.2f", ans);
        }
        else if (op=='/')
        {
            ans=ans/b;
            printf("= %.2f", ans);
        }
        else
        {
            printf("ERROR\n");
            break;
        } 
        getch();
        return 0;
    }
}            
    

#include <stdio.h>
int main()
{
    char c1, c2;

    printf("Enter the class you got:--\nExample-F for First, S for Second\nAns:-");
    scanf(" %c",&c1);

    switch(c1)
    {
        case 'F':
            printf("First\n");
            printf("Did you fail in more than 3 subjects? Y/N\n");
            scanf(" %c",&c2);

            if(c2=='Y')
            printf("You will get no grace.");
            else if(c2=='N')
            printf("You will get a grace of 5 marks per subject.");

            break;

        case 'S':
            printf("Second\n");
            printf("Did you fail in more than 2 subjects? Y/N\n");
            scanf(" %c",&c2);

            if(c2=='Y')
            printf("You will get no grace.");
            else if(c2=='N')
            printf("You will get a grace of 4 marks per subject.");

            break;

        case 'T':
            printf("Third");
            printf("Did you fail in more than 1 subjects? Y/N\n");
            scanf(" %c",&c2);

            if(c2=='Y')
            printf("You will get no grace.");
            else if(c2=='N')
            printf("You will get a grace of 5 marks per subject.");

            break;

        default:
            printf("error");
            break;
    }

    return 0;
}

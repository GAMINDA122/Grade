#include <stdio.h>

void main()
{
    char stNumber[12];
    int mark;

    printf("\t\t\t\t------------------ WELCOME TO THE PROGRAMME -----------------");
    printf("\n\nEnter student number : ");
    scanf("%s",stNumber);
    printf("\nEnter average mark : ");
    scanf("%d",&mark);

    mark /= 10;

    switch(mark)
    {
        case 10: case 9: case 8: printf("\n%s1. Grade is Honours!",stNumber);
                                 break;

        case 7: case 6: printf("\n%s2. Grade is First Divivsion!",stNumber);
                        break;

        case 5 : printf("\n%s3. Grade is second Divivsion!",stNumber);
                 break;

        case 4: printf("\n%s4. Grade is Third Divivsion!",stNumber);
                break;

        default : printf("\n%s5. Sorry. Your grade is Fail",stNumber);

    }

    printf("\n\n\t\t\t\t-------------------- THANK YOU ------------------- ");
}

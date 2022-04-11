#include <stdio.h>
#include <stdlib.h>

float freq555(float Ra, float Rb, float C);
float capacitor(float freq, float Rb, float Ra);

int main()
{
    float ra, rb, c, freq;
    char opt;
    printf("Type A or B to calculate frequency or capacitor: ");
    scanf("%c", &opt);
    system("cls");
    
    switch (opt)
    {
    case 'A':
    case 'a':
        while (1)
        {
            printf("\tFrequency of 555 CALC\n");
            printf("ra = ");
            scanf("%f", &ra);
            printf("rb = ");
            scanf("%f", &rb);
            printf("c = ");
            scanf("%f", &c);
            printf("The frequency is: %.2fHz\n", freq555(ra, rb, c));
        }
    break;

    case 'B':
    case 'b':
        while (1)
        {
            printf("\tCapacitor of 555 CALC\n");
            printf("ra = ");
            scanf("%f", &ra);
            printf("rb = ");
            scanf("%f", &rb);
            printf("freq = ");
            scanf("%f", &freq);
            printf("The capacitor required is: %.2fnF\n", capacitor(ra, rb, freq));
        }
    break;

    case 'Q':
    case 'q':
        printf("Quiting...\n");
        system("PAUSE");
    break;
    
    default:
        printf("INVALID. TYPE A/a or B/b.\n");
    break;
    }
}

float freq555(float Ra, float Rb, float C)
{
    float freq;
    freq = 1.44/((Ra+2*Rb)*C);
    return freq;
}

float capacitor(float freq, float Rb, float Ra)
{
    float capacitor;
    capacitor = 1.44/((Ra+2*Rb)*freq);
    return capacitor;
}


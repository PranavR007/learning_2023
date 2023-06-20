#include <stdio.h>

int main()
{
    int I, J, N;

    printf("Enter rows: ");
    scanf("%d", &N);

    for(I=N; I>=1; I--)
    {
        // Prints first part of pattern
        for(J=1; J<=i; J++)
        {
            printf("%d", J);
        }

        // Prints spaces between two parts
        for(J=i*2; J<N*2; J++)
        {
            printf(" ");
        }

        // Prints second part of the pattern
        for(J=i; J>=1; J--)
        {
            printf("%d", J);
        }

        printf("\n");
    }

    return 0;
}
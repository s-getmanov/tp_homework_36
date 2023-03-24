/*
Репозиторий к задаче 
https://github.com/s-getmanov/tp_homework_36.git
*/

#include <stdio.h>

main()
{

    int exit_number = 7;
    int a = 0;

    while (a != exit_number)
    {
        printf("Введите число: ");
        scanf("%i", &a);

        if (a != exit_number)
        {
            if (a > exit_number)
            {
                printf("Больше %i!\n", exit_number);
            }
            else
            {
                printf("Меньше %i!\n", exit_number);
            };

            if (a > 10)
            {
                printf("Больше 10!\n");
            }
            else if (a < 10)
            {
                printf("Меньше 10\n");
            };

            if (a % 2 > 0)
            {
                printf("Не делится на 2\n");
            }
            else
            {
                printf("Делится на 2\n");
            };

            if (a % 3 > 0)
            {
                printf("Не делится на 3\n");
            }
            else
            {
                printf("Делится на 3\n");
            };
        };
        
        printf("\n");
    }
}

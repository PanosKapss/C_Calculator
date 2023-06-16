#include <stdio.h>

int main(int argc, char *argv[])
{

    int loop;

    while (loop != 0)
    {

        int x, y;
        int ans;
        int result;

        printf("Give the first number:");
        scanf("%d", &x);
        printf("Give the second number:");
        scanf("%d", &y);
        printf("What you want to do with these 2 numbers(1,2,3,4):");
        scanf("%d", &ans);

        if (ans == 1)
        {
            result = x + y;
            printf("Result is %d\n", result);
        }

        else if (ans == 2)
        {
            result = x - y;
            printf("Result is %d\n", result);
        }

        else if (ans == 2)
        {
            result = x * y;
            printf("Result is %d\n", result);
        }

        else
        {
            result = x / y;
            printf("Result is %d\n", result);
        }

        printf("Dp you want to try again(1=yes/0=no):");
        scanf("%d", &loop);
    }
    printf("Program Terminated,Goodbye!!\n");
    return 0;
}

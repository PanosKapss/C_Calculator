#include <stdio.h>    // Library Initialization
#include <stdlib.h>   // Library Initialization 

// --------------------------------Main_Function--------------------------------
int main(int argc, char *argv[])
{

    // Value That Saves The Input From User To See If It Will Loop The Program After Every Calculation
    int loop = 1;

    // While Answer Different Than 0 Continue Looping
    while (loop != 0)
    {
        // Values Initialization
        int x, y;          // x = First Number, y = Second Number
        int ans;           // Answer From User To What Arithmetic Operation Wants To Do
        int result;        // Result For Sum, Substraction, Muliply
        float division;    // Result For Division

        // Values Registration x = First Number, y = Second Number
        printf("--------------------------\n");
        printf("Give The First Number: ");
        scanf("%d", &x);        // Takes From Keyboard The First Value
        printf("--------------------------\n");
        printf("Give The Second Number: ");
        scanf("%d", &y);        // Takes From Keyboard The Second Value
        printf("--------------------------\n");
        printf("What Do You Want To Do With These 2 Numbers(1 = Sum, 2 = Subtraction, 3 = Multiply, 4 = Division): ");
        scanf("%d", &ans);      // Takes From Keyboard What User Wants To Do
        printf("--------------------------\n");

        // While "ans" Greater Than 4 or Less Than 1 Ask From User To Give A Valid Input
        while (ans > 4 || ans < 1)
        {
            printf("Wrong Input, Please Try Again!!\n");
            printf("What Do You Want To Do With These 2 Numbers(1 = Sum, 2 = Subtraction, 3 = Multiply, 4 = Division): ");
            scanf("%d", &ans);    // Takes From Keyboard What User Wants To Do
            printf("--------------------------\n");
        }

        // IF "ans" = 1 Then Do Sum
        if (ans == 1)
        {
            result = x + y;    // Take x and y Value, Sum Them And Add Result To "result" Value
            printf("Result Is: %d\n", result);    // Print Result
            printf("--------------------------\n");
        }

        // IF "ans" = 2 Then Do Substraction
        else if (ans == 2)
        {
            result = x - y;    // Take x and y Value, Substract Them And Add Result To "result" Value
            printf("Result Is: %d\n", result);    // Print Result
            printf("--------------------------\n");
        }

        // IF "ans" = 3 Then Do Multiply
        else if (ans == 3)
        {
            result = x * y;    // Take x and y Value, Multiply Them And Add Result To "result" Value
            printf("Result Is: %d\n", result);    // Print Result
            printf("--------------------------\n");
        }

        // Else Do Division
        else
        {
            // IF x and y Are Equal With 0 Exit Program, Due To Error
            if (y == 0)
            {
                printf("\n");          // Change Line
                printf("--------------------------\n");
                printf("Cant Divide With 0,Error\n");
                printf("--------------------------\n");
                printf("\n");          // Change Line
                exit(EXIT_FAILURE);    // Terminates Program Execution And Returns A Failure Status Code
            }

            // Else Output The Result
            else
            {
                division = x / y;    // Take x and y Value, Divide Them And Add Result To "result" Value
                printf("Result Is: %.3f\n", division);    // Print Result
                printf("--------------------------\n");
            }
        }

        // Ask User IF They Want To Calculate Again, IF answer Equals To 1 = Yes, Otherwise 0 = No
        printf("Do You Want To Try Again?(1 = Yes / 0 = No): ");
        scanf("%d", &loop);        // Takes From Keyboard What User Wants To Do
    }
    printf("\n");        // Change Line
    printf("--------------------------\n");
    printf("Program Terminated,Goodbye!!\n");
    printf("--------------------------\n");
    printf("\n");        // Change Line

    exit(EXIT_SUCCESS);        // Terminates Program Execution And Returns A Success Status Code

    return 0;
}

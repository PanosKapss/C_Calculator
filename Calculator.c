#include <stdio.h>
#include <stdlib.h>

// --------------------------------Main_Function--------------------------------
int main(int argc, char *argv[])
{
    
    //Value That Saves The Input From User To See If It Will Loop The Program After Every Calculation
    int loop;

    //While Answer Different Than 0 Continue Looping
    while (loop != 0)  
    {
        //Values Initialization
        int x, y;
        int ans;
        int result;
        
        //Values Registration x = First Number, y = Second Number
        printf("Give The First Number: ");
        scanf("%d", &x);
        printf("Give The Second Number: ");
        scanf("%d", &y);
        printf("What Do You Want To Do With These 2 Numbers(1 = Sum, 2 = Subtraction, 3 = Multiply, 4 = Division): ");
        scanf("%d", &ans);
        
        //IF "ans" = 1 Then Do Sum
        if (ans == 1)
        {
            result = x + y;
            printf("Result Is %d\n", result);
        }

        //IF "ans" = 2 Then Do Substraction    
        else if (ans == 2)
        {
            result = x - y;
            printf("Result Is %d\n", result);
        }
            
        //IF "ans" = 3 Then Do Multiply
        else if (ans == 3)
        {
            result = x * y;
            printf("Result Is %d\n", result);
        }
            
        //Else Do Division
        else
        {
            result = x / y;
            printf("Result Is %d\n", result);
        }
        
        //Ask User IF They Want To Calculate Again, IF answer Equals To 1 = Yes, Otherwise 0 = No
        printf("Do You Want To Try Again?(1 = Yes / 0 = No): ");
        scanf("%d", &loop);
    }
    printf("Program Terminated,Goodbye!!\n");
    return 0;
}

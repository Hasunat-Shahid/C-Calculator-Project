# include <stdio.h>
#include <math.h>  // include math.h for sqrt function
void mainMenu() { // Function to display main menu
    printf("\n______________________Main Menu________________________");
    printf("\nSelect an operation to perform the calculation in C calculator:");
    printf("\n1.Addition\t\t\t2.Subtraction");
    printf("\n3.Multiplication\t\t4.Division");
    printf("\n5.Square\t\t\t6.Square Root");
    printf("\n7.Factorial\t\t\t8.Even/odd check");
    printf("\n9.Exit\n");
    printf("_________________________________________________________\n");
}

void Addition(){  // Function to add two numbers
    float num1, num2, result;
    printf("You have choosen: Addition");
    printf("\n\nEnter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    result=num1+num2;
    printf("\n\t\t%.2f + %.2f = %.2f\t\t<-Answer\n",num1,num2,result);
}

void Subtraction(){  //Fuction to subtract two numbers
    float num1, num2,  result;
    printf("You have choosen: Subtraction");
    printf("\n\nEnter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    result=num1-num2;
     printf("\n\t\t%.2f - %.2f = %.2f\t\t<-Answer\n", num1, num2,result);
}

void Multiplication(){  // Function to multiply two numbers
    float num1, num2, result;
    printf("You have choosen: Multiplication");
    printf("\n\nEnter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);
    result=num1*num2;
    printf("\n\t\t%.2f * %.2f = %.2f\t\t<-Answer\n", num1, num2,result);
}
    
void Division() {
    float num1, num2, result;

    printf("You have chosen: Division\n\n");

    // Prompt for dividend
    printf("Enter dividend: ");
    scanf("%f", &num1);

    // Loop to ensure non-zero divisor
    do {
        printf("Enter divisor: ");
        scanf("%f", &num2);

        if (num2 == 0) {
            printf("**************************Warning***************************\n");
            printf("Divisor cannot be zero, please try another value\n");
            printf("************************************************************\n");
        }
    } while (num2 == 0);

    // Perform division and print result
    result = num1 / num2;
    printf("\n\t\t%.2f / %.2f = %.2f\t\t<-Answer\n", num1, num2, result);
}

    
void Square(){  // Function to find square of a number
    float num, result;
    printf("You have choosen: Square");
    printf("\n\nEnter a number: ");
    scanf("%f", &num);
    result = num * num;
    printf("\n\t\tSquare of %.2lf = %.2lf\t\t<-Answer\n", num, num * num);

}

void squareRoot() {  // Function to find square root of a number
    double num;
    printf("You have choosen: Square root");
    printf("\n\nEnter a non-negative number: ");
    scanf("%lf", &num);
    if (num < 0) {
        printf("Square root is not defined for negative numbers.\n");
        return;
    }
    double result = sqrt(num);
     printf("\n\t\tSquare Root = %.2f\t\t<-Answer\n", sqrt(num));
}



int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Wrapper function to handle user input for factorial
void Factorial() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }
    printf("%d! = ", num);
    for (int i = num; i > 0; i--) {
        printf("%d", i);
        if (i > 1) {
            printf(" x ");
        }
    }
    printf(" = %d\t\t<-Answer\n", factorial(num));
}


void evenOddCheck() {  // Function to check if a number is even or odd
    float num;
    printf("You have choosen: Even/odd check");
    printf("\n\nEnter a number: ");
    scanf("%f", &num);
    if((int)num % 2 == 0)
        printf("\n\t\t%f is even.\t\t<-Answer\n", num);
    else
         printf("\n\t\t%f is odd.\t\t<-Answer\n", num);
}

int main() {
    printf("*****************************************************************************************\n");
    printf("*****************************************************************************************\n");
    printf("\t\t\t\tCalculator App__by Hasunat Shahid\n");
    printf("\t\t\t\tDeveloped in C programming language\n");
    printf("\t\t\t\tEmail:hasunatshahid@gmail.com\n");
    printf("\t\t\t\tLinkedin: linkedin.com/hasunat-shahid/\n");
    printf("****************************************************************************************\n");
    printf("****************************************************************************************\n");
    int option;  // variable to store user's menu choice
        
      do {
        mainMenu();
        inputRegion:
        printf("\nEnter your choice: ");
        scanf("%d",&option);
    
        switch(option) { // switch statement to handle user's choice
            case 1:
                Addition();
                break;
            case 2:
                Subtraction();
                break;
            case 3:
                Multiplication();
                break;
            case 4:
                Division();
                break;
            case 5:
                Square();
                break;
            case 6:
                squareRoot();
                break;
            case 7:
                Factorial();
                break;
            case 8:
                evenOddCheck();
                break;
            case 9:
                printf("Exicuting Calculator App...");
                break;
            default:
                printf("\n*******************Warning*********************");
                printf("\nIncorrect choice, please choose from 1 to 9\n");
                printf("***********************************************\n");
                goto inputRegion;
                break;
        }
        } while (option!=9);  // loop until user chooses to exit
    return 0;
} 
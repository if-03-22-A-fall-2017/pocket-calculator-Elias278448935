#include <stdio.h>

void display_menu();
void get_operands();
void perform_operation();

int main(int argc, char *argv[])
{
    int operation = 0;
    while(operation != -1)
    {
      display_menu();
      scanf("%d", &operation);
      if(operation != -1)
      {
        while(operation > 4 && operation < 1 && operation != 0)
        {
          printf("Der input ist falsch!");
          scanf("%d", &operation);
        }

        double firstNumber = 0;
        double secondNumber = 0;
        get_operands(&firstNumber, &secondNumber);
        perform_operation(operation, firstNumber, secondNumber);
      }
    }
    return 0;
}
void display_menu()
{
  printf("\nChose one of the following operations: \n”Add (1) Subtract (2) Multiply (3) Divide (4) Stop program (-1)\n");
  printf("Your number: ");
}
void get_operands(double *firstNumber, double *secondNumber)
{
  printf("Please enter the first Number:");
  scanf("%lf", firstNumber);
  printf("Please enter the second Number:");
  scanf("%lf", secondNumber);
}
void perform_operation(int number, double firstNumber, double secondNumber)
{
  switch(number)
  {
    case 1:
    printf("Ergebnis: %lf\n", (firstNumber+secondNumber));
    break;
    case 2:
    printf("Ergebnis: %lf\n", (firstNumber-secondNumber));
    break;
    case 3:
    printf("Ergebnis: %lf\n", (firstNumber*secondNumber));
    break;
    case 4:
    if(secondNumber != 0)
      printf("Ergebnis: %lf\n", (firstNumber/secondNumber));
    else
      printf("Division by Zero");
    break;

  }
}

/* Program in C to create a calculator using user-defined functions;
   Declaring the functions before the main function. */

#include <stdio.h>

int sum(int a, int b)
{
    int total=a+b;
    return total;
}

int diff(int a, int b)
{
    int total=a-b;
    return total;
}

int prod(int a, int b)
{
    int total=a*b;
    return total;
}

int quot(int a, int b)
{
    int total=a/b;
    return total;
}

int main()
{
    int a, b;
    char op;
    
    printf("\n Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("\n Enter the operator: ");
    scanf(" %c", &op);
    
    switch(op)
    {
        case '+': sum(a,b); printf("\n The sum is %d", sum(a,b)); break;
        case '-': diff(a,b); printf("\n The difference is %d", diff(a,b)); break;
        case '*': prod(a,b); printf("\n The product is %d", prod(a,b)); break;
        case '/': quot(a,b); printf("\n The quotient is %d", quot(a,b)); break;
        default: printf("\n Enter two valid numbers and a single operant.");
    }

    return 0;
}

// print functions can be put into a function directly.

#include <stdio.h>

int sum(int a, int b)
{
    int total=a+b;
    printf("The result = %d", total);
    return 0;
}

int diff(int a, int b)
{
    int total=a-b;
    printf("The result = %d", total);
    return 0;
}

int prod(int a, int b)
{
    int total=a*b;
    printf("The result = %d", total);
    return 0;
}

int quot(int a, int b)
{
    int total=a/b;
    printf("The result = %d", total);
    return 0;
}

int main()
{
    int a, b;
    char op;
    
    printf("\n Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("\n Enter the operator: ");
    scanf(" %c", &op);
    
    switch(op)
    {
        case '+': sum(a,b); break;
        case '-': diff(a,b); break;
        case '*': prod(a,b); break;
        case '/': quot(a,b); break;
        default: printf("\n Enter two valid numbers and a single operant.");
    }

    return 0;
}

// the calculator itself can be made into a function.

#include <stdio.h>

void calc(int a, char op, int b)
{
    switch(op)
    {
        case '+': printf("\n Sum = %d", a+b); break;
        case '-': printf("\n Difference = %d", a-b); break;
        case '*': printf("\n Product = %d", a*b); break;
        case '/': printf("\n Quotient = %d", a/b); break;
    }
}

int main()
{
    int a, b;
    char op;
    
    printf("\n Enter two numbers: ");
    scanf("%d%d", &a, &b);
    
    printf("\n Enter the operator: ");
    scanf(" %c", &op);
    
    calc(a,op,b);

    return 0;
}

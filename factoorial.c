#include <stdio.h>

int sumofFactors(int num, int i) 
{
    if (i == 1) 
	{
        return 1; 
    }
	 else if (num % i == 0)
	  {
        return i + sumofFactors(num, i - 1) + num / i;
    }
	 else 
	 {
        return sumofFactors(num, i - 1);
    }
}

int main() 
{
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number < 0)
	 {
        printf(" enter a positive integer.\n");
        return 1;
    }

    int result = sumofFactors(number, number);
    printf("Sum of factors of %d is: %d\n", number, result);

    return 0;
}

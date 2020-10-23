#include "lab6.h"

extern const int MAX;

int readNum()
{
	int num=142;
	printf("Enter a number greater than 100: ");
    scanf("%d", &num);
    while(num < 100)
    {
        printf("error: Pick something greater than 100: ");
        scanf("%d", &num);
    }

	return num;     
}// end method

int menu()
{
    int choice = 1;
    do
    {
        if(choice < 1 || choice > 7)
            printf("\nYou entered an invalid menu choice.\n");
            
        printf("Menu choices are:\n1) Display the array\n2) Delete a single value from the array (by value)\n3) Compute the mean of the array\n4) Compute the median of the array\n5) Compute the midpoint of the array\n6) Compute the standard deviation of the array\n7) Quit\nChoose: ");
        scanf("%d", &choice);

    }while(choice < 1 || choice > 7);

    return choice;
}// end method







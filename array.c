#include "array.h"
extern const int MAX;

/**
 * The fillArray method fills fills the array by 
 * asking the user to enter an integer.
 *
 * @param myArray Representing the array of integers
 * @param num Representing the number of elements in the array
 */
void fillArray(int * myArray, int num)
{
    int i;
	for(i = 0; i < MAX; i++)
    {
        myArray[i] = rand() % (num - 1 + 1) + 1;

    }

}// end method


/**
 * The deleteSingleValue method first prompts the user to enter a value that should be deleted.<br>
 * Next the method searches through the array to determine if that value was in the array.<br>
 * If the value is not in the array, a message "Value NOT found" is displayed and current number of actual elements is returned.<br>
 * If the value is found it is removed from the array by shifting all elements to the right of the number being deleted left <br>
 * Once the shift has happened a zero is placed in the last index<br>
 *
 * @param myArray Representing the array of integers
 * @param length Representing the actual number of elements in the array
 * @return int Representing the new actual number of elements in the array
 */
int deleteSingleValue(int * myArray, int length)
{
	int deleteChar, i, j, flag = 0;
    printf("Enter number to delete: ");
    scanf("%d", &deleteChar);

    for(i = 0; i < length; i++)
    {
        if(myArray[i] == deleteChar)
        {
            flag = 1;
            for(j = i; j < length; j++)
            {
                myArray[j] = myArray[j + 1];

            }

            myArray[length-1] = 0;
            length--;
        }
        if(flag == 1)
            i = length;
    
    }

    if(flag == 0)
        printf("Value NOT found\n");
    
    return length;
}// end method



/**
 * The printArray method prints the array in the following fashion<br>
 * [value, value, value, ..., value]
 *
 * @param myArray Representing the array of integers to be printed
 * @param length Representing the actual number of elements in the array
 */
void printArray(int * myArray, int length)
{
    int i;
    printf("[");
    for(i = 0; i < length; i++)
    {
        if(i == length-1)
            printf("%d]\n", myArray[i]);
        else
            printf("%d, ", myArray[i]);

    }

}// end printArray


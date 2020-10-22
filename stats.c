#include "stats.h"
#include "sort.h"
#include <math.h>
extern const int MAX;

double computeMean(int * myArray, int length)
{
	return 0;
      
}// end method


void printResults(char * type, double result)
{
	printf("the results for %s are %lf\n", type, result);
}


double computeMedian(int * myArray, int length)
{
	selectionSort(myArray, length);
	
    return 1;
}


double computeMidpoint(int * myArray, int length)
{
    return 1;
}
   

double computeStdDev(int * myArray, int length)
{
	int temp[MAX];
	double theMean = computeMean(myArray, length);
	return 1;
}


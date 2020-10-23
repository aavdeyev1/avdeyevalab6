#include "stats.h"
#include "sort.h"
#include <math.h>
extern const int MAX;

double computeMean(int * myArray, int length)
{
    int i;
    int sum;
    double mean = 0.0;
    for(i = 0; i < length; i++)
        sum = sum + myArray[i];
    if (length != 0)
        mean = (double) sum / (double) length;
	return mean;
      
}// end method


void printResults(char * type, double result)
{
	printf("the results for %s are %lf\n", type, result);
}


double computeMedian(int * myArray, int length)
{
	int i1, i2;
    double median;
    selectionSort(myArray, length);

    if (length % 2 == 0)
    {
        i1 = length / 2;
        i2 = i1 - 1;
        median = (double) (myArray[i1] + myArray[i2]) / 2;
    }
    else
        median = myArray[length / 2];

    return median;
}


double computeMidpoint(int * myArray, int length)
{
    selectionSort(myArray, length);
    double midpoint;
    midpoint = (double) (myArray[length - 1] - myArray[0]) / 2;

    return midpoint;
}
   

double computeStdDev(int * myArray, int length)
{
	int temp[MAX];
	double theMean = computeMean(myArray, length), stdDev;
    int i, j, k, sum;

    for(i = 0; i < length; i++)
        temp[i] = (myArray[i] - theMean) * (myArray[i] - theMean);
    
    for(k = 0; k < length; k++)
        sum = temp[k] + sum;

    stdDev = sqrt((double) sum / (length));

	return stdDev;
}


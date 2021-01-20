/*  Program to find the weight of an Elephant Seal
    January 11th 2021
*/ 
#include <stdio.h>
#include<stdlib.h> //For reading the file

int main(void)
{
    FILE *ifp;
    
    //Reading the data  
    ifp = fopen("filepath/filename","r");
    
    //Initialize the variables
    int currentWeight, sum; // the current data point that we are on
    double timesRun = 0.0;
    //  sum is the sum of weights, and timesRun is to track how many data points are in the file
    while (fscanf(ifp, "%d\t",&currentWeight) != EOF){
        sum += currentWeight;
        timesRun += 1.0;
    }
    fclose(ifp);
    printf("The average weight is %lf\n\n", sum/timesRun); // for average calculation
    return 0;
}
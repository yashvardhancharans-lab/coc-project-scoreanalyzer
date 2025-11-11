#include <stdio.h>

float findMean(int scores[], int size)          // mean / (average) score nikal lege
{
    int sum = 0;                                    
    for (int i = 0; i < size; i++)              // Loop through all scores to calculate sum using concept of loop with using array
    {   
        sum = sum+ scores[i];
    }
    float mean;
    mean=sum/size;
    return mean;
}

int findHighest(int scores[], int size)         // to find  highest score 
{
    int highest = scores[0];                    // let assume first score is highest =first value store in array is consider as highest
 for (int i = 1; i < size; i++) {            // Loop for all the scores to find the maximum
        if (scores[i] > highest) {
            highest = scores[i];
        }
}
return highest;
}

int findLowest(int scores[], int size)           // Function to find the lowest score
 {
    int lowest = scores[0];                      // let assume first score is lowest =first value store in array is consider as lowest
    for (int i = 1; i < size; i++) {             // Loop for all the numbers to find lowest
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }

    
    return lowest;
}

int main() {
    int n;
    printf("How many student scores do you want to enter: ");      // Ask user for input for number of scores
    scanf("%d", &n);
    
    int scores[n];                                                // Declare array to store number of students
    
    printf("\nnumber of scores enter %d:\n", n);                   //  loop: Read scores from user
    for (int i = 0; i < n; i++) {
        printf("number of %d student: ", i + 1);
        scanf("%d", &scores[i]);
    }
    
    float average = findMean(scores, n);                          // Call  functions for calculating mean,highest,lowest
    int highest = findHighest(scores, n);
    int lowest = findLowest(scores, n);
    
    printf("Class Average: %.3f\n", average);     // print average 
    printf("Highest Score: %d\n", highest);       // print highest 
    printf("Lowest Score: %d\n", lowest);         // print lowest
    
    return 0;
} 

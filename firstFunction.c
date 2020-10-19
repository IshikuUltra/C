#include <stdio.h>

float average(int length, int array[]);
int main(void) 
{
    int s = 0;// when you set a variable by int s; s=3032923
    int f = 0;//same here.

    printf("Enter number of scores: ");
    int n = scanf("%d", &f); //why does n have a val=600k

    int scores[n]; // dynamic variable assignment
    for (int i=0; i < n-1; i++){ // if i hard code 3 then program runs 3 times, why no work dynamically with n?
        scores[i] = printf("Enter a score: "); 
        scanf("%d", &s); //why does program not stop asking for input after n loops?
    };
    printf("Average: %f.2", average(n, scores));
    return 0; // 0=no error, 1=error./
}

float average(int length, int array[])
{ //length == n, array.values = scores[0]-scores[n]
    int sum = 0;
    for (int i=0; i < length; i++){
        sum += array[i];
    }
    return sum / length; //casting, technically dont need to cast both. 
}

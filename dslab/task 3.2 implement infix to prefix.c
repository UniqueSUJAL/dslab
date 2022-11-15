#include<stdio.h>



void findNextGreaterElements(int input[], int n)
{
    // do for each element
    for (int i = 0; i < n; i++)
    {
        // keep track of the next greater element for element `input[i]`
        int next = -1;
 
        // process elements on the right of element `input[i]`
        for (int j = i + 1; j < n; j++)
        {
            // break the inner loop at the first larger element on the
            // right of element `input[i]`
            if (input[j] > input[i])
            {
                next = input[j];
                break;
            }
        }
 
        printf("%d ", next);
    }
}
 
int main(void)
{
    int input[] = { 2, 7, 3, 5, 4, 6, 8 };
    int n = sizeof(input) / sizeof(input[0]);
 
    findNextGreaterElements(input, n);
 
    return 0;
}

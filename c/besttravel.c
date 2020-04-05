#include <stdio.h>

/**
 * ls[] - Input Array 
 * data[] - Temporary array to store current combination 
 * start & end - Staring and Ending indexes in arr[] 
 * index - Current index in data[] 
 * r - Size of a combination to be printed 
 * result - the biggest sum to return
 * t - desired sum
*/
void calculateSum(int ls[], int data[], int start, int end, int index, int r, int *result, int t) { 
    int i, j, s;

    // reached the number of desired cities 
    if (index == r) 
    { 
        s = 0;
        for (j = 0; j < r; j++) {
            printf("%d ", data[j]);
            s += data[j];
        }
        printf(" = %d\n", s); 

        // cehcks if we need to update the result
        if (s > *result && s <= t) *result = s;

        return; 
    } 
  
    // build combinations
    for (i = start; i <= end && end-i+1 >= r-index; i++) 
    { 
        data[index] = ls[i]; 
        calculateSum(ls, data, i+1, end, index+1, r, result, t); 
    } 
} 


/**
 * Finds and returns biggest sum of possible distance by given max distance
 * t - maximum sum of distances, integer >= 0
 * k - number of towns to visit, k >= 1
 * ls - list of distances, all distances are positive or null integers 
 *      and this list has at least one element
 * szls - list size
 */
int chooseBestSum(int t, int k, int ls[], int szls) {
    int result = -1;
    
    // if we want to visit more towns than possible
    if (k > szls) return result;

    // A temporary array to store all combination one by one 
    int data[k]; 
  
    // Print all combination using temprary array 'data[]' 
    calculateSum(ls, data, 0, szls-1, 0, k, &result, t); 

    return result;
}

int main() {
    int result;
    {
        int ts[] = {50, 55, 57, 58, 60};
        result = chooseBestSum(174, 3, ts, 5);
        printf("Result: %d\r\n", result);
    }
    {
        int ts[] = {91, 74, 73, 85, 73, 81, 87};
        result = chooseBestSum(230, 3, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(331, 2, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(331, 4, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(331, 5, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(331, 1, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(700, 8, ts, 7);
        printf("Result: %d\r\n", result);
        result = chooseBestSum(700, 6, ts, 7);
        printf("Result: %d\r\n", result);
    }
    {
        int ts[] = {50, 55, 56, 57, 58};
        result = chooseBestSum(163, 3, ts, 5);
        printf("Result: %d\r\n", result);
    }
    {
        int ts[] = {50};
        result = chooseBestSum(163, 3, ts, 1);
        printf("Result: %d\r\n", result);
    }
    return 0;
}
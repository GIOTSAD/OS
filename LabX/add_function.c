#include <stdio.h>

//Function that takes 3 integers by reference and returns their sum
void add(int *a, int *b, int *c, int *result) {
    *result = *a + *b + *c;
}

int main() {
    int x = 5, y = 10, z = 15, sum;
    // Enter three integers
    printf("Enter 3 integers:");
    scanf("%d %d %d", &x, &y, &z);

    //Call the function
    add(&x, &y, &z, &sum);

    //Output the result
    printf("The Sum of %d, %d and %d is: %d\n",x, y, z, sum);
    return 0;
}

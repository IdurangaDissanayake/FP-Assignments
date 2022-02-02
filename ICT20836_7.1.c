//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2);

int main() {
    
    int n1, n2;

    printf("\nEnter your two integer numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("\nThe Greatest Common Divisor (GCD) of two numbers is: %d\n", gcd(n1, n2)); // function call

    return 0;
}

//function for find GCD
int gcd(int n1, int n2) {
    if (n2 != 0)
        return gcd(n2, n1 % n2);
    else
        return n1;
}
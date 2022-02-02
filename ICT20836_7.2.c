//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <stdlib.h>

int find_lcm(int, int);

int main() {

    int n1, n2, lcm;

    printf("\nEnter your two integer numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("\nThe Least Common Multiple (LCM) of two numbers is: %d\n", find_lcm(n1,n2));// function call
    
    return 0;
}

// function for find lcm
int find_lcm(int a, int b) 
{
    static int temp = 1;    
    
    if(temp%a == 0 && temp%b == 0)
    {
        return temp;
    }
    else
    {
        temp++;
        find_lcm(a,b);
        return temp;
    }
}
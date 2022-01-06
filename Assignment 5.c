//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <math.h>
int main(void) {
  
// question 01

  printf("Question 01 \n");
  int no;
  int sum=0;
  
  printf("\nEnter a positive integer: ");
  scanf("%d",& no);
  int n1 = no;

  do{
  sum += no;
    no--; 
  }
  while (no>=0);

  printf("\nThe Sum of range 0 - %d is: %d\n",n1,sum);




// question 02
printf("\n...................................................\n\nQuestion 02 \n");

int num;
unsigned long long int fac=1;

printf("\nEnter a positive integer: ");
scanf("%d",&num);
int num1=num;
if (num>0){
  

  while(num>=1){
    fac *= num;
    num --; 
  }

  printf("\nThe factorial of %d is: is: %llu\n",num1,fac);
}
else
printf("\nEntered Number is Negative");





// question 03
printf("\n...................................................\n\nQuestion 03 \n");

  int n;
     int i; 
     int flag = 1;
 
    printf("\nEnter a number: ");
    scanf("%d", &n);
 
    
    for (i = 2; i <= sqrt(n); i++) {
 
        // If n is divisible by any number between 2 and n/2, it is not prime
         
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
 
    if (n <= 1)
        flag = 0;
 
    if (flag == 1) {
        printf("\n%d is a prime number\n", n);
    }
    else {
        printf("\n%d is not a prime number \n", n);
    }



  return 0;
}
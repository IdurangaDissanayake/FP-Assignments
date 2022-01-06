//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>

int main(void) {

  int no;
  //geting user input
  printf("\nEnter Five Digit Integer Number :-");
  scanf("%d",&no);

  printf("\nThe digits of your number from LSD to MSD\n__________________________________________\n");
  
  //calculaton of LSD to MSD
  int first = no%10;
  int second = (no%100)/10;
  int third = (no%1000)/100;
  int fourth = (no%10000)/1000;
  int fifth = (no/10000);
  // Getting sum of numbers
  int sum = (first+second+third+fourth+fifth);

  //print numbers
  printf("\nFirst Digit  : %d\n",first);
  printf("Second Digit : %d\n",second);
  printf("Third Digit  : %d\n",third);
  printf("Fourth Digit : %d\n",fourth);
  printf("Fifth Digit  : %d\n",fifth);
  
  printf("__________________________________________\n");
  
  //print sum
  printf("\nSum of all digits: %d\n",sum);


  return 0;
}
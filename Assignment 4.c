//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>

int main(void) {
  
    int list;
    int wid;
    float deposit;
    float balance=99999;

  printf("\nWelcome to the ABC Bank...!!!\n");

  printf("\nSelect one of the options from following list and enter the number\n\n");
  printf("1. Deposit \n2. Withdraw \n3. Check Balance\n");
  printf("\nYour choice: ");
  
  scanf("%d",&list);

  //decision control with switch option
  switch (list){
    case 1:
      printf("\nEnter amount to deposit: ");
      scanf("%f",&deposit);

      balance += deposit; 
      printf("Deposit is Successful\nYour current balance is: %.2f\n",balance);
    break;

    case 2:
      printf("\nEnter amount to withdraw: ");
      scanf("%d",&wid);

      if (wid<balance){
          balance -= wid;
          printf("Withdrawal is Successful\nYour current balanca is: %.2f\n",balance);
        }
      else{
        printf("Your balance is insufficient to withdraw that amount of money\n");
      }  
    break;

    case 3:
      printf("\nYour balance is: %.2F\n",balance);
    break;

    default:
      printf("\nSORRY...\nYour choice is incorrect\n");
    break;

  }
  

  return 0;
}
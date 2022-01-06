//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <stdlib.h>

int deposit ();
int withdraw ();
void balcheck ();

int main(void) {

  int list;
  int dep;
  int wid;
  int ret;
  int bal=999;

  printf("\nWelcome to the ABC Bank...!!!\n");

  printf("\nSelect one of the options from following list and enter the number\n\n");
  printf("1. Deposit \n2. Withdraw \n3. Check Balance\n");
  printf("\nYour choice: ");
  
  scanf("%d",&list);

   //decision control with switch option
  switch (list){
    case 1:
      printf("\nEnter amount to deposit: ");
      scanf("%d",&dep);
      ret = deposit (bal,dep); //calling the deposit function
      printf("Deposit is Successful\nYour current balance is: %d\n",ret);
    
    break;

    case 2:
      printf("\nEnter amount to withdraw: ");
      scanf("%d",&wid);

      if (wid<bal){
        ret = withdraw (bal,wid); //calling the deposit function
        printf("Withdrawal is Successful\nYour current balance is: %d\n",ret);
      }
      else{
        printf("Your balance is insufficient to withdraw that amount of money\n");
      }  
    break;

    case 3:
      
      balcheck (bal); //calling the deposit function

    break;

    default:
      printf("\nSORRY...\nYour choice is incorrect\n");
    break;

  }

  return 0;
}



//Deposit function

int deposit (int x , int y)
{  
    x += y; 
    return x;
}

//Withdraw function

int withdraw (int a, int b)
{
  
      a -= b;
    return a;
  }

//balancecheck function

void balcheck (int z)
{

  printf("\nYour balance is: %d \n",z);

}

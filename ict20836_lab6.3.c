//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <stdlib.h>

int add ();
int sub ();
int mul ();
int dvd ();
int mod ();

int main(void) {

  for(;;){ //infinite loop with 'for' oparation
  
  int menu;
  int n1,n2;
  int ret;

  printf("\n-- Menu(Oparations) --\n");
  printf("\n 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n 5. Modulus\n\n");

  printf("Oparation Number: ");
  scanf("%d",&menu);

  printf("Enter Two Numbers: ");
  scanf("%d %d",&n1,&n2);

  switch(menu){

    case 1:
      ret = add (n1,n2);
      printf("Additiona of two numbers: %d\n",ret);
    break;

    case 2:
      ret = sub (n1,n2);
      printf("Subtraction of two numbers: %d\n",ret);
    break;

    case 3:
      ret = mul (n1,n2);
      printf("Multipication of two numbers: %d\n",ret);
    break;

    case 4:
      ret = dvd (n1,n2);
      printf("Division of two numbers: %d\n",ret);
    break;

    case 5:
      ret = mod (n1,n2);
      printf("Modulus of two numbers: %d\n",ret);
    break;

    default:
      printf("\nSORRY...\nYour choice is incorrect\n");
    break;

  }
  }
  return 0;
}

//Functions

int add(int x,int y){
  int add = x+y;
  return add;
}

int sub(int x,int y){
  int sub = x-y;
  return sub;
}

int mul(int x,int y){
  int mul = x*y;
  return mul;
}

int dvd (int x,int y){
  int div = x/y;
  return div;
}

int mod(int x,int y){
  int mod = x%y;
  return mod;
}
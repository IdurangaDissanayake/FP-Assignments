//D.M.I.H Dissanayake
//ICT/20/836

#include <stdio.h>
#include <stdlib.h>

float celtofah (float x);
float fahtocel (float y);

int main(void) {

  int option;
  float c;
  float f;
  float ret;

  printf("\n--- Celsius - Fahrenheit Converter ---\n");
  printf("\nSelect one of the options you want to convert\n\n");
  printf("1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \n");
  printf("\nYour choice: ");
  
  scanf("%d",&option);


  //decision control with switch option
  switch (option){

    case 1:
      printf("\nEnter Celsius Value: ");
      scanf("%f",&c);
      ret = celtofah (c); //calling the function
      printf("\nFahrenheit Value: %.3f\n",ret);
    
    break;

    case 2:
      printf("\nEnter Fahrenheit Value: ");
      scanf("%f",&f);
      ret = fahtocel (f); //calling the function
      printf("\nCelsius Value: %.3f\n",ret);
      
    break;

    default:
      printf("\nSORRY...\nYour choice is incorrect\n");
    break;

  }


  return 0;
}


//Celsius to Fahrenheit function
float celtofah (float x){
  float f;
  f = (x * 9/5) + 32;
  return f;
}

//Fahrenheit to Celsius function
float fahtocel (float y){
  float c;
  c = (y-32) * 5/9;
  return c;
}
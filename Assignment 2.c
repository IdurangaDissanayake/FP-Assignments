//D.M.I.H Dissanayake
//ICT/20/836


#include <stdio.h>

int main() {

//Task 01
  printf("-Task 01-\n\n");

  int indexNumber = 45;
  char bloodType = 'A';
  float weight = 62.6;
  float height = 169.5;
  
  printf("Body Condition details of Index Number %d\n\n",indexNumber);
  printf("-----------------------------------------\n");
  printf("Blood Type: %c \nWeight: %.1f \nHeight: %.1f\n",bloodType,weight,height);
 
 

//Task 02

  printf("\n\n\n-Task 02-\n\n");

  float radius;
  float volume;

  printf("Enter Radius of the sphere:- ");
  scanf("%f",&radius);

  volume = (4*3.14*radius*radius*radius)/3;

  printf("The volume of the sphere is:- %.2f\n",volume);



  return 0;
}
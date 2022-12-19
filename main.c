#include <stdio.h>
#include<stdlib.h>

int main(void) {
 int i, n,x,y;
   time_t t;
   
   n = 3;
   
   /* Intializes random number generator */
   srand(time(&t));
   y=rand()%10; 

   /* Print 5 random numbers from 0 to 9 */
  printf("*** Guess the Number ***\n");
   for( i = 0 ; i < n ; i++ ) {
      printf("Attempt %d:\n",i+1);
      printf("What might be the magic number?:");
      scanf("%d",&x);
      if(x==y)
      {
        printf("Correct!!!!\n");
        break;
      }
      else
        printf("%d more attempts left\n",3-(i+1));
   }
  printf("You lost!!! The magic number was %d\n",y);
  return 0;
}
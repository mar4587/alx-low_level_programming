#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
        
{       
        int n;
        
        srand(time(0));

       n = rand()- RAND_MAX / 2 ;

       if (n > 0) 
       {
       printf("The number %d is ", n);
       } 
       else if (n== 0) 
       {
       printf("%d is zero\n", n);
       } 
       else 
       {
       printf("%d is negative\n", n);
       } 
       else 
       {
       return (0);




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function to generate a random number
 *
 * return: Alway 0 (success)
 */ 
int main(void)
{
          int n;

        srand(time(0));

       n = rand()- RAND_MAX / 2 ;

       if (n > 0)
       {
       printf("The number %d is ", n);
       }
       else if (n== 0)
       {
       printf("%d is zero\n", n);
       }
       else
       {
       printf("%d is negative\n", n);
       }
       else
}


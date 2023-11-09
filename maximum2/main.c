/* This C program is printing the maximum of all integers taken from keyboard until the user enters 0.
 -----------
 Example Output:
 >Enter 0 to exit!
 Enter an integer: 7
 Enter an integer : 93
 Enter an integer : 23
 Enter an integer: 0
 The largest integer = 93
 ! ! ! THE END ! ! !
 -----------
 Created by Mehmet Akif Duran in 9.11.2023.
 */

#include <stdio.h>

int main (void) {
    //1. Variable Declarations (& initializations)
    
    int number,largest;
    
    //2. Executable Statements.
    printf("> Enter '0' to exit \n");
    printf("Enter an integer: \n");
    scanf("%d", &number);
    
    largest = number;
    
    while(number != 0){
        if(number>largest)
            largest = number ;
        printf("Enter an integer: \n");
        scanf("%d", &number);
    }
        
   if(largest != 0 )
       printf("The largest integer = %d\n", largest);
       printf("! ! ! THE END ! ! !");
    
   
    return 0;
}

#include <stdio.h>
int main()
{
    int arrayIntNumbers[] = {9,32,34,49,52};
    
    printf("arrayIntNumbers [0] is %d\n", arrayIntNumbers[0]);
      
    // arrayIntNumbers[100] and arrayIntNumbers[-3] are out of bound
    printf("arrayIntNumbers[100] is %d\n", arrayIntNumbers[100]);
    
     printf("arrayIntNumbers[-3] is %d\n", arrayIntNumbers[-3]);
    
    
    return 0;
}

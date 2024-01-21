#include <stdio.h>

int incrementBy3(int value){
  return value + 3 ; 
}

int add(int a , int b ){
  return a + b  ; 
}

int main(void){

 printf("Hello, World); 

 printf("%d",incrementBy3(5));  // it prints 8 ,
 printf("%d + %d = %d", 3,4, add(3,4)); 

return 0 ; 
}

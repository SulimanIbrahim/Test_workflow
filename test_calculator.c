#include <stdio.h>
#include "add.h"


void     test_add(int num1, int num2, int result ,int test_num);
int main(){

   test_add(2, 3, 5 ,1);
   test_add(-2, 3, 1 ,1);

}

void     test_add(int num1, int num2, int result ,int test_num){
     if (add_number(num1, num2) == result)
        printf("%d Test passed 😀\n", test_num);
    else 
        printf("%d Test failed 😱\n", test_num);
}
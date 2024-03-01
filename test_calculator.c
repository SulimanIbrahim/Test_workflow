#include <stdio.h>
#include "add.h"


void     test_add(int num1, int num2, int result ,int test_num, char * message);
void     test_Multiplu(int num1, int num2, int result ,int test_num, char * message);
int main(){

   test_add(2, 3, 5 ,1, "test add positive number");
   test_add(-2, 3, 1 ,2, "test add positive number");
   test_Multiplu(2, 3, 6 ,3, "test Multiply positive number");

}

void     test_add(int num1, int num2, int result ,int test_num, char * message){
     if (add_number(num1, num2) == result)
        printf("%d Test passed %s  😀\n",  test_num, message);
    else 
        printf("%d Test failed %s 😱\n",  test_num, message);
}

void     test_Multiplu(int num1, int num2, int result ,int test_num, char * message){
     if (mult_number(num1, num2) == result)
        printf("%d Test passed  %s 😀\n", test_num, message);
    else 
        printf("%d Test failed  %s 😱\n",  test_num, message);
}
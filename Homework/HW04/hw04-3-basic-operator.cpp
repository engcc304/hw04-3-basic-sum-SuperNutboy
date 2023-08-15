
/*
    จงกรอกหมายเลขทั้งหมดจำนวน 3 ค่า และแสดงผลรวมดังแสดงดังผลลัพธ์ด้านล่าง
    
    Test case:
        2 3 1
    Output:
        Answer = 6

    Test case:
        4 -1 3
    Output:
        Answer = 6
*/
#include <stdio.h>

int main (){

    int numst ;
    int numsec ;
    int numth ;
    int sum ;

    printf("Please enter three numbers. = ");
    scanf("%d %d %d",&numst ,&numsec ,&numth);
    sum = numst + numsec + numth ;
    printf("%d",sum);
}
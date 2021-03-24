#include <stdio.h>

struct student1{
    char lastName[13];      //13bytes
    int studentId;          //4bytes
    short grade;            //2bytes
};

int main(){
    printf("[----- [Minjung Seo] [2020039085] -----]\n");

    struct student1 pst;

    //lastName 4bytes씩*4 (나머지 padding) >>16bytes , studentId >>4bytes, grade >> 2bytes (나머지 padding)
    //16+4+4=24
    printf("size of student = %ld\n",sizeof(struct student1));   
    printf("size of int = %ld\n",sizeof(int));          // int형 4bytes
    printf("size of short = %ld\n",sizeof(short));      //short형 2bytes

    return 0;
}
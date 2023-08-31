#include <stdio.h>
#include <string.h>
struct node
{

    int age;
    char grade;
    struct node *ptr;
};
int main()
{
    struct node a, b, c, d;

    a.age = 15;
    a.grade = 'A';
    a.ptr = NULL;

    b.age = 50;
    b.grade = 'B';
    b.ptr = NULL;

    c.age = 25;
    c.grade = 'C';
    c.ptr = NULL;

    d.age = 52;
    d.grade = 'D';
    d.ptr = NULL;

    a.ptr = &b;
    b.ptr = &c;
    c.ptr = &d;
    d.ptr = &a;

    printf("\nA ==> Age : %d , GRADE : %c ", d.ptr->age, d.ptr->grade);
    printf("\nB ==> Age : %d , GRADE : %c ", a.ptr->age, a.ptr->grade);
    printf("\nC ==> Age : %d , GRADE : %c ", b.ptr->age, b.ptr->grade);
    printf("\nD ==> Age : %d , GRADE : %c ", c.ptr->age, c.ptr->grade);
}
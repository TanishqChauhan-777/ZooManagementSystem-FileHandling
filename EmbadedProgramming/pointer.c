#include <stdio.h>
#include <string.h>

 struct Student
 {
    char name[50];
    int age;
    double marks;
 };

int main()
{

    struct Student student;

    strcpy(student.name, "Tanishq");
    student.age = 22;
    student.marks = 99.9;

    struct Student *ptr = &student;

    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("Marks: %.1f\n", ptr->marks);
    


    
     
    
    return 0;
}
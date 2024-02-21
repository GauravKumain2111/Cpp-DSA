#include <stdio.h>
#include <string.h>
\typedef struct Student {
    char name[100];
    char class[3];
    int rollno;
}chomu;

int main() {
    struct Student Gaurav;xa

    // Use strcpy to copy strings into character arrays
    strcpy(Gaurav.name, "Gk");
    strcpy(Gaurav.class, "A");

    Gaurav.rollno = 19;

    // Print the struct members
    printf("Name: %s\n", Gaurav.name);
    printf("Class: %s\n", Gaurav.class);
    printf("Roll No: %d\n", Gaurav.rollno);


    chomu a;
    strcpy(a.name,"OK");
    strcpy(a.class,"A");
    a.rollno=20;
    printf("Name: %s\n", a.name);
    printf("Class: %s\n", a.class);
    printf("Roll No: %d\n", a.rollno);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Student
{
   int id;
   char *name;
   float grade;
}Stu;


union temp
{
   /* data */
   int a;
   int b;
};


void main()
{
   Stu s1;

   s1.id = 1;
   s1.grade = 12.7;
   //char name[20] = "Hosam"; // compilation time
   char *n = (char *)malloc(20 * sizeof(char)); // Run time;
   strcpy(n, "Hosam");
   s1.name = n;
   printf("Student Id: %d\nStudent Name: %s\nStudent Grade: %.2f", s1.id, s1.name, s1.grade);
   free(n);

}

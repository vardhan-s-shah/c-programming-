#include <stdio.h>
#include <string.h>
struct Student {
    int roll;
    char name[50];
    char course[50];  // 50 is enough for the particular subject / aim 
    char major[50];
    char minor[50];
};
void printAllNames(struct Student s[], int n) {
  printf("\nList of Students:\n");
 for(int i = 0; i < n; i++)
  printf("%s\n", s[i].name);
}
void printByRoll(struct Student s[], int n, int rollNo) {
for(int i = 0; i < n; i++) {
   if(s[i].roll == rollNo) {
       printf("\nStudent Details:\n");
    printf("Roll No: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n"
s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("No student found with Roll No %d\n", rollNo);
}
int main() {
    struct Student s[10];
    int i, rollSearch;
    for(i = 0; i < 10; i++) {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Roll No: "); scanf("%d", &s[i].roll);
        printf("Name: "); scanf("%s", s[i].name);
        printf("Course: "); scanf("%s", s[i].course);
        printf("Major: "); scanf("%s", s[i].major);
        printf("Minor: "); scanf("%s", s[i].minor);
    }
    printAllNames(s, 10);

    printf("\nEnter Roll No to search: ");
    scanf("%d", &rollSearch);
    printByRoll(s, 10, rollSearch);

    return 0;
}

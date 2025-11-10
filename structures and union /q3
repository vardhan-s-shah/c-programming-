#include <stdio.h>

struct Student {
    char name[150];  
    int roll;
    float phy, math, chem, total;
};

int main() {
    struct Student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks in Phy, Mat, Che: ");
    scanf("%f %f %f", &s.phy, &s.math, &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("Student Details\n");
    printf("Roll No: %d\nName: %s\nPhysics: %.4f\nMaths: %.4f\nChemistry: %.4f\nTotal: %.4f\n",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

}

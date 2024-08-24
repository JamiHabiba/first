#include <stdio.h>
#include <string.h>

// Define the structure
struct student {
    char name[50];
    int roll;
}ab={"oitik", 71};

int main() {
    // Create an instance of the structure
    struct student st[10];

    // Assign values to the structure members
    strcpy(st[0].name, "Habiba"); // Use strcpy to copy string to the character array
    st[1].roll = 10;

    // Print the values of the structure members
    printf("Student Name: %s\n", st[0].name);
    printf("Student Roll Number: %d\n", ab.roll);

    return 0;
}

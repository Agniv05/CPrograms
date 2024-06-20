#include <stdio.h>

// Define the Calculate structure with a function pointer
typedef struct Calculate {
    void (*area)(struct Calculate*, int, int);
} Calculate;

// Basic area calculation function
void basic_area(Calculate* this, int l, int b) {
    printf("Basic Area of rectangle : %d\n", l * b);
}

// Define the Area structure inheriting from Calculate
typedef struct Area {
    Calculate base; // Base structure
} Area;

// Advanced area calculation function
void advanced_area(Calculate* this, int l, int b) {
    // Call the basic area function with fixed values
    basic_area(this, 2, 3);
    printf("Advance Area of rectangle : %d\n", l * b);
}

// Main function
int main() {
    // Create an Area object and set its function pointer
    Area obj;
    obj.base.area = advanced_area;

    // Call the area function
    obj.base.area((Calculate*)&obj, 10, 20);

    return 0;
}

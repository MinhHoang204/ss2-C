#include <stdio.h>

int main() {
    const float PI = 3.14;  // Hang so PI voi gia tri 3.14
    float radius = 6.0;     // Ban kinh hinh tron  

    float circumference = 2 * PI * radius;   // Chu vi = 2 * PI * ban kinh  
    float area = PI * radius * radius;       // Dien tich = PI * ban kinh^2
 
    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}

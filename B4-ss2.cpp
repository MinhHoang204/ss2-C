#include <stdio.h>

int main() {
    float side = 5.0; // canh hinh vuong 

    float perimeter = 4 * side; // Chu vi = 4 * canh
    float area = side * side;   // Dien tich = canh * canh
 
    printf("Canh cua hinh vuong: %.2f\n", side);
    printf("Chu vi cua hinh vuong: %.2f\n", perimeter);
    printf("Dien tich cua hinh vuong: %.2f\n", area);

    return 0;
}

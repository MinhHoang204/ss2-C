#include <stdio.h>

int main() { 
    int num1 = 1; // Bien so nguyen thu nhat 
    int num2 = 2; // Bien so nguyen thu hai 

    int sum = num1 + num2;         // tong 
    int difference = num1 - num2;  // hieu 
    int product = num1 * num2;     // tich
    int quotient = num1 / num2;    // thuong (lay phan nguyen)
      
    printf("Tong cua %d và %d là: %d\n", num1, num2, sum);
    printf("Hieu cua %d và %d là: %d\n", num1, num2, difference);
    printf("Tich cua %d và %d là: %d\n", num1, num2, product);
    printf("Thuong cua %d và %d là: %d\n", num1, num2, quotient);
    
    return 0;
}


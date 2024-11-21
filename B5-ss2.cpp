#include <stdio.h>

int main() {
    int length = 5; // chieu dai 
    int width = 4;  // chieu rong

    // Tinh chu vi và dien tich hinh chu nhat
    int girth = 2 * (length + width); // Chu vi = 2 * (chieu dài + chieu rong)
    int area = length * width;        // Dien tich = chieu dai * chieu rong

    // In ket qua ra man hinh
    printf("Chieu dai cua hinh chu nhat: %d\n", length);
    printf("Chieu rong cua hinh chu nhat: %d\n", width);
    printf("Chu vi cua hinh chu nhat: %d\n", girth);    
    printf("Dien tich cua hinh chu nhat: %d\n", area);

    return 0;
}

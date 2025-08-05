#include <stdio.h>

int main() {
   // กำหนดค่าตัวแปรตามโจทย์
int x = 12 , y = 7 ,z = 12 ;
// 1. x > y
printf("1. x > y: %d\n", x > y);
// 2. x < z
printf("2. x < z: %d\n", x < z);
// 3. x == z
printf("3. x == z: %d\n", x == z);
// 4. x != y
printf("4. x != y: %d\n", x != y);
// 5. !(2 * 5 >= y) || (5 != (5/3))
printf("5. !(2 * 5 >= y) || (5 != (5/3)): %d\n", !(2 * 5 >= y) || (5 != (5 / 3)));
// 6. !(x < y)
printf("6. !(x < y): %d\n", !(x < y));
// 7. (x+y) > (z*2)
printf("7. (x+y) > (z*2): %d\n", (x + y) > (z * 2));
// 8. (x%2 == 0) || (y%2 == 1)
printf("8. (x%%2 == 0) || (y%%2 == 1): %d\n", (x % 2 == 0) || (y % 2 == 1));
// 9. (x>y) && (z<y)
printf("9. (x>y) && (z<y): %d\n", (x > y) && (z < y));

return 0;
}



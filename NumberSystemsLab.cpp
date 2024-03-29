
#include <cstdio>

/*
 * Use printf and scanf
 * Use division algorithm to convert base10 and any other number base:
 * 1. Prompt user to enter and unsigned integer in base 10.
 * 2. Prompt user a new base (2 < x < 36) to convert received number into the new base.
 * 3. Construct a string of digits that represents the user's new base.
 * 4. Output the constructed string.
 */
int main() {
    int x, y, z = 0;
    char output[32];
    
    
    printf("Enter an integer: ");
    scanf("%d", &x); // User's number is stored into x.
    
    printf("Convert %d to base? ", x);
    scanf("%d", &y); // User's base is stored into y.
    while ((y<2) || (y>36)) { // Looping until the value of y is between 2 and 36.
        printf("You may only choose a number between 2 and 36 \nChoose another number to convert %d to base: ", x);
        scanf("%d", &y);
    }
    
    /* loop?
     * userNumber(x) % userBase(y) = mod
     * take the modulus; if mod is > 9 then change mod to assigned letter
     * Store mod into a string
     * Check if userBase is still less than userNewNum
     * if it is then loop
     * if it isn't, take that number convert to letter if needed and add to string
     */
    
    while (x>0) {
        int remainder = x%y;
        if (remainder < 10) {
            output[z]= '0' + remainder;
        } else {
            output[z] = 'A' + (remainder - 10);
        }
        z++;
        x/=y;
    }
    printf("Output: ");
    for (int i = z-1; i >= 0; i--) {
        printf("%c", output[i]);
    }
    printf ("\n");
    
    return 0;
}

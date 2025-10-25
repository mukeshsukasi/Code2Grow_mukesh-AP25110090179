#include <stdio.h>

int main() {
    float mp, atd;
    char g[3]; 

    printf("Enter the Marks percentage: ");
    scanf("%f", &mp);  // need & before variable
    
    printf("Enter the attendance percentage: ");
    scanf("%f", &atd); // need & before variable
    
    // Attendance check
    if (atd < 75) {
        printf("---- Failed due to low attendance ----\n");
        return 0; // stop program here
    } 
    else if (atd > 90) {
        // bonus marks for high attendance
        if (mp <= 49 && mp >= 45) {
            mp += 5;
        }
    }
    if (mp >= 90) {
        printf(g, "A+");
    } else if (mp >= 80) {
        printf(g, "A");
    } else if (mp >= 70) {
        printf(g, "B");
    } else if (mp >= 60) {
        printf(g, "C");
    } else if (mp >= 50) {
        printf(g, "D");
    } else {
        printf(g, "Fail");
    }
   

    printf("Final Grade: %s\n", g);

    return 0;
}

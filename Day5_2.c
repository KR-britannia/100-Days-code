#include <stdio.h>
int main() {
    int sec, hr, min, sec1;
    printf("Enter time in seconds : ");
    scanf("%d", &sec);

    hr = sec / 3600;          
    min = (sec % 3600) / 60;  
    sec1 = sec % 60;          

    printf("Time in hours:minutes:seconds\n");
    printf("%d:%d:%d", hr, min, sec1);
    
    return 0;
}

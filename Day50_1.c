// Change date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>

int main() {
    char date[20];
    fgets(date, sizeof(date), stdin);
    char month[3];
    int day, year;
    sscanf(date, "%d/%2s/%d", &day, month, &year);
    printf("%02d-Apr-%04d\n", day, year);
    return 0;
}

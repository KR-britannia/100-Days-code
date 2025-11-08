/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

int main() {
    int max_height = 4;
    int col1 = 1, col2 = 3, col3 = 4, col4 = 3, col5 = 2;

    for (int i = 1; i <= max_height; i++) {
        printf("%c\t%c\t%c\t%c\t%c\n",
               i <= col1 ? '*' : ' ',
               i <= col2 ? '*' : ' ',
               i <= col3 ? '*' : ' ',
               i <= col4 ? '*' : ' ',
               i <= col5 ? '*' : ' ');
    }
    return 0;
}


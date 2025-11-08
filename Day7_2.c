// Check whether entered character is a vowel or consonant
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='I'||c=='E'||c=='O'||c=='U')
    printf("Vowel");
    else
    printf("Consonant");
    return 0;
}
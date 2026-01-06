/*Get a number as a String and print the integer value of the string.*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    fgets(a, sizeof(a),stdin);
    a[strcspn(a, "\n")] = '\0'; 
    for(int i=0;a[i]!='\0';i++)
    {
        printf("%d",a[i]-48);
        
    }
}
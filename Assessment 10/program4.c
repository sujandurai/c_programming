/*Get a String and print the same.*/

#include <stdio.h>
int main()
{
    char a[100];
    fgets(a, sizeof(a),stdin);
    printf("%s", a);
}
#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {
        case 'A'...'Z':printf("UpperCase");
        break;
        case 'a'...'z':printf("LowerCase");
        break;
        case '0'...'9':printf("Number");
        break;
    }
}
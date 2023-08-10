#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //add this library to use (isalpha and isdigit Functions)

int main()
{
    char d[10] ;
    int ck;
    int i=1;
    printf("Enter The Identifer : \n");
    gets(d);
    if(isalpha(d[0]))
    {
        ck=1;
    }
    else
    {
        printf("Non Valid Identifer\n");
    }

     while(d[i]!='\0')
        {
            if(!isalpha(d[i]) && !isdigit(d[i]))
            {
               ck=0;

               break;
            }
            i++;
        }

    if(ck==1)printf("Valid Identifer\n");
    return 0;
}

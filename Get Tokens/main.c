#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    int com=0;
    int o=0,d=0,c=0,m;
    char s[25],op[25],contstant[25],identifier[25];
    printf("Enter the sentence : \n");
    //scanf("%s",s);
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(isspace(s[i]))
        {
            continue;
        }
        else if(isalpha(s[i]))
        {
            identifier[d]=s[i];
            d++;
        }
        else if(isdigit(s[i]))
        {
            contstant[c]=s[i];
            c++;
        }
        else if(s[i]==47)
        {
            com++;
        }
        else
        {
            if(s[i]=='+')
            {
                op[o]='+';
                o++;
            }

            else if(s[i]=='-')
            {
                op[o]='-';
                o++;
            }

            else if(s[i]=='*')
            {
                op[o]='*';
                o++;
            }
            else if(s[i]=='/')
            {
                op[o]='/';
                o++;
            }
        }
    }

    //Identifier
    printf("The Identifier is : ");
    for(int i=0;i<d;i++)
    {
        printf("%c ",identifier[i]);
    }

    //Operator
    printf("\nThe Operator is : ");
    for(int i=0;i<o;i++)
    {
        printf("%c ",op[i]);
    }

    //Constant
    printf("\nThe Constant is : ");
    for(int i=0;i<c;i++)
    {
        printf("%c ",contstant[i]);
    }

    /*Comments
     com=0;
     printf("\nThe number of Comments is : ");
     printf(com,"");*/
    return 0;
}

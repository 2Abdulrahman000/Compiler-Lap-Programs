#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2.Write Program to determine the statment as comment or not
    char com[30];
    int a=0;
    printf("Enter Comment :\n");
    gets(com);

    if(com[0]=='/')
    {
            if(com[1]=='/')
            {
                printf("This is Comment.\n");
            }
            else if(com[1]=='*')
            {
                for(int i=2;i<30;i++)
                {
                    if(com[i]=='*' && com[i+1]=='/')
                    {
                        printf("This is Comment.\n");
                        a=1;
                        break;
                    }
                }
                if(a==0) printf("No Comment Found ...\n");

            }
    }
    else
    {
        printf("No Comment Found ...\n");
    }
    return 0;
}

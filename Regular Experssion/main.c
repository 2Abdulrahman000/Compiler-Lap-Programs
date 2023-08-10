#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    char s[30],c;
    int state=0;
    int i=0;
    printf("Enter The String : \n");
    gets(s);
    while(s[i]!='\0')
    {
        switch(state)
        {
            case 0:
                c=s[i++];
                if(c=='a')state=1;
                else if(c=='b')state=2;
                else state=6;
                break;

            case 1:
                c=s[i++];
                if(c=='a')state=3;
                else if(c=='b') state=4;
                else state=6;
                break;

            case 2:
                c=s[i++];
                if(c=='a')state=6;
                else if(c=='b')state=2;
                else state=6;
                break;

            case 3:
                c=s[i++];
                if(c=='a')state=3;
                break;

            case 4:
                c=s[i++];
                if(c=='a') state=6;
                else if(c=='b') state=5;
                else state=6;
                break;

            case 5:
                c=s[i++];
                if(c=='a')state=6;
                else if(c=='b')state=2;
                else state=6;
                break;

            case 6:
                printf("This is String is not match with any regular experssions\n");
                exit(0);
        }
    }
    if(state==1)printf("This is string under regular experssiona -> a \n");
    else if(state==2 || state==4) printf("This is string under regular experssions -> a*b+ \n");
    else if(state==5) printf("This is string under regular experssions -> abb \n");
    return 0;
}

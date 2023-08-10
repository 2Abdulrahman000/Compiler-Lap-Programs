#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op[5];
    printf("Enter The Operator : \n");
    gets(op);
    //printf(op);
    switch(op[0])
    {
        case '+' :
            printf("Addition");
            break;
        case '-' :
            printf("substraction");
            break;
        case '*' :
            printf("Multipliction");
            break;
        case '/' :
            printf("Divison");
            break;
        /////////////////////////////////////////////////////////
        case '&' :
            printf("AND Gate");
            break;
        case '||' :
            printf("OR Gate");
            break;
        case '!' :
            printf("NOT Gate");
            break;
         ///////////////////////////////////////////////
        case '>' :
                if(op[1]=='=')
                    {
                        printf("Larger than or Equal");
                    }
                else
                    {
                        printf("Larger than");
                    }
            break;
            //////////////
        case '<' :
                if(op[1]=='=')
                    {
                        printf("less than or Equal");
                    }
                else
                    {
                        printf("less than");
                    }
            break;
         ////////////////////////
        case '=' :
                if(op[1]=='=')
                    {
                        printf("Equal");
                    }
                else
                    {
                        printf("Assignment");
                    }
            break;
           ////////////////////////
        default :
            printf("Operator not found");
    }
    return 0;
}

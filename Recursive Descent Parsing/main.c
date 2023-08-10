#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char input[100];
int i=0;
int main()
{
    char input[100];
    int i=0;
    printf("E->TE\nE'->+TE'\/\@\nT->FT'\/\@\nT'->*FT\nF->(E)\/id\n");
    printf("Enter The String : ");
    gets(input);
    printf(input);
    if(E())
    {
        if(input[i+1]=='\0')printf("The String is accepted\n");
        else printf("The String is not accepted\n");
    }
    else
    {
        printf("The String is not accepted\n");
    }
    /*
    E ->TE
    E'->+TE'/@
    T ->FT'/@
    T'->*FT
    F ->(E)/id
    */
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
 E()
    {
        if(T())
        {
            if(EP())
            {
                return(1);
            }
            else
            {
                return(0);
            }
        }
        else
        {
            return(0);
        }
        ////////////////////////////////////////////////////
        EP()
        {
            if(input[i]=='+')
            {
                i++;
                if(T())
                {
                    if(EP())
                    {
                        return(1);
                    }
                    else
                    {
                        return(0);
                    }
                }
                else
                {
                    return(0);
                }
            }
            else
            {
                return(1);
            }
           // return(1);//eipson-->@
        }
    /////////////////////////////////////////////////////////////////////
    T()
    {
        if(F())
        {
            if(TP())
            {
                return(1);
            }
            else
            {
                return(0);
            }
        }
        else
        {
            return(0);
        }

        TP()
        {
            if(input[i]=='*')
            {
                i++
                if(F())
                {
                    if(TP())
                    {
                        return(1)
                    }
                    else
                    {
                        return(0);
                    }
                }
            }
            else
            {
                return(1);
            }
        }
    }
    ///////////////////////////////////////////////////////////
    F()
    {
        if(input[i]=='(')
        {
            i++;
            if(E())
            {
              if(input[i]==')')
              {
                  i++;
                  return(1);
              }
              else
              {
                  return(0);
              }
            }
            else
            {
                return(0);
            }
        }
        else if(input[i]>='a' && input[i]<='z' || input[i]>='A' && input[i]<='Z')
        {
            i++;
            return(1);
        }
        else
        {
            return(0);
        }
    }

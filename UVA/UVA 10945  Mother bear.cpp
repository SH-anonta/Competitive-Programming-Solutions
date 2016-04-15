#include <cstdio>
#include <cstring>
#include <cctype>


bool isPal(char* str)
{
    int len = strlen(str);
    int i= 0;

    while(i<len/2)
    {
        if(str[i]== str[len - i -1])
        {
            i++;
            continue;
        }
        else{
            return false;
        }
    }

    return true;
}

int main(void)
{
    char str[256], refstr[256];
    char ch, dump;
    int len;

    while(gets(str) && strcmp(str, "DONE"))
    {
        len= strlen(str);
        int j= 0;
        for(int i= 0; i<len; i++)
        {
            if(str[i] >='a' && str[i]<='z' || str[i] >='A' && str[i]<'Z'){
                refstr[j]= toupper(str[i]);
                j++;
            }
        }

        refstr[j]= '\0';


        if(isPal(refstr))
        {
            printf("You won't be eaten!\n");
        }
        else{
            printf("Uh oh..\n");
        }


    }



    return 0;
}

#include <iostream>
#include <cstdio>
#include <cstring>

int main(void)
{
    char str[200];
    fgets(str, sizeof(str), stdin);
    int len= strlen(str);
    if(len-1 != '\0'){
        str[len-1]= '\0';
        len--;
    }

    for(int i= 0; i<len; i++)
    {
        if(str[i] >= 'A' && str[i]<= 'Z') str[i] += ' ';
        else if ( str[i] == ' ') continue;

        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'y':
            case 'u': continue;
        }

        printf(".%c", str[i]);
    }

//    printf("\n");
    return 0;
}

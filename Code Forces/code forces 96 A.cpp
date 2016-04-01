#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char str[120];
    int alt= 6;

    fgets(str, 120, stdin);
    int len= strlen(str);
    if(len-1 != '\0'){
        str[len-1]= '\0';
        len--;
    }

    for(int i=0; str[i]; i++)
    {
        for(int j= i+1; str[j];j++)
        {
            if(str[i] == str[j]){
                alt--;
                if(alt==0) break;
            }
            else{
                alt= 6;
                i= j;
            }

        }

        if(alt==0)
            {
                printf("YES\n");
                break;
            }
            else{
                printf("NO\n");
                break;}
    }


    return 0;
}

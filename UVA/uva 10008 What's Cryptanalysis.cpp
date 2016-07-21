#include <cstdio>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

int main(void)
{
    int n, cc;
    char str[1024];

    int letters[26]= {0};
    int srt[26];
    char dump;

    scanf("%d%c", &n, &dump);
    //scanf("%d", &n);


    while(n--)
    {
        fgets(str, sizeof(str), stdin);
        int len= strlen(str);
        if(str[len-1] != '\0'){
            str[len-1]= '\0';
            len--;
        }

        for(char lttr= 'A',cc= 0; lttr <= 'Z'; lttr++){
            for(int i= 0; str[i]; i++)
            {
                if(toupper(str[i]) == lttr){
                    letters[cc]++;
                }
            }
            cc++;
        }

//        printf("%d\n%d\n", letters[0], letters[2]);
    }

    int mx, idx;

    for(int j= 0; j<26; j++){
        mx= -1;
        for(int i= 0; i< 26; i++)
        {
            if(letters[i] > letters[mx]) mx= i;
//            else if(letters[i] == mx) mx= (i + 'A' < mx+'A') ? i : mx;
        }


        if(letters[mx] != 0){
            printf("%c %d\n", char(mx+'A'), letters[mx]);
            letters[mx]= 0;
        }
    }



    return 0;
}

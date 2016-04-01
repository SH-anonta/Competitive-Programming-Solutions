//higher math Light OJ

#include <cstdio>

void sort(long a[], int SZ)
{
    long mxi, temp;
    for(int i= 0, j; i<SZ-1; i++)
    {
        for(j= i+1,mxi= i; j<SZ; j++)
        {
            if(a[mxi]<a[j])
                mxi = j;
        }
        temp= a[mxi];
        a[mxi]= a[i];
        a[i]= temp;
    }
}

void is_upright(void)
{
    unsigned int T;
    scanf("%d", &T);
    
    long len[3];
    
    for(int tst= 1; tst<=T; tst++)
    {
        scanf("%ld %ld %ld", &len[0],&len[1],&len[2]);
        
        sort(len, 3);
        
        len[0]*= len[0];
        len[1]*= len[1];
        len[2]*= len[2];
                
        printf("Case %d: %s\n", tst, (len[0] == len[1]+len[2])?"yes":"no");
    }
    
}


int main(void)
{
    is_upright();
    return 0;
}
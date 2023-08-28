#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c,m;

    scanf("%d %d",&n,&m);
    int ppp = 0;
    bool bo,ok = true;
    for (i = 0; i < n; i++) {
             int  pp = 0;
             bo = true;
        for (j = 0; j < m; j++) {
             scanf("%d", &c);
             // conta o numero de zeros em sequencia
             if(c ==  0 and bo) pp++;
             else bo = false;
        }
        // checa se a matriz é escada ou não
        if( i != 0)
            if( (pp > ppp or (pp == ppp and pp == m)) and ok) ppp = pp;
             else{
                ppp = 0;
                ok = false;
             }
        else
            ppp = pp ;
    }
    cout << ((ppp)? "S\n" : "N\n") ;

    return 0;
}

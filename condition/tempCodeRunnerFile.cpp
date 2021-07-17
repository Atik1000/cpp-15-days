#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,m,rahamat,bijoy;
    cin >> x >> y >> m;
    rahamat=(x/4)*m;
    bijoy=y;
    if(rahamat<bijoy){
        printf("Rahamat is very pretty:%d\n",rahamat);

    }
    else{
        printf("Bijoy is very pretty:%d\n", bijoy);
    }
}
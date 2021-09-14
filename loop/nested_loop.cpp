// Q: Half piramid star
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,row,col;
//     cin>>n;
//     for( row=1;row<=n;row++){
//         for( col=1;col<=row;col++){
//             printf("*");
//         }
//         printf("\n");
//     }

// }

// Q: Half piramid star
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,row,col;
//     cin>>n;
//     while(n!=0){
//     for( row=1;row<=n;row++){
//         for( col=1;col<=row;col++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     cin>>n;
//     }

// }

// Q: Half piramid number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,row,col;
//     cin>>n;
//     for( row=1;row<=n;row++){
//         for( col=1;col<=row;col++){
//             printf("%d",col);
//         }
//         printf("\n");
//     }

// }

// Q: half piramid alphabet
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,row,col;
//     char input, alphabet = 'A';
//     cin>>input;
//     for( row=1;row<=(input-'A'+1);row++){
//         for( col=1;col<=row;col++){
//            printf("%c ", alphabet);
//         }
//         alphabet++;
//         printf("\n");
//     }

// }

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,row,col;
//     char alphabet;
//     cin>>n;
//     for( row=1;row<=n;row++){
//         alphabet = 'A';
//         for( col=1;col<=row;col++){
//            printf("%c ", alphabet);
//            alphabet++;
//         }

//         printf("\n");
//     }

// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, row, col;
    char alphabet = 'A';
    cin >> n;
    for (row = 1; row <= n; row++)
    {

        for (col = 1; col <= row; col++)
        {
            printf("%c ", alphabet);
        }
        alphabet++;

        printf("\n");
    }
}

// Q: A to z  print

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     for(c='a';c<='z';c++){
//         cout<<c<<endl;
//     }
// }

// Q: Namta print
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     for(int i=1;i<=10;i++){
//         cout<<num<<" x "<<i<<" = "<<num*i<<endl;
//     }
// }

// Q: 3 first 100 multiple
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num=3;
//     for(int i=1;i<=100;i++){
//         cout<<num <<endl;
//         num+=3;
// }
// }

// Q: 3 divisor number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     int num=0;
//     while(scanf("%c",&c) && c!='\n'){
//         num+=c-'0';
//     }
//     if(num%3==0){
//         cout<<"YES"<<endl;
//     }
//     else{
//         cout<<"NO"<<endl;
//     }
// }

// // Q:A to Z print
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     for(c='A';c<='Z';c++){
//         cout<<c<<endl;
//     }
// }

// Q: print 1-100
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         cout<<i<<endl;
//     }
// }
// Q: n th number print a character

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     char c;
//     cin>>n;
//     cin>>c;
//     for(int i=1;i<=n;i++){
//         cout<<c<<i<<endl;
//     }
// }

// Q: print a number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,r;
//     cin>>n;
//     while(n!=0){
//         r=n%10;
//         n/=10;
//         cout<<r<<endl;
//     }
// }

// Q: sum of a number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,r,sum=0;
//     cin>>n;
//     while(n!=0){
//         r=n%10;
//         sum+=r;
//         n/=10;
//     }
//     cout<<sum<<endl;
// }

// Q: 6 divisor print

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    while (scanf("%d", &num) && num != 0)
    {
        num = num % 6;
        cout << num << endl;
    }
}

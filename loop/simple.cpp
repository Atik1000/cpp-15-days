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

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int num;
//     while (scanf("%d", &num) && num != 0)
//     {
//         num = num /6;
//         cout << num << endl;
//     }
// }

// Q:sum of number

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,temp,sum=0,r;
//     cin>>num;
//     temp=num;
//     while(temp!=0){
// r=temp%10
//         sum=sum+r;
//          temp=temp/10;

//     }
//     cout<<sum;
// }

// Q:reverse number
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int num,temp,sum=0,r;
//     cin>>num;
//     temp=num;
//     while(temp!=0){
//         // 123
//         r=temp%10; // 123%10=3===12 %10=2===1%%10=1;
//         sum=sum*10+r;// 0+3;===3*10+2=32===32*10+1=321
//         temp=temp/10;//12===1
//     }
//     cout<<sum;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,n,value,sum=0;
//     cin>>n;
//     for ( i = 0; i < n; i++)
//     {
//        cin>>value;
//         sum=sum+value;
//     }
//     cout<<sum;

// }

// # sum of 10 digit;
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int sum = 0, n = 10;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         sum += x;
//     }
//     cout << sum;
// }

// Q: first digit  of a number
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;

//     printf("Enter any number: ");
//     scanf("%d", &n);

//     while (n >= 10)
//     {
//         n = n / 10;
//     }

//     printf("First digit = %d", n);

//     return 0;
// }

// Q: sum of 10 digit first value
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int sum = 0, n = 10;
//     while (n--)
//     {
//         int x;
//         cin >> x;
//         x=x/10;
//         sum += x;
//     }
//     cout << sum;
// }

// Q: print everage
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0, i;
//     double avg;
//     for (i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         sum += a;
//     }
//     avg = sum / n;
//     printf("%.2f\n", avg);
// }

// Q: conver binary
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n, c, k;

//     printf("Enter an integer in decimal number system\n");
//     scanf("%d", &n);

//     printf("%d in binary number system is:\n", n);

//     for (c = 31; c >= 0; c--)
//     {
//         k = n >> c;

//         if (k & 1)
//             printf("1");
//         else
//             printf("0");
//     }

//     printf("\n");

//     return 0;
// }

// Q:area of tringle
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,i;
//     double area;
//     cin >> n;
//
//     for (i = 0; i < n; i++)
//     {
//         int v,h;
//         cin >> v>>h;
//         area = .5*v*h;
//         printf("%.2f\n",area);
//     }

// }

// Q: area of circle
// #include <bits/stdc++.h>
// using namespace std;
// const double pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861;

// int main()
// {
//     int n, i;
//     double area;
//     cin >> n;
//     for (i = 0; i < n; i++)
//     {
//         int r;
//         cin >> r;
//         area = pi * r * r;
//         printf("%.2f\n", area);
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    double area;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        area = r * r;
        printf("%.2f\n", area);
    }
}
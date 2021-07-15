// Q:even value print
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int num;
// cin >> num;
// if(num%2==0){
//     printf("It is event :%d",num);
// }

// }

// Q: divided 5 and 3

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int num;
// cin >> num;
// if(num%3==0){
//     printf("It is multiple ny 3 :%d\n",num);
// }
// if(num%5==0){
//     printf("It is multiple ny 5 :%d",num);
// }

// }

// Q: match pin
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int pin1,pin2;
//     cin >> pin1 >> pin2;
//     if(pin1==pin2){
//         cout<<"The pin code are equal";
//     }
//      if(pin1!=pin2){
//         cout<<"The pin code are not equal";
//     }
// }

// # millionear find out

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int man1, man2, man3, man4, man5, man6, millionear = 0;
//     cin >> man1 >> man2 >> man3 >> man4 >> man5 >> man6;
//     if (man1 >= 1000000)
//     {
//         millionear += 1;
//     }
//     if (man2 >= 1000000)
//     {
//         millionear += 1;
//     }
//     if (man3 >= 1000000)
//     {
//         millionear += 1;
//     }
//     if (man4 >= 1000000)
//     {
//         millionear += 1;
//     }
//     if (man5 >= 1000000)
//     {
//         millionear += 1;
//     }
//         if(man6>=1000000){
//         millionear+=1;
//     }
//     cout<<millionear;
// }

// # water conditions

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int temperature;
//     cin >> temperature;
//     if(temperature<0){
//         printf("Solid temperature %d\n", temperature);
//     }
//       if(temperature>=0 && temperature<=100){
//         printf("liquid temperature %d\n", temperature);
//     }
//       if(temperature>100){
//         printf("Gas temperature %d\n", temperature);
//     }
// }

// #Q: go to play

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int ticket_price,my_amount;
//     cin >> ticket_price>> my_amount;

//     if(ticket_price<=my_amount){
//         printf("Go to play");
//     }
// }

// Q: pass math

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int pass_mark,my_mark;
//     cin >> pass_mark>> my_mark;

//     if(pass_mark<=my_mark){
//         printf(" You passed");
//     }
// }

// Q:over forest

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int N,P;
//     cin >> N>> P;

//     if(N<=P){
//         printf(" You Over forest");
//     }
// }

// Q: full square
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// int num;
// int iVar;
// float fVar;
// printf("Enter an integer number: ");
// scanf("%d",&num);
// fVar=sqrt((double)num);
// iVar=fVar;
// if(iVar==fVar)
// printf("%d is a perfect square.",num);
// else
// printf("%d is not a perfect square.",num);
// return 0;
// }

// Q:go to picnic
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin >>a>>b>>c;
//     if(a>=b+c){
//         printf("go to picnic successfully total amount %d \t total cost %d",a,b+c);
//     }
// }

// Q:tallest person
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d, e;
//     cin >> a >> b >> c >> d >> e;
//     if (a > b && a > c && a > d && a > e)
//     {
//         printf("%d a is tallest person\n", a);
//     }
//     if (a < b && b > c && b > d && b > e)
//     {
//         printf("%d b is tallest person\n", b);
//     }
//     if (c > b && a < c && c > d && c > e)
//     {
//         printf("%d c is tallest person\n", c);
//     }
//     if (d > a && d > b && d > c && d > e)
//     {
//         printf("%d d is tallest person\n", d);
//     }
//     if (e > b && e > c && e > d && a < e)
//     {
//         printf("%d e is tallest person\n", e);
//     }
// }

// Q:30 + age person
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, c, d, e, thirty_age = 0;
//     cin >> a >> b >> c >> d >> e;
//     if (a >= 30)
//     {
//         thirty_age += 1;
//     }
//     if (b >= 30)
//     {
//         thirty_age += 1;
//     }
//     if (c >= 30)
//     {
//         thirty_age += 1;
//     }
//     if (d >= 30)
//     {
//         thirty_age += 1;
//     }
//     if (e >= 30)
//     {
//         thirty_age += 1;
//     }
//     printf("total 30 + age person:%d",thirty_age);
// }

// Q:Assending order

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c;
//     cin >> a >> b >> c;
//     if (a<b && a<c){
//         if(b<c){
//             printf("A:%d\t,B:%d\t,C:%d\t",a,b,c);
//         }
//         if(c<b){
//             printf("A:%d\t,C:%d\t,B:%d\t",a,c,b);
//         }
//     }
//     if(b<a && b<c){
//         if(a<c){
//             printf("B:%d\t,A:%d\t,C:%d\t",b,a,c);
//         }
//         if(c<a){
//             printf("B:%d\t,C:%d\t,A:%d\t",b,c,a);
//         }
//     }
//     if(c<a && c<b){
//         if (a<b){
//             printf("C:%d\t,A:%d\t,B:%d\t",c,a,b);
//         }
//         if(b<a){
//             printf("C:%d\t,B:%d\t,A:%d\t",c,b,a);
//         }
//     }
// }

// Q:feding fish

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int Fish,Feed;
//     cin >> Feed>> Fish;
//     if(Feed>=Fish*3){
//         printf("  Feed number: %d \t Fish number : %d ",Feed,Fish);
//     }
// }

// Q: go picnic
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int Seat,Person;
//     cin >> Seat>> Person;

//     if(Person+5<=Seat){
//         printf(" Go picnic Seat number: %d \t Person number : %d ",Seat,Person);
//     }
// }
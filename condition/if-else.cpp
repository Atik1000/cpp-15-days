// Q:passed print
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int number;
//     cin >> number;
//     if(number>=40){
//         printf("Jony was passed :%d",number);
//     }
//     else{
//           printf("Jony was failed :%d",number);
//     }
// }

// Q:big number

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     double number1,number2;
//     cin >> number1 >>number2;
//     if(number1>=number2){
//         printf("number1  was BigNumber :%lf",number1);
//     }
//     else{
//           printf("number2  was BigNumber :%lf",number2);
//     }
// }

// Q:cow price
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int alam, karim, cow1, cow2, cow3;
//     cin >> cow1 >> cow2 >> cow3;
//     alam = cow1 + cow2 + cow3;
//     cin >> cow1 >> cow2 >> cow3;
//     karim = cow1 + cow2 + cow3;

//     if(alam>karim){
//         printf("Alam cow price is big:%d",alam);
//     }
//     else{
//         printf("karim cow price is big:%d",karim);
//     }
// }

// Q:even odd
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     cin >>num;
//     if(num%2==0){
//         printf("Event");
//     }
//     else{
//         printf("odd");
//     }
// }

// Q: big circle
// #include <bits/stdc++.h>
// using namespace std;
// const float pi = 3.14159;
// int main()
// {
//     float a, b, area1, area2;
//     cin >> a >> b;

//     b = (float)b * 2.54;

//     area1 = pi * a * a;
//     area2 = pi * b * b;

//     if (area1 < area2)
//     {
//         printf("B is Big area : %.2f", area2);
//     }
//     else
//     {
//         printf("A is big area : %.2f", area1);
//     }
// }

// Q: Aziz is winner
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int cow_price,goat_price;
//     cin >>cow_price >> goat_price;
//     if(cow_price>goat_price){
//         printf("Aziz lose");
//     }
//     else{
//         printf("Aziz winners");
//     }
// }

// Q: Rayhan icecream probility

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int tk,achar_wala_came;
//     cin >> tk>>achar_wala_came;
//     if(tk>=10){
//         if(achar_wala_came){
//             printf("Eating achar");
//         }
//         else{
//             printf("Eating icecream");
//         }
//     }
// }

// Q:Mishu buy probility
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int mishu_big_brother_came;
//     cin>>mishu_big_brother_came;
//     if(mishu_big_brother_came){
//         printf("Buy hilsha fish");
//     }
//     else{
//         printf("Buy vegetables");
//     }
// }

// Q: buy lemon
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, m, rahamat, bijoy, weight;
    cin >> x >> y >> m;

    rahamat = (x / 4);// 1 pice price
    bijoy = (y / 1000) * m;// 1 gm
    if (rahamat < bijoy)
    {
        printf("Rahamat is very pretty:%lf\n", rahamat);
    }
    else
    {
        printf("Bijoy is very pretty:%lf\n", bijoy);
    }
}
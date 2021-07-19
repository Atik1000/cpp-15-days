// Q: largest number
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,c,largest;
//     cin >> a >> b >> c ;
//     if(a>b)
//         largest = a;
//     else if(b>c)
//         largest = b;
//     else
//         largest = c;
//     cout << largest << endl;
//     }

// Q: leap year;

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int year;
//     cin >> year;
//     if (year % 100 == 0)
//     {
//         if (year % 400 == 0)
//         {
//             cout << "leap year" << endl;
//         }
//         else
//         {
//             cout << "not leap year" << endl;
//         }
//     }
//     else
//     {
//         if (year % 4 == 0)
//         {
//             cout << "leap year" << endl;
//         }
//         else
//         {
//             cout << "not leap year" << endl;
//         }
//     }
// }

// Q:2nd height number
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     double a, b, c, d;
//     printf("Enter 4 numbers:\n");
//     cin >> a >> b >> c >> d;
//     if (a > b && a > c && a > d)
//     {
//         if (b > c && b > d)
//             printf("%lf is the second largest number\n", b);
//         else if (c > b && c > d)
//             printf("%lf is the second largest number\n", c);
//         else
//             printf("%lf is the second largest number\n", d);
//     }
//     if (b > a && b > c && b > d)

//     {
//         if (a > c && a > d)
//             printf("%lf is the second largest number\n", a);
//         else if (c > a && c > d)
//             printf("%lf is the second largest number\n", c);
//         else
//             printf("%lf is the second largest number\n", d);
//     }

//     if (c > a && c > b && c > d)
//     {
//         if (a > b && a > d)
//             printf("%lf is the second largest number\n", a);
//         else if (b > a && b > d)
//             printf("%lf is the second largest number\n", b);
//         else
//             printf("%lf is the second largest number\n", d);
//     }
//     if (d > a && d > b && d > c)
//     {
//         if (a > b && a > c)
//             printf("%lf is the second largest number\n", a);
//         else if (b > a && b > c)
//             printf("%lf is the second largest number\n", b);
//         else
//             printf("%lf is the second largest number\n", c);
//     }
// }

// Q: is it letter or not
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char c;
//     cin >> c;
//     if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
//     {
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
//             cout << "is a vowel letter" << endl;
//         else
//             cout << "is a consonant letter" << endl;
//     }

//     else
//         cout << "is not a letter" << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int anondita_year, anondita_month, anondita_day, maliha_year, maliha_month, maliha_day;
//     cin >> anondita_year >> anondita_month >> anondita_day >> maliha_year >> maliha_month >> maliha_day;

//     if (anondita_year > maliha_year)
//     {
//         cout << "Anondita is older" << endl;
//     }
//     else if (anondita_year < maliha_year)
//     {
//         cout << "Maliha is older" << endl;
//     }
//     else if (anondita_year == maliha_year)
//     {
//         if (anondita_month > maliha_month)
//         {
//             cout << "Anondita is older" << endl;
//         }
//         else if (anondita_month < maliha_month)
//         {
//             cout << "Maliha is older" << endl;
//         }
//         else if (anondita_month == maliha_month)
//         {
//             if (anondita_day > maliha_day)
//             {
//                 cout << "Anondita is older" << endl;
//             }
//             else if (anondita_day < maliha_day)
//             {
//                 cout << "Maliha is older" << endl;
//             }
//             else
//             {
//                 cout << "Anondita and Maliha are the same age" << endl;
//             }
//         }
//     }
//     return 0;
// }

// // Q:buy book
// #include <bits/stdc++.h>
// using namespace std;
// int main()  {
//     int x,y,z,m;
//     cin >> x >> y >> z >> m;
//     if(x+y+z<=m){
//         cout << "Computer programming 1st part" << endl <<"Programming aschorjo jogot"<< endl <<" gonit korbo joy"<< endl;
//     }
//     else if(x+y <=m || x+z<=m || y+z<=m){
//         cout << "Computer programming 2nd part" << endl <<"Programming aschorjo jogot"<< endl;
//     }
//     else if(x<=m || y<=m || z<=m){
//         cout << "Computer programming 3rd part";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char school_name;
    int shift;
    cin >> school_name >> shift;
    if (school_name == 'A')
    {
        if (shift == 1)
        {
            cout << "yellow";
        }
        if (shift == 2)
        {
            cout << "green";
        }
    }
    if (school_name == 'B')
    {
        if (shift == 1)
        {
            cout << "blue";
        }
        if (shift == 2)
        {
            cout << "red";
        }
    }
}
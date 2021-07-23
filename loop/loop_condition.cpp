// Q: maximum number and minimum number of loops
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int maximum, minimum,n,number;
//     cin >>n;
//     cin>>number;
//     maximum=minimum=number;
//     for(int i=1;i<n;i++){
//         cin>>number;
//         if(number>maximum)maximum=number;
//         if(number<minimum)minimum=number;
// }
//     cout<<maximum<<" "<<minimum;
// }

// Q: multiple 2,3,5
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
// for(int i=1;i<=100;i++){
//     if(i%2==0 && i%3==0 && i%5==0){
//         cout<<i<<endl;
//     }
// }
// }

// Q: GCD
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int a,b,rem;
//     cin>>a>>b;
//     rem=a%b;
//     while(rem!=0){
//         a=b;
//         b=rem;
//         rem=a%b;
// }
//   cout<<b;
// }

// Q:LCM
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b, rem;

//     cin >> a >> b;
//     rem = a % b;
//     int multiple = a * b;
//     while (rem != 0)
//     {
//         a = b;
//         b = rem;
//         rem = a % b;
//     }
//     cout << multiple / b;
// }

// Q: print 1 to 1001
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=1001;i++){
//         if(i%7==0)cout<<i<<endl;
//         else cout<<i<<"\t";
//     }
// }

// Q: multiple 7
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     for(int i=1;i<=100;i++){
//         if(i%7==0 && i%2==0)cout<<i<<endl;
//     }
// }

// Q: age <60 print
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age, n = 10;
//     while (n--)
//     {
//         cin >> age;
//         if (age > 60){
//              cout << age << endl;
//         }
           
//     }
    
// }

// Q: 6 divisor
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int num;
//     while(scanf("%d",&num)&& num!=0){
//         if(num%6==0)cout<<num<<endl;
//     }
// }


// # character verify
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     char c;
//     int n,vowelCount=0,consonantCount=0,numCount=0,otherCount=0,specialCount=0;
//     cin>>n;
//     while(n--){
//         cin>>c;
//         if(c=='A' || c=='a' || c=='E' || c=='e' || c=='I' || c=='i' || c=='O' || c=='o' || c=='U' || c=='u'){
//             vowelCount++;
//             cout<<"Vowel:"<<vowelCount<<endl;
//         }
//         else if(c>='0' && c<='9'){
//             numCount++;
//             cout<<"number:"<<numCount<<endl;
//         }
//         else if(c=='$' || c=='#' || c=='@' || c=='!' || c=='^' || c=='&' || c=='*' || c=='(' || c==')' || c=='-' || c=='_' || c=='+' || c=='=' || c=='{' || c=='}' || c=='[' || c==']' || c=='|' || c=='.' || c==',' || c==';' || c==':' || c=='\'' || c=='\"' || c=='<' || c=='>' || c=='/' || c=='?' || c=='~'){
//             specialCount++;
//             cout<<"special character:"<<specialCount<<endl;
//         }
//         else{
//             otherCount++;
//             cout<<"other character:"<<otherCount<<endl;
//         }
//     }

// }
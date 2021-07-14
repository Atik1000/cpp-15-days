// Q:needTicket b
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int height,needTicket;
//     cin >> height;
//      needTicket= height>=36;
//     printf("Need ticket %d\n",needTicket);
//     return 0;

// }

// Q:Buy sari
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int cut_grass,caught_fish,buy_sari;
//     cin>>cut_grass>>caught_fish;
//     buy_sari= cut_grass && caught_fish;
//     printf("Buy sari %d\n",buy_sari);
// }
// Q: A.(B+C)
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int A,B,C;
//     cin>>A>>B>>C;
//     printf("%d\n",A&& (B||C));

// }

// Q:play in field
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int go_to_field,its_friday,cousin_came,pc_ok;
//     cin>>its_friday>>cousin_came>>pc_ok;
//     go_to_field=its_friday && !(cousin_came && pc_ok);
//     cout<<go_to_field;
// }

// Q:woke up mornings

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int woke_up_morning,school_opened,art_compitions;
//     cin>>school_opened>>art_compitions;
//     woke_up_morning=school_opened&&art_compitions;
//     cout<<woke_up_morning;
// }

// Q:Eating biryani
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int first_person_taka,second_person_taka,third_person_taka,eaT_biriyani;
//     cin>>first_person_taka>>second_person_taka>>third_person_taka;
//     eaT_biriyani= first_person_taka+second_person_taka+third_person_taka>=375;
//     printf("%d\n",eaT_biriyani);
// }

// Q:france play next round
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int france_play_next_round, france_goal, spain_goal, raining;
//     cin >> france_goal >> spain_goal >> raining;

//     france_play_next_round = (france_goal > spain_goal && !raining);
//     printf("%d", france_play_next_round);
// }

// Q:Bus ticket commition
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int my_age, father_age, mother_age, sister_age, is_bus_ticket_commition;
    cin >> my_age >> father_age >> mother_age >> sister_age;
    is_bus_ticket_commition = my_age < 12 || my_age > 72 || father_age < 12 || father_age > 72 || mother_age < 12 || mother_age > 72 || sister_age < 12 || sister_age > 72;
    printf("%d\n", is_bus_ticket_commition);
}
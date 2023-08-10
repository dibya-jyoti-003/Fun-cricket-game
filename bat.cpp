#include <iostream>
using namespace std;
int score1=0,score2 = 0;
void bat(int over,int target){
    cout <<"You're batting now \n";
    cout<<"Enter a number from 1 to 6 \nIf the number matches with computers";
    cout <<" number then you are out otherwise your run increases\n";
    if (target != 0)
        cout << "You need to chase "<<target <<" in "<<over<<" overs\n";
    score1 =0;
    int ball = 0;
    int run,num;
    while (ball <= over*6){
        if (target != 0){
            cout <<(target-score1)<<" runs required in "<<(over*6-ball)<<" balls\n";
        }
        ball++;
        cout << "Enter the run ";
        cin >> run;
        while (run<1 or run>6){
            cout <<"Enter again\n";
            cin >> run;
        }
        num = (rand()%6)+1;
        cout <<num<<endl;
        if (run != num){
            score1 += run;
            if (target != 0 and score1 >= target){
                break ;
            }
        }
        else {
            cout <<"Out !!!!!!!!!!!!\n";
            break;
        }
    }
    cout << "Your score is "<<score1 <<" runs after "<<(ball/6)<<"."<<(ball%6);
    cout <<" Overs\n";
}
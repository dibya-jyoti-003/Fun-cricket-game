#include <iostream>
using namespace std;
void field(int over,int target){
    cout <<"You're fielding now\n";
    cout<<"Enter a number from 1 to 6 \nIf the number matches with computers";
    cout <<" number then computer is out otherwise run increases\n";
    score2 =0;
    if (target != 0)
        cout << "Computer need to chase "<<target <<" in "<<over<<" overs\n";
    int ball = 0;
    int run,num;
    while (ball <= over*6){
        if (target != 0){
            cout <<(target-score2)<<" runs required in "<<(over*6-ball)<<" balls\n";
        }
        ball++;
        cout << "Enter the ball ";
        cin >> run;
        while (run<1 or run>6){
            cout <<"Enter again\n";
            cin >> run;
        }
        num = (rand()%6)+1;
        cout <<num<<endl;
        if (run != num){
            score2 += num;
            if (target != 0 and score2 >= target){
                break ;
            }
        }
        else {
            cout <<"Out !!!!!!!!!!!!\n";
            break;
        }
    }
    cout << "Comp score is "<<score2 <<" runs after "<<(ball/6)<<"."<<(ball%6);
    cout <<" Overs\n";
}
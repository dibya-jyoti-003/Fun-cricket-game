// Online C++ compiler to run C++ program online

#include "bat.cpp"
#include "field.cpp"
void cricket(int over){
    cout <<"TOSS----\nEnter 0 for heads\nEnter 1 for tails\n";
    int toss;
    cin >> toss;
    int randomToss = rand()%2;
    //while (randomToss)randomToss = rand()%2;
    if (randomToss) cout <<"Its Tails\n";
    else cout <<"Its Heads \n";
    if (toss == randomToss){
        cout << "You won the toss\nSelect 0 to bat \nSelect 1 to field \n";
        int select;
        cin >> select;
        if (select) {field(over,0);bat(over,score2+1);}
        else {bat(over,0);field(over,score1+1);}
    }
    else {
        cout <<"You lost the toss \n";
        int select = rand()%2;
        string st;
        if (select) st= "Bat";
        else st = "Field";
        cout << "Computer chooses to "<< st<<" first\n";
        if (select){field(over,0);bat(over,score2+1);}
        else {bat(over,0);field(over,score1+1);}
    }
}
int main() {
    cout <<"Computer cricket\n";
    cout << "Enter the number of overs \n";
    int over;
    cin >> over;
    while(over <0 or over > 6){cout <<" Enter again \n";cin >>over;}
    cricket(over);
    a:
    if (score1 > score2)cout <<"Congrats you win!!!";
    else if (score1<score2) cout <<"Computer wins!!!";
    else {
        cout <<"Super Over\n";
        cricket(1);
        if (score1 == score2)cout <<"Match tied \n";
        else goto a;
    }
    return 0;
}
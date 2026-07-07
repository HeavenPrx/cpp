#include<iostream>
#include <string>
#include <ctime>

using namespace std;

class Computer
{
private:
    /* data */
    int score;
    string choice[3];
    
public:
    string res;
    Computer();
    string ComputerTurn();
    int addScore();
    void showScore();
    ~Computer();
};

Computer::Computer()
{
    this->score = 0;
    choice[0] = "shi_tou";
    choice[1] = "jian_dao";
    choice[2] = "bu";
}

string Computer::ComputerTurn(){
    srand(time(NULL));
    int r = rand()%3;
    cout<<"com is "<<choice[r]<<endl;
    res = choice[r];
    return choice[r];
}

int Computer::addScore(){
    score++;
    return score;
}

void Computer::showScore(){
    cout<<"computer score: ";
    cout<<score<<endl;
}

Computer::~Computer()
{
}


class People
{
private:
    /* data */
    int score;
    string choice[3];
    Computer com;
public:
    string res;
    People(/* args */);
    string peopleTurn();
    void isWinTurn();
    int addScore();
    void showScore();
    void game();
    ~People();
};

People::People() 
    : score(0), choice{"shi_tou", "jian_dao", "bu"}, com()
{
}

string People::peopleTurn() {
    string ch;
    while (true) {
        cout << "please enter"<<endl;;
        cin >> ch;
    
        for (int i = 0; i < 3; i++) {
            if (ch == choice[i]) {
                res = ch;
                return ch;
            }
        }
        cout << "enter error, enter again" << endl;
    }
}

void People::isWinTurn(){
    // if(com.res == "shi_tou"){
    //     if(res == "shi_tou") {
    //         cout<<"ping ju"<<endl;
    //     }
    //     else if(res == "jian_dao"){
    //         cout<<"computer win"<<endl;
    //         com.addScore();
    //     }
    //     else{ 
    //         cout<<"people win"<<endl;
    //         addScore();
    //     }
    // }
    // if(com.res == "jian_dao"){
    //     if(res == "shi_tou"){
    //         cout<<"people win"<<endl;
    //         addScore();
    //     }
    //     else if(res == "jian_dao"){
    //         cout<<"ping ju"<<endl;
    //     }
    //     else{
    //         cout<<"computer win"<<endl;
    //         com.addScore();
    //     }
    // }
    // if(com.res == "bu"){
    //     if(res == "shi_tou"){
    //         cout<<"computer win"<<endl;
    //         com.addScore();
    //     }
    //     else if(res == "jian_dao"){
    //         cout<<"people win"<<endl;
    //         addScore();
    //     }
    //     else{
    //         cout<<"ping ju"<<endl;
    //     } 
    // }
    // 定义胜负关系：0=平局, 1=玩家赢, 2=电脑赢
    // 索引对应: 0=shi_tou, 1=jian_dao, 2=bu
    int result[3][3] = {
        {0, 2, 1},  // shi_tou vs (shi_tou, jian_dao, bu)
        {1, 0, 2},  // jian_dao vs (shi_tou, jian_dao, bu)
        {2, 1, 0}   // bu vs (shi_tou, jian_dao, bu)
    };
    
    int comIdx, playerIdx;
    for (int i = 0; i < 3; i++) {
        if (com.res == choice[i]) comIdx = i;
        if (res == choice[i]) playerIdx = i;
    }
    
    int r = result[playerIdx][comIdx];
    if (r == 0) {
        cout << "ping ju" << endl;
    } else if (r == 1) {
        cout << "people win" << endl;
        addScore();
    } else {
        cout << "computer win" << endl;
        com.addScore();
    }
}

void People::game(){
    int num = 1;
    while (num)
    {
        /* code */
        for(int i = 0;i < 3;i++){
            com.ComputerTurn();
            peopleTurn();
            isWinTurn();
        }
        com.showScore();
        showScore();
        
        cout<<"want play again?"<<endl;
        cin>>num;
    }
    
}

int People::addScore(){
    score++;
    return score;
}

void People::showScore(){
    cout<<"people score: ";
    cout<<score<<endl;
}

People::~People()
{
}


int main(){
    People p;
    p.game();
}
#include<iostream>

using namespace std;

class Poker
{
private:
    /* data */
    string color;
    string point;
public:
    Poker(string c,string p);
    Poker(string c);
    void show();
    ~Poker();
};

Poker::Poker(string c,string p):color(c),point(p){}

Poker::Poker(string c):color(c){}

void Poker::show(){
    cout<<this->color<<this->point<<" ";
    if(this->point == " ") cout<<this->color;
}
Poker::~Poker()
{
}

int main()
{
    Poker* p[54];
    string colors[4] = {"red","black","piece","flower"};
    string points[13] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};

    int k = 0;
    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 13;j++){
            p[k] = new Poker(colors[i],points[j]);   
            k++;
        }
    }
    p[52] = new Poker("big king");
    p[53] = new Poker("small king");
    for(int i = 0;i < 54;i++){
        p[i]->show();
        delete p[i];
        p[i] = NULL;
    }

    
    return 0;
}

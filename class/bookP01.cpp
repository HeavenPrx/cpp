#include<iostream>

using namespace std;

class Person{
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person(){lname = "";fname[0] = '\0';}
    Person(const string& ln,const char* fn = "Heyyou");

    void show()const;
    void Formalshow() const;

    //compare
    
};
int main(int argc, char const *argv[])
{
    
    return 0;
}

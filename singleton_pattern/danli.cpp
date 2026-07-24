#include<iostream>

using namespace std;

class Header
{
private:
    /* data */
    string name;
    static Header* HHH;
    Header(string name):name(name){};
public:
    static Header* getHeader(){
        if(HHH == NULL)
            HHH = new Header("xuTeacher");
        return HHH;
    }
    ~Header();
};

Header::~Header()
{
}

Header* Header::HHH = NULL;
int main(int argc, char const *argv[])
{
    Header* h1 = Header::getHeader();
    Header* h2 = Header::getHeader();
    Header* h3 = Header::getHeader();
    cout<<h1
        <<h2
        <<h3<<endl;
    return 0;
}

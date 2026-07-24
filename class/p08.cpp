#include<iostream>
#include<cstring>

using namespace std;

class Book
{
private:
    /* data */
    char* name;
    char* author;
public:
    Book(const char* n,const char* a);
    void show();
    ~Book();
};

Book::Book(const char* n,const char* a)
{
    name = new char[strlen(n) + 1];
    author = new char[strlen(a) + 1];
    strcpy(name, n);
    strcpy(author, a);
}

void Book::show(){
    cout<<"name is "<<name;
    cout<<" author is "<<author<<endl;
}

Book::~Book()
{
    delete[] name;
    delete[] author;
    cout<<"Book is deleted"<<endl;
}

int main(){
    Book b("C++ Primer","Stanley B. Lippman");
    b.show();
}
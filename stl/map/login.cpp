#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, string> v;
    map<string, string>::iterator iter;
    string name;
    string password;
    cout << "pls choice one" << endl;
    int choice = 0;
    while (true)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "u will register" << endl;
            cout << "enter name" << endl;
            cin >> name;
            cout << "enter password" << endl;
            cin >> password;
            cin.ignore();
            v.insert(pair<string, string>(name, password));
            cout << "successful" << endl;
            break;
            return 0;
        case 2:
            cout << "u will login" << endl;
            cout << "enter name" << endl;
            cin >> name;
            cin.ignore();
            iter = v.find(name);
            if (iter != v.end())
                cout << "u can enter paswd" << endl;
            cin >> password;
            if (password == (*iter).second)
                cout << "successful" << endl;
            else
                cout << "paswd error try again" << endl;
            break;
        default:
            break;
            return 0;
        }
    }

    // v.insert("xu","20040901Xu");
}

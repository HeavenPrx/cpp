#include <iostream>
#include <string>
using namespace std;

class Fan {
private:
    string brand;
    double price;

public:
    Fan(const string& b, double p) : brand(b), price(p) {
        cout << "Fan对象已创建（品牌：" << brand << "，价格：" << price << "）" << endl;
    }

    void wind() {
        cout << brand << "风扇正在吹风..." << endl;
    }
};

int main() {
    Fan fanStack("美的", 199.9);
    fanStack.wind();
    Fan* fanHeap = new Fan("格力", 299.5);
    fanHeap->wind();

    delete fanHeap;

    return 0;
}
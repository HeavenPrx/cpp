#include<iostream>

using namespace std;

class MyStack{
    public:
        int length;
        int* stack;
        int index;

        void init(){
            this->index = 0;
            this->length = 10;
            this->stack = new int[this->length];
        }

        void popStack(){
            index--;
        }

        void pushStack(int data){
            if(index == length) expand();
            stack[index] = data;
            index++;
        }

        void expand(){
            cout<<"expand be used"<<endl;
            length *= 2;
            int* newStack = new int[length];
            for(int i = 0;i < index;i++){
                newStack[i] = stack[i];
            }
            delete[] stack;
            stack = newStack;
        }

        void print(){
            for(int i = 0;i < index;i++){
                cout<<stack[i] << " "; 
            }
            cout<<endl;
        }

        void show(){
            cout<<"length = "<<length;
            cout<<"index = "<<index;
        }
};
int main()
{
    MyStack* ms = new MyStack;
    ms->init();
    ms->pushStack(1);
    ms->pushStack(3);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->pushStack(9);
    ms->print();
    ms->show();
    ms->popStack();
    ms->print();
    ms->show();
    return 0;
}

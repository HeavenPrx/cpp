#include<iostream>

int main(int argc, char const *argv[])
{
    int b[10] = {0,1,2,3,4,5,6,7,8,9};
    int(&rb)[10] = b;
}

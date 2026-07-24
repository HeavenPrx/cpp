#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int open1(const vector<int>& v1,const vector<int>& v2){
    int size = 0;
    int sameNum1 = 0;
    if(v1.size() >= v2.size()) size = v2.size();
    else size = v1.size();

    vector<int>::iterator iter;
    for (int i = 0; i < size; i++)
    {   
        if(v1.at(i) == v2.at(i)) sameNum1++;
    }

    return sameNum1;
    
}

int open2(const vector<int>& v1,const vector<int>& v2){
    int sameNum2 = 0;
    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v2.size(); j++)
        {
            if(v2.at(j) == v1.at(i))  sameNum2++;
        }
    }
    return sameNum2;
    
}
int main(int argc, char const *argv[])
{
    int r;
    vector<int> vme = {1,2,3,4,5,6,7};
    /**
     * insert插入
     */

    vme.insert(vme.begin(),3,66);
    vme.insert(vme.begin(),vme.begin(),vme.end());

    for (int i = 0; i < vme.size(); i++)
    {
        cout<<vme[i]<<" ";
    }
    cout<<endl;
    
    vector<int> vra;
    /**
     * 预先分配容量但不初始赋值
     * 
     * vector<int> vra(7) 会默认赋值为 0
     */
    /*vra.reserve(7);*/
    vector<int>::iterator iter;
    /**
     *  1. 随机数引擎（硬件随机种子）
     *  random_device rd;
     *  2. 伪随机数生成器（Mersenne Twister）
     *  mt19937 gen(rd());
     *  3. 分布器（指定范围）
     *  uniform_int_distribution<> dis(1, 9);  // [1, 9]
     */
    srand(time(NULL));

    while(vra.size() < 7){
        r = rand() % 9 + 1;
        /**
         * find() 可以检查begin-end有无重复数值
         * 
         */
        auto it = find(vra.begin(),vra.end(),r);
        if(it == vra.end()){
            vra.push_back(r); 
        } 
    }

    for (iter = vra.begin(); iter != vra.end(); iter++)
    {
        cout<<*iter<<" "<<endl;
    }
    
    cout<<"total same number is "<<open1(vme,vra)<<endl;
    
    cout<<"total same number is "<<open2(vme,vra)<<endl;
    
    return 0;
}

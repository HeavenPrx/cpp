#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    pair<string , int> p ("haha",200);
    cout<<p.first<<p.second<<endl;

    map<int,string> m;
/*
    map<int, string> m;
    m.insert(make_pair(1, "xu"));   // ✅ 最常用
    m.insert({2, "he"});            // ✅ 更简洁
    m.emplace(3, "li");             // ✅ 性能最好
*/

    m.insert (make_pair(1,"xu"));
    m.insert(pair<int,string>(2,"he"));
    m.insert (make_pair(3,"xu"));
    m.insert (make_pair(4,"xu"));
    m.insert (make_pair(5,"xu"));
    m.insert (make_pair(6,"xu"));
    m.insert (make_pair(7,"xu"));

    /**
     * 可以查询但是会多一个无效键值对
     */
    cout<<m[9]<<endl;
    /**
     * 计数，不会增加一个无用键值对
     */
    cout<<m.count(7)<<endl;
    /**
     * 综上所述可以搭配使用
     */
    if(m.count(7)) cout<<m[7]<<endl;
    /**
     * 查找
     */
    map<int,string>::iterator it = m.find(7);
    cout<<(*it).first<<(*it).second<<endl;
    /**
     * 这样插入可以进行修改value
     */
    m[7] = "he";
    map<int,string>::iterator iter;
    for(iter = m.begin();iter != m.end();iter++){
        cout<<(*iter).first<<"  "<<(*iter).second<<endl;
    }
    /**
     * 删除，earse（） 可以放key值，也可以放迭代器
     */

    if(m.count(3))
        m.erase(3);
    
    auto it1 = m.find(3);
    if(it1 != m.end()){
        m.erase(it1);
    }
    
    return 0;
}

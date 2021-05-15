#include <iostream>
using namespace std;
void tnd(int); //“他娘的”模块
int z,x,chengfa,jiafa,chufa,jianfa;
int main() //主函数
{
    cout<<"声明：这是加减乘除法计算器"<<endl;
    cout<<"请输入数值：\n"; 
    cin>>z; //输入的数值赋给“z”变量
    cout<<"请再输入数值：\n"; 
    cin>>x; //输入的数值赋给“x”变量
    tnd(z);
    return 0;
}
void tnd(int n) //“他娘的”模块
{
    jiafa = n+x;
    jianfa = z-x;
    chengfa = x*z;
    chufa = z/x; 
    cout<<"加法等于:"<<jiafa<<endl<<"减法等于:"<<jianfa<<endl<<"乘法等于:"<<chengfa<<endl<<"除法等于:"<<chufa<<endl; //输出各种运算后的结果
}
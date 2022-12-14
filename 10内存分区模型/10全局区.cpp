#include<iostream>

using namespace std;

#define MAX 1000;

// 创建一个全局变量
int g_a = 10;
int g_b = 10;

const int c_a = 10;
const int c_b = 10;


int main(){
    //全局区
    //全局变量、静态变量、常量

    //创建普通的局部变量
    int a = 10;
    int b = 10;

    cout<<"局部变量a的地址："<<&a<<endl;
    cout<<"局部变量b的地址："<<&b<<endl;
    cout<<"全局变量a的地址："<<&g_a<<endl;
    cout<<"全局变量b的地址："<<&g_b<<endl;

    // 静态变量
    // 在普通变量前加关键字 static 属于静态变量
    static int s_a = 10;
    static int s_b = 10;
    cout<<"静态变量a的地址："<<&s_a<<endl;
    cout<<"静态变量b的地址："<<&s_b<<endl;

    // 常量 
    // 字符串常量
    cout<<"字符串常量的地址："<<&"hello world"<<endl;
    
    // const修饰的变量

    // const修饰的全局变量
    cout<<"全局常量a的地址："<<&c_a<<endl;
    cout<<"全局常量b的地址："<<&c_b<<endl;
    
    // const修饰的局部变量
    const int c_l_a = 0;
    const int c_l_b = 0;
    cout<<"局部常量a的地址："<<&c_l_a<<endl;
    cout<<"局部常量b的地址："<<&c_l_b<<endl;

    // 宏定义常量
    // cout<<"宏定义常量地址："<<&(MAX)<<endl;

    return 0;
}
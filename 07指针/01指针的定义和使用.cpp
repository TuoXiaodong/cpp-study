#include<iostream>

using namespace std;

int main(){
   // 指针的作用：
   // 可以间接访问内存
   // 可以通过一个指针来保存一个地址
   /*
   内存编号一般是0开头
   用16进制表示
   */
   int a = 0;
   // 定义一个指针
   /*语法：
   数据类型 *指针变量;
   */
   int *p;
   // 让指针记录变量的地址
   p = &a;
   cout<<"a的地址为："<<&a<<endl;
   cout<<"指针的地址："<<p<<endl;//相等

   // 使用这个指针
   // 可以通过解引用的方式来找到指针指向的内存
   // *指针 代表解引用 找到指针指向的内存中的数据
   *p=1;
   cout<<"a="<<a<<endl;
   cout<<"*p="<<*p<<endl;
   
   return 0;
}
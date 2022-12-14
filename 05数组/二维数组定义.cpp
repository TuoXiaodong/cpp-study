#include<iostream>

using namespace std;

int main(){
   //定义的四种方式
   /*
   1.数据类型 数组名 [行数][列数];
   2.数据类型 数组名 [行数][列数] = {{数据1，数据2}，...};
   3.数据类型 数组名 [行数][列数] = {数据1，数据2，数据3...};
   4.数据类型 数组名 [][列数] = {数据1，数据2,数据3，数据4...};

   建议使用第二种 提高代码可读性
   */

    //1.数据类型 数组名 [行数][列数];
   int arr[2][3];
   arr[0][0] =1;
   arr[0][1] =2;
   arr[0][2] =3;
   arr[1][0] =4;
   arr[1][1] =5;
   arr[1][2] =6;
   // cout<<"数组元素"<<arr[0][0];

   // 使用嵌套循环打印行数，内层循环打印列数
   for(int i=0;i<2;i++){
    for(int j = 0;j<3;j++){
        cout<<arr[i][j]<<endl;
    }
   }

   // 2.数据类型 数组名 [行数][列数] = {{数据1，数据2}，...};
   int arr2[2][3] ={
    {1,2,3},
    {4,5,6}
   };
   // 使用嵌套循环打印行数，内层循环打印列数
//    for(int i=0;i<2;i++){
//     for(int j = 0;j<3;j++){
//         cout<<arr2[i][j]<<" ";
//     }
//     cout<<endl;
//    }

   // 3.数据类型 数组名 [行数][列数] = {数据1，数据2，数据3...};
   int arr3[2][3] ={1,2,3,4,5,6};
//    for(int i=0;i<2;i++){
//     for(int j = 0;j<3;j++){
//         cout<<arr3[i][j]<<" ";
//     }
//     cout<<endl;
//    }

   // 4.数据类型 数组名 [][列数] = {数据1，数据2,数据3，数据4...};

   int arr4[][3] ={1,2,3,4,5,6};
   for(int i=0;i<2;i++){
    for(int j = 0;j<3;j++){
        cout<<arr4[i][j]<<" ";
    }
    cout<<endl;
    }
   return 0;
}
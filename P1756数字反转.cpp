/*-------------------------------
        P1756 数字反转
    https://vijos.org/p/1756
-------------------------------*/

//给定一个整数，请将该数各个位上数字反转得到一个新数。
//新数也应满足整数的常见形式，即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零。
//NOIP2011 NO.1

//https://vijos.org/records/60569ba5f41362fb2d97c7c7

#include<iostream>
using namespace std;
int main(){
    string num;
    int zero=0;
    cin>>num;
    if(num[0]=='-'){
        cout<<"-";
        zero=0;
        for(int i=num.size()-1;i>=1;i--){
            if(num[i]=='0'&&zero==0){ //多0
                continue;
            }else if(num[i]!='0'){
                zero=1;
            }
            cout<<num[i];
        }
        cout<<endl;
    }else{
        zero=0;
        for(int i=num.size()-1;i>=0;i--){
            if(num[i]=='0'&&zero==0){
                continue;
            }else if(num[i]!=0){
                zero=1;
            }
            cout<<num[i];
        }
        cout<<endl;
    }
    return 0;
}
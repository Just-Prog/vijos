//https://vijos.org/p/1449
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
unsigned long long int n;
bool check(string a,string b,string c){
    reverse(begin(a), end(a));
    for(int i=0;i<=6;i++){
        for(unsigned long long int o=0;o<b.length();o++){
            if(i){
                b[o]++;
                if(b[o]>'z'){
                    b[o]-=26;
                }
            }
        }
        for(unsigned long long int o=0;o<c.length();o++){
            if(i){
                c[o]--;
                if(c[o]<'a'){
                    c[o]+=26;
                }
            }
        }
        if(a==b&&b==c&&a==c){
            cout<<a<<endl;
            return 0;
        }
    }
    return 1;
}
int main(){
    string a,b,c;
    cin>>n>>a>>b>>c;
    if(check(a,b,c)){
        if(check(a,c,b)){
            if(check(b,a,c)){
                if(check(b,c,a)){
                    if(check(c,a,b)){
                        if(check(c,b,a)){
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
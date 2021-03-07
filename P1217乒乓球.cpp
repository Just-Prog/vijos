/*------------------------------
        P1217 乒乓球
    https://vijos.org/p/1217
------------------------------*/

//华华通过以下方式进行分析，首先将比赛每个球的胜负列成一张表，然后分别计算在11分制和21分制下，双方的比赛结果（截至记录末尾）。
//比赛规则和实际比赛规则相同, 在11分制下比分为10:11时还要继续比赛，直到分数差距达到2分；同理21分制下比分为20:21的时候也还要继续比赛。
//比如现在有这么一份记录，（其中W表示华华获得一分，L表示华华对手获得一分）：
//WWWWWWWWWWWWWWWWWWWWWWLW
//在11分制下，此时比赛的结果是华华第一局11比0获胜，第二局11比0获胜，正在进行第三局，当前比分1比1。
//而在21分制下，此时比赛结果是华华第一局21比0获胜，正在进行第二局，比分2比1。如果一局比赛刚开始，则此时比分为0比0。
//你的程序就是要对于一系列比赛信息的输入（WL形式），输出正确的结果。

//https://vijos.org/records/60445ca1f41362fb2d97b98e

#include<iostream>
using namespace std;
int main(){
    char word[62500];     //开个够大的数组(25*2500=62500)
    int awin=0,bwin=0,i;
    for(i=1;;i++){
        cin>>word[i];
        if(word[i]=='W'){ //标记
            word[i]=1;
        }else if(word[i]=='L'){
            word[i]=2;
        }else if(word[i]=='E'){
            word[i]=0;
            break;
        }
    }
    //11分
    for(int o=1;o<=i;o++){
        if(word[o]==1){
            awin++;
        }else if(word[o]==2){
            bwin++;
        }if(word[o]==0){
            cout<<awin<<":"<<bwin<<endl<<endl; //EOF
        }
        if(awin-bwin>=2||bwin-awin>=2){
            if(awin>=11||bwin>=11){           //到达11分和分差为2时自动输出+清除
                cout<<awin<<":"<<bwin<<endl;
                awin=0;
                bwin=0;
            }
        }
    }
    awin=0;                                   //为下文归零
    bwin=0;
    //21分
    for(int o=1;o<=i;o++){
        if(word[o]==1){
            awin++;
        }else if(word[o]==2){
            bwin++;
        }if(word[o]==0){
            cout<<awin<<":"<<bwin<<endl<<endl;
        }
        if(awin-bwin>=2||bwin-awin>=2){
            if(awin>=21||bwin>=21){
                cout<<awin<<":"<<bwin<<endl;
                awin=0;
                bwin=0;
            }
        }
    }
    return 0;
}
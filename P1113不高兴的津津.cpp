/*-------------------------------
       P1113 不高兴的津津
    https://vijos.org/p/1113
-------------------------------*/

//津津上初中了。妈妈认为津津应该更加用功学习，所以津津除了上学之外，还要参加妈妈为她报名的各科复习班。
//另外每周妈妈还会送她去学习朗诵、舞蹈和钢琴。但是津津如果一天上课超过八个小时就会不高兴，
//而且，上得越久就会越不高兴。假设津津不会因为其它事不高兴，并且她的不高兴不会持续到第二天。
//请你帮忙检查一下津津下周的日程安排，看看下周她会不会不高兴；如果会的话，哪天最不高兴。

//https://vijos.org/records/60445efaf41362fb2d97b98f
//错误原因：数组过小
//zong[7] --> zong[8]
//https://vijos.org/records/604d7b95f41362fb2d97c0cf

#include<bits/stdc++.h>
using namespace std;
int main(){
    int day,night,zong[8],max,ans,d; //白天时长 晚间时长 一周7天时长的存储数组 最大时长 时间最久的那一天 
    max=0; //归零
    ans=0; //便于在没有该日期时输出0
    for(d=1;d<=7;d++) //正向数据录入
    {
        cin>>day>>night;
        zong[d]=day+night;
    }
    for(d=7;d>=1;d--)//逆向推算（偷懒妙招）
    {
        if(zong[d]>max&&zong[d]>8) //判断值是否最大/是否等于8
        {
            zong[d]=max; //总数最大者为max
            ans=d; //同时max对应的天数为最大日
        }
    }
    cout<<ans<<endl; //结果输出
    return 0;
}
/*-------------------------------
       P1103 校门外的树
    https://vijos.org/p/1103
-------------------------------*/

//某校大门外长度为L的马路上有一排树，每两棵相邻的树之间的间隔都是1米。
//我们可以把马路看成一个数轴，马路的一端在数轴0的位置，另一端在L的位置；数轴上的每个整数点，即0，1，2，……，L，都种有一棵树。
//由于马路上有一些区域要用来建地铁。这些区域用它们在数轴上的起始点和终止点表示。
//已知任一区域的起始点和终止点的坐标都是整数，区域之间可能有重合的部分。现在要把这些区域中的树（包括区域端点处的两棵树）移走。
//你的任务是计算将这些树都移走后，马路上还有多少棵树。

//https://vijos.org/records/6056983cf41362fb2497c7e1
//https://vijos.org/records/605698baf41362fb2d97c7c3

#include<iostream>
using namespace std;
int main(){
    int l,m;
    cin>>l>>m;
    bool t[10001]={0};
    for(int i=1;i<=m;i++){
        int a,b;
        cin>>a>>b;
        for(int o=a;o<=b;o++){
            t[o]=1;
        }
    }
    int ans=l+1;
    for(int i=0;i<=l;i++){
        if(t[i]==1)
            ans--;
    }
    cout<<ans<<endl;
    return 0;
}
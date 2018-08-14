/*************************************************************************
	> File Name: luogu1047.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 08时52分27秒
 ************************************************************************/

#include<stdio.h>


int main(){
    int l,m,s,e,road[10005]={0};
    scanf("%d %d",&l,&m);
    for (int i=0;i<m;i++){
        scanf("%d %d",&s,&e);
        for (int j=s;j<=e;j++){
            road[j]=1;
        }

    }
    int sum=0;
    for (int i=0;i<=l;i++){
        if (road[i]==0) sum++;
    }
    printf("%d\n",sum);
    return 0;
}

/*************************************************************************
	> File Name: luogu1909.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 22时58分35秒
 ************************************************************************/

#include<stdio.h>
#include <string.h>
int min(int a,int b){
    return a<b?a:b;
}
int main(){
    int n,money,num,sum=0,res=100000005;

    scanf("%d",&n);
    for (int i=1;i<=3;i++){
        scanf("%d %d",&num,&money);
        if (n%num>0){
            sum=money*((n/num)+1);
        }
        else{
            sum=money*(n/num);
        }
        res=min(res,sum);
    }
    printf("%d\n",res);
    return 0;
}

/*************************************************************************
	> File Name: luogu1980.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 17时03分57秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int ans=0,x,n;
    scanf("%d %d",&n,&x);
    for (int i=1;i<=n;i++){
        int temp=i;
        while (temp){
            if (temp%10==x) ans++;
            temp/=10;
        }
    }
    printf("%d\n",ans);
}

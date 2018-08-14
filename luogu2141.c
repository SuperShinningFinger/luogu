/*************************************************************************
	> File Name: luogu2141.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 09时01分27秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000
int main(){
    int n,num[105],ans[MAX_N+5]={0},res=0;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",num+i);
        ans[num[i]]=1;
    }
    
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
                
            if (ans[num[i]+num[j]]){
                    res++;
            }
        }
    }

    printf("%d\n",res);
    return 0;
}

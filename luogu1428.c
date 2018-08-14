/*************************************************************************
	> File Name: luogu1428.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 08时53分18秒
 ************************************************************************/

#include<stdio.h>


int main(){
    int n,cute[105],ans[105]={0};
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&cute[i]);
    }
    ans[0]=0;
    for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if (cute[j]<cute[i]){
                ans[i]++;
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%d ",ans[i]);
    }
    printf("\n");
    return 0;
}

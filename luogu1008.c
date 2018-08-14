/*************************************************************************
	> File Name: luogu1008.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月24日 星期二 08时55分52秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int flag=0;
    for (int i=123;i<329;i++){
        flag=0;
        int n[10]={0},temp=i;
        for (int j=1;j<=3;j++){
            temp=j*i;
            while (temp){
                n[temp%10]++;
                temp/=10;
            }
        }
        for (int k=1;k<=9;k++){
            if (n[k]!=1){
               flag=1;
                break;
            }
        }
        if (!flag) {
            printf("%d %d %d\n",i,i*2,i*3);
        }
    }
}

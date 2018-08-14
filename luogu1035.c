/*************************************************************************
	> File Name: luogu1035.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 16时33分02秒
 ************************************************************************/

#include<stdio.h>

int main(){
    int step;
    double x,sum=0,i=1;
    scanf("%lf",&x);
    while (sum<=x){
        sum+=(2*i);
        step++;
        i*=0.98;
    }
    printf("%d\n",step);
    
    return 0;
}

/*************************************************************************
	> File Name: luogu1421.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 12时06分02秒
 ************************************************************************/

#include<stdio.h>
int main(){
    double a,b;
    double money;
    scanf("%lf %lf",&a,&b);
    money=a+b/10;
    int num=money/1.9;
    printf("%d",num);
    return 0;
}

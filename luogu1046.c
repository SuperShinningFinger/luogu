/*************************************************************************
	> File Name: luogu1046.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月29日 星期日 08时48分14秒
 ************************************************************************/

#include<stdio.h>


int main(){
    int apple[10],height;
    for (int i=0;i<10;i++)
    scanf("%d",&apple[i]);
    scanf("%d",&height);
    height+=30;
    int n=0;
    for (int i=0;i<10;i++){
        if (height>=apple[i]) n++;
    }
    printf("%d\n",n);
    return 0;
}

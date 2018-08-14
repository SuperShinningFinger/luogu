/*************************************************************************
	> File Name: luogu1424.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月27日 星期五 16时52分00秒
 ************************************************************************/

#include<stdio.h>
int main(){
    long int x,n,sum=0;
    scanf("%ld %ld",&x,&n);
    for (long int i=0;i<n;i++){
        if (x<6) sum+=250;
        x++;
        if (x>7) x=1;
    }
    printf("%ld\n",sum);
    return 0;
}

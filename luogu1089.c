/*************************************************************************
	> File Name: luogu1089.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月23日 星期一 22时26分33秒
 ************************************************************************/

#include<stdio.h>
int main(){
    double money,rest=0,save=0;
    for (int i=0;i<12;i++){
        scanf("%lf",&money);
        rest=rest+300-money;
        if (rest<0){
            printf("-%d\n",i+1);
            return 0;
        }
        save+=100*((int)rest/100);
        rest=rest-(int)rest/100*100;
    }
    printf("%.0lf\n",rest+save*1.2);
}

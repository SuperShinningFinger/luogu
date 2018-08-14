/*************************************************************************
	> File Name: luogu1425.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月22日 星期日 12时10分31秒
 ************************************************************************/

#include<stdio.h>
int main(){
    int week[8]={0},school,time,max=0,maxd=1;
    for (int i=0;i<7;i++){
        scanf("%d %d",&school,&time);
        week[i]=time+school;
        
    }
    for (int i=0;i<7;i++){
        if (week[i]>max){
         max=week[i];
         maxd=i+1;
                    
        }
    }
    printf("%d\n",maxd);
    return 0;
}

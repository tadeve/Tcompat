#include <stdio.h>
int main(void){
    int n,h,sum;
    scanf("%d%d\n",&n,&h);
    sum = n;
    for(int i = 0;i<n;i++){
        int temp;
        scanf("%d",&temp);
        if(temp > h){
            sum++;
        }
    }
    printf("%d\n",sum);
}
#include<stdio.h>
 
int main(){
    long long int a,b,k;
    long long int sum;
    int t,x,i;
    scanf("%d",&t);
    long long int l[t];
    x=t;
    while(t!=0){
        sum = 0;
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k%2==0){
            sum = (k/2)*a - (k/2)*b;
        }
        else{
            sum = ((k+1)/2)*a - ((k-1)/2)*b;
        }
        l[x-t]=sum;
        t--;
    }
    for(i=0;i<x;i++)
        printf("%lld\n",l[i]);
    return 0;
}
//1077A-Frog_Jumping.c
#include<stdio.h>

int main(){
    
    int x,a,b,c,d,t=1;
    scanf("%d",&x);
      

    while(t){
        x++;
        a=x%10;
        b=(x/10)%10;
        c=(x/100)%10;
        d=(x/1000)%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            t=0;
    }

    printf("%d",x);
    return 0;
    
}


#include<stdio.h>
#include<string.h>
int main(){
    int it,i,x=0;
    
    scanf("%d",&it);
    
    char str[4];

    for(i=0;i<it;i++){
        
        scanf("%s",str);
        if (str[1] == '+')
            x++;
        else if (str[1]=='-')
            x--;
    }
    printf("%d",x);
    return 0;
}


#include<stdio.h>

double max(double n[ ]){
    double max=n[0];
    int i=0;
    for(i=0;i<10;i++){
        if(max<n[i]) max=n[i];
    }
    return max;
}

double min(double n[ ]){
    double min=n[0];
    int i=0;
    for(i=0;i<10;i++){
        if(min>n[i]) min=n[i];
    }
    return min;
}

double sum(double n[ ]){
    double sum=0;
    int i=0;
    for(i=0;i<10;i++){
        if(n[i]<0) n[i]=n[i]*(-1);
        sum=sum+n[i];
    }
    return sum;
}

double mul(double n[ ]){
    double mul=0,sum=0;
    int i=0;
    while(i<10){
        //printf("i=%d\n",i);
        sum=n[i]*n[i+1];
        i=i+2;
        mul=mul+sum;
    }
    return mul;
}

int main()
{
    double n[10]={0};
    int t,i=0;
    while(i<10){
        scanf("%lf",&n[i]);
        i=i+1;
    }
    scanf("%d",&t);
    /*for(i=0;i<10;i++){
        printf("%.1lf ",n[i]);
    }*/
    switch(t){
        case 0: printf("%.1lf",max(n)); break;
        case 1: printf("%.1lf",min(n)); break;
        case 2: printf("%.1lf",sum(n)); break;
        case 3: printf("%.1lf",max(n)+min(n)); break;
        case 4: printf("%.1lf",mul(n)); break;
        default:printf("-1");break;
    }
    return 0;
}
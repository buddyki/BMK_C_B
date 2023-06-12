#include <stdio.h>

int main()
{
    float x,y,a,b,c,d;
    int count=0;
    scanf("%f %f",&x,&y);
    scanf("%f %f %f %f",&a,&b,&c,&d);
    if(a>c) {
        if(x<c || x>a) count=count+1;
    }
    if(c>a) {
        if(x>c || x<a) count=count+1;
    }
    
    if(b>d){
        if(y>b || y<d) count=count+1;
    }
    
    if(b<d){
        if(y<b || y>d) count=count+1;
    }
    
    if(count==0) printf("YES");
    else printf("NO");

    return 0;
}

#include<stdio.h>
main(){
    int i,a=0,r;
    long long int n;
    scanf("%lld",&n);     
    while(n!=0){
        r=n%10;
        n=n/10;
        a++;
        }
    if(a==1) printf("1\n");
    else if(a==2) printf("2\n");
    else if(a==3) printf("3\n");
    else printf("More than 3 digits\n");
        
    
    return 0;
    }
        
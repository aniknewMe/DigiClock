#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//#include<unistd.h>
int main(){
    int hr,m,s=0;
    while(4){
        system("clear");
        
        
        printf("%d,%d,%d",hr,m,s);
        fflush(stdout);
        s+=1;

        if (s==60){
            m+=1;
            s=0;
        }
        if(m==60){
            hr+=1;
            m=0;
        }
        if(hr==24){
            hr=0;
            m=0;
            s=0;
        }

        sleep(1);

    }
    return 0;

}
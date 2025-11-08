#include "base.h"

void kernel_main()
{
        int n=0;
        int xx;
        char Yellow=14;
        int i=320;
        int ii=200;
        char c=Yellow;
        char Black=0;
	cls(Yellow);
        for(xx=0;xx<70;xx=xx+10){
             window(xx,xx,i,ii,"hello world",c);
             if (c==0){
                 c=Yellow;
             }else{
                 c=Black;
             }
             ii=ii-20;
             i=i-20;
        }
        while(1){}
	
	
}



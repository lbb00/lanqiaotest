#include <stdio.h>

int step = 1;
int lin,w,h;
void pl(int s1,int e1,int s2, int e2){
	if(step > h){
		return;
	}
	for(int i = 1; i<=w ;i++){
		if( i>= s1 && i <=e1) printf("*");
		else if( i >= s2 && i <= e2) printf("*");
		else printf(".");
	}
	printf("\n");
	step++;
	pl(s1+1,e1+1,s2-1,e2-1);
}


int main(){
	scanf("%d %d",&lin,&h);
	w = h + lin-1;
	pl(1,lin,w-lin+1,w);
	return 0;
}

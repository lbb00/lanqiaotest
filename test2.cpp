#include <stdio.h>
#define N 10

bool isVisit[N];
int a[N],sum;

void dfs(int depth){
	if(depth == N){
		sum++;
		return;
	}
	for(int i = 1;i<N ;i++){
		if(isVisit[i] == 0){
			isVisit[i] = 1;
			a[depth] = i;
			dfs(depth+1);
			isVisit[i]= 0;
		}
	}
}

int main(){
	
	dfs(1);
	printf("\n sum:%d",sum);
	getchar();
	getchar();
	return 0;
}

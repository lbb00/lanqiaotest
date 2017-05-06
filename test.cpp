#include <stdio.h>
#define N 4  
bool isVisit[N];
int sum = 0,a[N];
void dfs(int depth);
int main(){
	
	dfs(1);
	printf("\n %d Is End!",sum);
	
	getchar();
	getchar();
	return 0;
}

void dfs(int depth){
	if(depth == N){
		sum++;
		for(int i = 1;i<N;i++){
			printf("%d",a[i]);
		}
		printf("\n");
		return;
	}
	for(int i = 1; i<N;i++){
		if(isVisit[i]== 0){
			isVisit[i] = 1;
			a[depth] = i;
			dfs(depth+1);
			isVisit[i]= 0;
			
		}
	}
}

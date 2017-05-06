#include <stdio.h>
#include <string.h>

char board[3][3];
char btmp[3][3];
int x1,y1,x2,y2;

void bfs(int step){
	int sx,sy;
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			if(board[i][j] == ' '){
				sx = i;
				xy = j;
			}
		}
	
}

int main(){
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			scanf("%c",&board[i][j]);
		}
		getchar();
	}
	for(int i = 0;i<2;i++){
		for(int j = 0;j<3;j++){
			printf("%c",board[i][j]);
			if(board[i][j] == 'A'){
				x1 = i;
				y1 = j;
			}else if(board[i][j] == 'B'){
				x2 = i;
				y2 = j;
			}
		}
		printf("\n");
	}
	
	return 0;
} 

#include<stdio.h>  
  
int a[10], b, c, sum = 0;  
bool isVisit[10];  
  
void dfs(int num)  
{  
    if (10==num)  
    {  
        sum++;
        return;
    }  
    for (int i = 1; i < 10; i++)  
    {  
        if (isVisit[i] == 0)  
        {  
            isVisit[i] = 1;  
            a[num] = i;  
            dfs(num + 1);  
            isVisit[i] = 0;  
        }  
    }  
} 


int main()  
{  
    dfs(1);  
    printf("%d\n", sum);  
    return 0;  
}  

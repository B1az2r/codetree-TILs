#include <stdio.h>
int a[101];
int result(int * arr);
int main() {
    // 여기에 코드를 작성해주세요.
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int b[101]={0};
    for (i=0; i<n; i++)
    {
        scanf("%d ", &a[i]);
    }
    for (j=0; j<m*2; j=j+2)
    {
        scanf("%d %d", &b[j], &b[j+1]);
        
    }
    result(b);
    return 0;
}

int result(int * arr)
{
    int cnt=0, i, j, res=0, k;
    for(i=0; i<100; i++)
    {
        if(arr[i]>0)
        {
            cnt++;
        }
    }

    for(j=0; j<cnt; j=j+2)
    {
        for(k=arr[j]; k<=arr[j+1]; k++)
        {
            res += a[k-1];
        }
        
        printf("%d\n", res);
        res=0;
    }
    return res;
}
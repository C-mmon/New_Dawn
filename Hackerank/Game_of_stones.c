#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   
    int t;
    scanf("%d",&t);
    while(t--)
        {
        int n;
        scanf("%d",&n);
        int dp[n+1];
        dp[0]=dp[1]=1;
        dp[4]=dp[2]=dp[3]=dp[5]=0;
        int i;
        for(i=6;i<=n;i++)
            {
            if(dp[i-5]||dp[i-2]||dp[i-3])
                dp[i]=0;
            else
                dp[i]=1;
        }
        if(dp[n])
            printf("Second\n");
        else
            printf("First\n");
    }
    return 0;
}
                    

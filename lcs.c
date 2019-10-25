#include<stdio.h>
int o[10000],len;
int max(int a,int b)
{
    if(a>b) return a;
    return b;
}
void lcs(int a[10000],int b[10000],int n,int m)
{
    int l[n+1][m+1];
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
                l[i][j]=0;
            else if(a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else
                l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    len=l[n][m];
    int index=l[n][m];
    int i=n,j=m;
    while(i>0 && j>0)
    {
        if(a[i-1]==b[j-1])
        {
            o[--index]=a[i-1];
            i--;j--;
        }
        else if(l[i-1][j]>l[i][j-1])
            i--;
        else
            j--;
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
     for(int i=0;i<m;i++)
        scanf("%d",&b[i]);
    lcs(a,b,n,m);
    for(int i=0;i<len;i++)
       printf("%d ",o[i]);
            
}
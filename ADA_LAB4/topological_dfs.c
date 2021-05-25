#include <stdio.h>
void dfs(int);
int a[10][10],n,expr[10],vis[10],j=0;
void main(){
  int m,u,v;
  printf("Enter no. of vertices\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        a[i][j]=0;
    }
  }
  printf("Enter no. of edges\n");
  scanf("%d",&m);
  for(int i=1;i<=m;i++){
    printf("Enter an edge:");
    scanf("%d%d",&u,&v);
    a[u][v]=1;
  }
  for(int i=1;i<=n;i++)
    vis[i]=0;
  for(int i=1;i<=n;i++){
    if(vis[i]==0)
        dfs(i);
  }
  printf("Topological order:\n");
  for(int i=n-1;i>=0;i--)
    printf("%d",expr[i]);
  getch();
}
void dfs(int v){
  int i;
  vis[v]=1;
  for(i=1;i<=n;i++){
    if(a[v][i]==1&&vis[i]==0)
        dfs(i);
  }
  expr[j++]=v;
}

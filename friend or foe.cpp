#include <bits/stdc++.h>
#define SIZE 1000106
using namespace std;
int n, e;
vector <int> adj[SIZE];
int col[SIZE];

int red=1,blue=2,unknown_color=0;
queue <int> q;

void bfs(int src)
{
    col[src]=red;
    q.push(src);
    int u, v;
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {
            v=adj[u][i];
            if(col[v]==unknown_color)
            {
                if(col[u]==red)
                {
                    col[v]=blue;

                }
                else
                {
                    col[v]=red;

                }
                q.push(v);
            }

        }

    }
}

int main()
{
    scanf("%d %d", &n, &e);
    int u, v;
    for(int i=0; i<e; i++)
    {
        scanf("%d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
    {
        col[i]=unknown_color;
    }

    for(int i=1; i<=n; i++)
    {
        if(col[i]==unknown_color)
        {

            bfs(i);

        }
    }

    for(int i=1; i<=n; i++)
    {
        if(col[i]==red)
        {
            cout<<"R"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }



    return 0;
}

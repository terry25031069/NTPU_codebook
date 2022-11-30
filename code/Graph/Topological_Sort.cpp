#define N 87

bool adj[N][N];     // adjacency matrix
int visit[N];       // record visited coordinations in DFS
int order[N], n;    // save the order
 
bool cycle;         // detect the cycle
 
void DFS(int s)
{
    // back edge occured, detected the cycle
    if (visit[s] == 1) {cycle = true; return;}
    // forward edge and cross edge¡C
    if (visit[s] == 2) return;
 
    visit[s] = 1;
    for (int t=0; t<N; ++t){
        if (adj[s][t]) DFS(t);
    }
    visit[s] = 2;
    order[n--] = s;     // record the order
}
 
void topological_ordering()
{
    memset(visit, 0, sizeof(visit));
    cycle = false;
    n = N - 1;
    
    for (int s=0; s<9; ++s)
        if (!v[s])
            DFS(s);
 
    if (cycle) cout << "The graph has the cycle!";
    else{
        for (int i=0; i<N; ++i)
            cout << order[i];
        }
	}
}

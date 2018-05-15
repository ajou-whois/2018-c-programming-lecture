#include<stdio.h>
#include<stdbool.h>
#define MAX_NODE_NUM 101

bool G[MAX_NODE_NUM][MAX_NODE_NUM];
bool visited[MAX_NODE_NUM];	// 방문했으면 1, 아니면 0

int dfs(int cur, int n);

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	while (m--) {
		int u, v;	// u: 시작노드, v: 도착노드
		scanf("%d %d", &u, &v);
		// 양방향 간선
		G[u][v] = true;	// u -> v
		G[v][u] = true;	// v -> u
	}
	printf("%d", dfs(1, n) - 1);
	return 0;
}

int dfs(int cur, int n) {
	visited[cur] = true;	// cur을 방문했으므로 1로 표시
	// ret은 dfs를 통해 방문한 노드 개수가 담길 변수
	int ret = 1;	// 1은 자기 자신
	for(int i = 1; i <= n; i++) {
		int next_node = i;
		if(cur == next_node 
			|| visited[next_node] 
			|| !G[cur][next_node]) continue;
		// dfs(next_noed): next_node가 자기 자신을 포함하여 dfs로 방문할 노드개수
		ret += dfs(next_node, n);
	}
	return ret;
}


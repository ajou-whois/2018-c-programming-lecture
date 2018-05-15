#include <stdio.h>
#include <vector>
#include <stdbool.h>
using namespace std;
#define MAX_NODE_NUM 101

vector<int> Graph[MAX_NODE_NUM];	// adjacent list
int visited[MAX_NODE_NUM];	// 방문했으면 1, 아니면 0

int dfs(int cur);

int main() {
	int Vnum, Enum;
	scanf("%d %d", &Vnum, &Enum);
	while (Enum--) {
		int u, v;	// u: 시작노드, v: 도착노드
		scanf("%d %d", &u, &v);
		// 양방향 간선
		Graph[u].push_back(v);	// u -> v
		Graph[v].push_back(u);	// v -> u
	}
	printf("%d\n", dfs(1) - 1);
	return 0;
}

int dfs(int cur) {
	visited[cur] = true;	// cur을 방문했으므로 1로 표시
	// ret은 dfs를 통해 방문한 노드 개수가 담길 변수
	int ret = 1;	// 1은 자기 자신
	for (int i = 0; i < Graph[cur].size(); i++) {
		int next_node = Graph[cur][i];
		if (visited[next_node]) continue;
		// dfs(next_noed): next_node가 자기 자신을 포함하여 dfs로 방문할 노드개수
		ret += dfs(next_node);
	}
	return ret;
}
/*
6 5
1 2
1 3
2 4
2 5
4 6
*/
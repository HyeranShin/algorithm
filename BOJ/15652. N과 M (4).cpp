/*
https://www.acmicpc.net/problem/15652
*/

#include <iostream>
#include <ios>
#include <vector>
using namespace std;

int N, M;
vector<int> series;
void dfs(int idx, int cnt);
void print();
int main() {
	cin.tie(0); ios::sync_with_stdio(0);

	cin >> N >> M;
	dfs(0, 0);

	return 0;
}

void dfs(int idx, int cnt) {
	if (cnt == M) {
		print();
		return;
	}

	for (int i = idx; i < N; i++) {
		series.push_back(i + 1);
		dfs(i, cnt + 1);
		series.pop_back();
	}
}

void print() {
	for (int i = 0; i < M; i++) {
		cout << series[i] << ' ';
	}
	cout << "\n";
}

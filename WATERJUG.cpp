#include <conio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#define Max 900
using namespace std;

int a, b, c;
int flag[Max][Max];
int d[Max][Max];

typedef struct state {
	int x;
	int y;
}State;

State change(int i, int x, int y) {
	State newState;
	switch (i) {
	case 0: {
		newState.x = 0;
		newState.y = y;
		break;
	}
	case 1: {
		newState.x = a;
		newState.y = y;
		break;
	}
	case 2: {
		newState.x = x;
		newState.y = 0;
		break;
	}
	case 3: {
		newState.x = x;
		newState.y = b;
		break;
	}
	case 4: {
		newState.x = x - min(x, b - y);
		newState.y = y + min(x, b - y);
		break;
	}
	case 5: {
		newState.x = x + min(a - x, y);
		newState.y = y - min(a - x, y);
		break;
	}
	default: {
		break;
	}
	}
	return newState;
}

int BFS(int a, int b, int z) {
	vector<State> queue;
	State init;
	init.x = 0;
	init.y = 0;
	queue.push_back(init);
	flag[init.x][init.y] = 1;
	d[init.x][init.y] = 1;
	while (!queue.empty()) {
		int x = queue.front().x;
		int y = queue.front().y;
		queue.erase(queue.begin());
		for (int i = 0;i < 6;i++) {
			State newState = change(i, x, y);
			if (flag[newState.x][newState.y] == 0) {
				queue.push_back(newState);
				flag[newState.x][newState.y] = 1;
				d[newState.x][newState.y] = d[x][y] + 1;
			}
 			if (newState.x == c || newState.y == c) {
				return d[x][y];
			}
		}
	}
	return -1;
}


int main()
{
	cin >> a >> b >> c;
	for (int i = 0;i < a;i++) {
		for (int j = 0;j < b;j++) {
			flag[i][j] = 0;
			d[i][j] = 0;
		}
	}
	cout << BFS(a, b, c);
	return 0;
}

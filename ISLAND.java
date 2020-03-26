
import java.util.Scanner;

public class ISLAND {
	private static int queueX[], queueY[], front, rear, dao[][];
	private static boolean visited[][];
	private static int col, row, soDao, maxDao, soQuanDao;
	private static int dX[] = { -1, 1, 0, 0 };
	private static int dY[] = { 0, 0, -1, 1 };

	private static void initQueue() {
		front = rear = -1;
		queueX = new int[col * row+1];
		queueY = new int[col * row+1];
	}

	private static boolean isEmpty() {
		return front == rear;
	}

	private static boolean valid(int x, int y) {
		return x >= 0 && y >= 0 && x < row && y < col;
	}

	private static void push(int x, int y) {
		rear++;
		queueX[rear] = x;
		queueY[rear] = y;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		row = sc.nextInt();
		col = sc.nextInt();
		visited = new boolean[row][col];
		dao = new int[row][col];
		initQueue();
		sc.nextLine();
		char a[][] = new char[row][col];
		for (int i = 0; i < row; i++) {
			String s = sc.nextLine();
			for (int j = 0; j < col; j++) {
				a[i][j] = s.charAt(j);
				if(a[i][j]=='0') {
					dao[i][j] = 0;
				}else {
					dao[i][j] = 1;
				}
			}
		}
		soQuanDao = 0;
		soDao = 0;
		maxDao = 0;
		// xuly
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (dao[i][j] == 1 && !visited[i][j]) {
					BFS(i, j);
				}
			}
		}
		// output
		System.out.println(soQuanDao);
		System.out.println(maxDao);
	}

	private static void BFS(int x, int y) {
		visited[x][y] = true;
		push(x, y);
		while (!isEmpty()) {
			front++;
			int cr = queueX[front];
			int cc = queueY[front];
			soDao++;
			for (int i = 0; i < 4; i++) {
				int dr = cr + dX[i];
				int dc = cc + dY[i];
				if (valid(dr, dc) && dao[dr][dc] == 1 && !visited[dr][dc]) {
					visited[dr][dc] = true;
					push(dr, dc);
				}
			}
		}
		soQuanDao++;
		if (maxDao < soDao) {
			maxDao = soDao;
		}
		soDao = 0;
	}
}

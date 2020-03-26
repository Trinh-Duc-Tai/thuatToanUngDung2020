
import java.util.Scanner;

public class TSP {
	private static int soNode, soCanh, count, res, maTranKe[][], chiPhi[][];
	private static int top, stack[];
	private static boolean visited[];
	private static int start, end;

	private static boolean isEmpty() {
		return top == -1;
	}

	private static void initStack() {
		top = -1;
		stack = new int[soNode + 2];
	}

	private static void push(int x) {
		top++;
		stack[top] = x;
	}

	private static int pop() {
		int ok = stack[top];
		top--;
		return ok;
	}

	private static int peek() {
		return stack[top];
	}

	public static void main(String[] args)  {
		Scanner sc = new Scanner(System.in);
		soNode = sc.nextInt();
		soCanh = sc.nextInt();
		visited = new boolean[soNode];
		maTranKe = new int[soNode][soNode];
		chiPhi = new int[soNode][soNode];
		for (int i = 0; i < soCanh; i++) {
			start = sc.nextInt() - 1;
			end = sc.nextInt() - 1;
			maTranKe[start][end] = 1;
			chiPhi[start][end] = sc.nextInt();
		}
		res = 10000;
//		System.out.println(soNode+" "+soCanh);
		DFS(0, 0);
		System.out.println(res);
	}

	private static void DFS(int index, int tongChiPhi) {
		visited[index] = true;
		count++;
		for (int i = 0; i < soNode; i++) {
			if (maTranKe[index][i] == 1) {
				if(!visited[i]){
					DFS(i, tongChiPhi+chiPhi[index][i]);
					count--;
				}else{
					if (count == soNode) {
						res = Math.min(tongChiPhi+chiPhi[index][i], res);
						
					}
				}

			}
		}
	}
}

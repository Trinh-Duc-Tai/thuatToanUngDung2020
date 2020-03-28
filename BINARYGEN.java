package sau_26_3;

import java.util.Scanner;

public class BINARYGEN {
	private static int top, stack[],n;
	private static void initStack(){
		top = -1;
		stack = new int[2*n];
	}
	private static boolean isEmpty(){
		return top == -1;
	}
	private static void push(int x){
		top++;
		stack[top] = x;
	}
	private static int pop(){
		int ko = stack[top];
		top--;
		return ko;
	}
	private static int mu(int a,int b){
		int  k = 1;
		for (int i = 0; i < b; i++) {
			k = k*a;
		}
		return k;
	}
	private static String gen(int x){
		String ok = "";
		int t = 0;;
		for (int i = 0; i < n; i++) {
			t = x%2;
			push(t);
			x=x/2;
		}
		while(!isEmpty()){
			ok+=pop();
		}
		
		return ok;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		sc.nextLine();
		int a[] = new int[5];
		String s = sc.nextLine();
		initStack();
		int res = 0;
		for (int i = 0; i < n; i++) {
			a[i] = s.charAt(i)-'0';
		}
		for (int i = n-1; i >=0; i--) {
			res+=a[n-1-i]*mu(2,i);
		}
		System.out.println(gen(res+1));
		System.out.println(res);
	}
}

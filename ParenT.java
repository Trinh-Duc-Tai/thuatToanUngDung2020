
import java.util.Scanner;

public class ParenT {
	private static char stack[];
	private static int top;
	private static void initStack(int n) {
		top = -1;
		stack = new char[n];
	}
	private static boolean isEmpty() {
		return top == -1;
	}
	private static char pop() {
		char ok = stack[top];
		top--;
		return ok;
	}
	private static void push(char x) {
		top++;
		stack[top] = x;
	}
	private static char peek() {
		return stack[top];
	}
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int soTest = sc.nextInt();
		sc.nextLine();
		for (int tCase = 1; tCase <= soTest; tCase++) {
			String s = sc.nextLine();
			initStack(s.length());
			char var;
			for (int i = 0; i < s.length(); i++) {
				var = s.charAt(i);
				if(var=='['||var=='{'||var=='(') {
					push(var);
				}else {
					if(!isEmpty()) {
						if(var==']'&&peek()=='[') {
							pop();
						}
						else if(var==')'&&peek()=='(') {
							pop();
						}
						else if(var=='}'&&peek()=='{') {
							pop();
						}else{
							push(var);
						}
					}else {
						push(var);
					}
				}
			}
			if(isEmpty()) {
				System.out.println(1);
			}else {
				System.out.println(0);
			}
		}
	}
}

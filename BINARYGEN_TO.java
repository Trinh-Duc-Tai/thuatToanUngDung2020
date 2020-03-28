package after_26_3;

import java.util.Scanner;

public class BINARYGEN_TO {
	private static int n;
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		sc.nextLine();
		int a[] = new int[n];
		String s = sc.nextLine();
		int dem1 = 0;
		for (int i = 0; i < n; i++) {
			a[i] = s.charAt(i)-'0';
			if(a[i]==1) {
				dem1++;
			}
		}
		if(dem1==n) {
			System.out.print(1);
			for (int i = 0; i < n; i++) {
				System.out.print(0);
			}
		}else {
			if(a[n-1]==0) {
				a[n-1]=1;
				for (int i = 0; i < n; i++) {
					System.out.print(a[i]);
				}
				System.out.println();
			}else {
				int  k = 0;
				boolean flag = false;
				for (int i = n-1; i >=0 ; i--) {
					if(a[i]==0&&i!=n-1) {
						a[i] = 1;
						k = i;
						flag = true;
					}
					if(flag) {
						break;
					}
				}
				for (int i = 0; i < n; i++) {
					if(i<=k) {
						System.out.print(a[i]);
					}else {
						System.out.print(0);
					}
				}
			}
		}
		
	}
}

package after_26_3;

import java.util.Scanner;

public class KNAPSACK {
	private static int soDoVat, trongLuongTui;
	private static int kg[], price[], b[][];
	private static int toiDa;

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		soDoVat = sc.nextInt();
		trongLuongTui = sc.nextInt();
		kg = new int[32];
		price = new int[32];
		for (int i = 1; i <= soDoVat; i++) {
			kg[i] = sc.nextInt();
			price[i] = sc.nextInt();
		}
		b = new int[soDoVat + 1][trongLuongTui + 1];
		optimize();
		System.out.println(b[soDoVat][trongLuongTui]);
		System.out.println("select pack:");
		int k = soDoVat;
		while (k != 0) {
			if (b[k][trongLuongTui] != b[k - 1][trongLuongTui]) {
				System.out.println("Tui " + k + " co khoi luong " + kg[k]
						+ " co gia tri " + price[k]);
//				int t = trongLuongTui;
				trongLuongTui = trongLuongTui - kg[k];
			}
			k--;
		}

	}

	private static void optimize() {
		for (int i = 1; i <= soDoVat; i++) {
			for (int j = 0; j <= trongLuongTui; j++) {
				b[i][j] = b[i - 1][j]; // gia su ko chon goi thu i thi b[i,j] =
										// b[i-1][j];
				// sau do danh gia neu chon goi i se duoc loi hon thi dat lai
				// B[i,j]
				if (j >= kg[i] && b[i][j] < (b[i - 1][j - kg[i]] + price[i])) {
					b[i][j] = b[i - 1][j - kg[i]] + price[i];
				}
			}
		}
	}
}

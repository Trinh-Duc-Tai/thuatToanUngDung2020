package after_26_3;

import java.util.Scanner;

public class DIGITS {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int dem = 0;
		long x = 0;
		for (int i = 1; i < 10; i++) {
			for (int c = 1; c < 10; c++) {
				if (c != i) {
					for (int t = 1; t < 10; t++) {
						if (t != c && t != i) {
							for (int h = 1; h < 10; h++) {
								if (h != c && h != t && h != i) {
									for (int u = 1; u < 10; u++) {
										if (u != h && u != c && u != t && u != i) {
											for (int s = 1; s < 10; s++) {
												if (s!=u&&s != h && s != c && s != t && s != i) {
													for (int k = 1; k < 10; k++) {
														if (k!=s&&k!=u&&k != h && k != c && k != t && k != i) {
															x = i * 100 + c * 10 + t - (k * 100 + 62) + h * 1000 + u * 100
																	+ s * 10 + t;
															if (x == N) {
																dem++;
															}
														}
													}
												}
												
											}
										}

									}
								}

							}
						}
					}
				}
			}
		}
		System.out.println(dem);
	}
}

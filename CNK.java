import java.util.Scanner;

public class CNK {
	private static long mau,mu;
	private static long m;
	private static long res;
	private static long C(long k, long n) {
	    if (k == 0 || k == n) return 1;
	    if (k == 1) return n;
	    return (C(k - 1, n - 1)%m + C(k, n - 1)%m)%m;
	}
	public static void main(String[] args) throws FileNotFoundException {
		System.setIn(new FileInputStream("input_CNK.txt"));
		Scanner sc = new Scanner(System.in);
		int soTest = sc.nextInt();
		for (int tCase = 1; tCase <= soTest; tCase++) {
			mau = sc.nextLong();
			mu = sc.nextLong();
			m = sc.nextLong();
			res = C(mu,mau)%m;
			System.out.println(res);
		}
	}
}


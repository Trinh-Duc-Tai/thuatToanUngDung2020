
import java.util.Scanner;

public class LOCATE {
	private static int L, C, ketQua;
	private static int demA, demB;
	private static int mapA[][],mapB[][];
	private static Scanner sc;
	private static int NUMBER = 1000;
	private static int D[][];
	private static int ax[],ay[],bx[],by[];

	public static void main(String[] args)   {
		sc = new Scanner(System.in);
		int soTest = sc.nextInt();
		for (int tCase = 1; tCase <= soTest; tCase++) {
			L = sc.nextInt();
			C = sc.nextInt();
			mapA = new int[L][C];
			mapB = new int[L][C];
			D = new int[2001][2001];
			demA = 0;
			demB = 0;
			ax=new int[3000];
			ay=new int[3000];
			bx=new int[3000];
			by=new int[3000];
			for (int i = 0; i < L; i++) {
				for (int j = 0; j < C; j++) {
					mapA[i][j] = sc.nextInt();
					if(mapA[i][j] == 1){
						ax[demA] = i;
						ay[demA] = j;
						demA++;
					}
				}
			}
			for (int i = 0; i < L; i++) {
				for (int j = 0; j < C; j++) {
					mapB[i][j] = sc.nextInt();
					if(mapB[i][j] == 1){
						bx[demB] = i;
						by[demB] = j;
						demB++;
					}
				}
			}
			
			ketQua = 0;
			for (int i = 0; i < demA; i++) {
				for (int j = 0; j < demB; j++) {
					int tmp = ++D[by[j]-ay[i]+NUMBER][bx[j]-ax[i]+NUMBER];
					ketQua = Math.max(ketQua, tmp);
				}
			}
			System.out.println(ketQua);
		}
	}
}

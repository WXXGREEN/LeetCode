package frequecy_1;

public class SpiralMatrix2 {
	public int[][] generateMatrix(int n){
		int[][] res=new int[n][n];
		int value=1;
		if(n==0)
			return res;
		for(int i=0;i<n/2;i++){
			int lastCol=n-i-1;
			int lastRow=n-i-1;
			for(int j=i;j<lastCol;j++)
				res[i][j]=value++;//第一行
			for(int j=i;j<lastRow;j++)
				res[j][lastCol]=value++;//最后一列
			for(int j=lastCol;j>i;j--)
				res[lastRow][j]=value++;//最后一行
			for(int j=lastRow;j>i;j--)
				res[j][i]=value++;//第一列
			
		}
		if(n%2==1)
			res[n/2][n/2]=value;
		return res;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

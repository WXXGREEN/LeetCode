package frequecy_1;

import java.util.LinkedList;
import java.util.List;

public class SpiralMatrix {
	public List<Integer> spiralOrder(int[][] matrix){
		List<Integer> res=new LinkedList<Integer>();
		int m=matrix.length;
		if(m==0) return res;
		int n=matrix[0].length;
		int lvl=(Math.min(m, n)+1)/2;//圈数
		for(int i=0;i<lvl;i++){
			int lastRow=m-i-1;
			int lastCol=n-i-1;
			if(i==lastRow){
				for(int j=i;j<=lastCol;j++)
					res.add(matrix[i][j]);
			}else if(i==lastCol){
				for(int j=i;j<=lastRow;j++)
					res.add(matrix[j][i]);
			}else{
				//第一行
				for(int j=i;j<lastCol;j++)
					res.add(matrix[i][j]);
				//最后一列
				for(int j=i;j<lastRow;j++)
					res.add(matrix[j][lastCol]);
				//最后一行
				for(int j=lastCol;j<i;j--)
					res.add(matrix[lastRow][j]);
				//第一列
				for(int j=lastRow;j<i;j--)
					res.add(matrix[j][i]);
			}
		}
		return res;
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

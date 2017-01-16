package frequecy_1;

import java.util.ArrayList;
import java.util.List;

public class NQueens {
//	public ArrayList<String[] > solveNQueens(int n){
//		ArrayList<String[] > result=new ArrayList<String[] >();
//		int[] queenList=new int[n];
//		placeQueens(queenList,0,n,result);
//		return result;
//	}
//	
//	public void placeQueens(int[] queenList,int row,int n,ArrayList<String[] > result){
//		StringBuilder[] solution=new StringBuilder[n];
//		if(row==n){
//			for(int i=0;i<n;i++){
//				solution[i]=new StringBuilder();
//				for(int j=0;j<n;j++){
//					solution[i].append('.');
//				}
//			}
//		
//			for(int i=0;i<n;i++){
//				solution[i].setCharAt(queenList[i], 'Q');
//			}
//		    String[] ss=new String[n];
//		    for(int i=0;i<n;i++){
//			    ss[i]=solution[i].toString();
//		    }
//		    result.add(ss);
//		    return;
//		}
//		for(int col=0;col<n;col++){
//			if(checkPosition(queenList,row,col)){
//				queenList[row]=col;
//				placeQueens(queenList,row+1,n,result);
//			}
//		}
//	}
//	
//	public boolean checkPosition(int[] queenList,int row,int col){
//		for(int preRow=0;preRow<row;preRow++){
//			int preCol=queenList[preRow];
//			if(preRow==row||preCol==col) 
//				return false;
//			if(row-preRow==col-preCol)
//				return false;
//			if(preRow+preCol==row+col)
//				return false;
//		}
//		return true;
//	}
	
	public List<List<String>> solveNQueens(int n){
		char[][] board=new char[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				board[i][j]='.';
		List<List<String>> res=new ArrayList<List<String>>();
		dfs(board,0,res);
		return res;
	}
	public void dfs(char[][] board,int colIndex,List<List<String>> res){
		if(colIndex==board.length){
			res.add(construct(board));
			return;
		}
		for(int i=0;i<board.length;i++){
			if(validate(board,i,colIndex)){
				board[i][colIndex]='Q';
				dfs(board,colIndex+1,res);
				board[i][colIndex]='.';
			}
		}
	}
	public List<String> construct(char[][] board){
		List<String> res=new ArrayList<String>();
		for(int i=0;i<board.length;i++){
			String s=new String(board[i]);
			res.add(s);
		}
		return res;
	}
	public boolean validate(char[][] board,int x,int y){
		for(int i = 0; i < board.length; i++) {
            for(int j = 0; j < y; j++) {
                if(board[i][j] == 'Q' && (x + j == y + i || x + y == i + j || x == i))
                    return false;
            }
		}
		return true;
	}

	public static void main(String[] args) {
        
	}

}

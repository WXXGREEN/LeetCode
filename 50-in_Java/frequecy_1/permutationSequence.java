package frequecy_1;

import java.util.ArrayList;

public class permutationSequence {
	public String getPermutation(int n,int k){
		ArrayList<String> total=new ArrayList<String>();
		ArrayList<Integer> sub=new ArrayList<Integer>();
		dfsHelper(n,1,total,sub);
		return total.get(k);
	}
	public void dfsHelper(int n,int index,ArrayList<String> total,ArrayList<Integer> sub){
		if(sub.size()==n){
			String res=new String(sub.toString());
			total.add(res);
			return;
		}
		for(int i=index;i<=n;i++){
			sub.add(i);
			dfsHelper(n,i+1,total,sub);
			sub.remove(sub.size()-1);
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		permutationSequence p=new permutationSequence();
		System.out.println(p.getPermutation(3, 4));
	}

}

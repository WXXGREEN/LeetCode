package frequecy_1;

import java.util.ArrayList;

public class lengthOfLastWord {
	public int lengthOfLastWord(String s){
		String blank=new String(" ");
		if(s==null||s.length()==0||s.equals(blank)){
            return 0;
        }
        else if(!s.contains(blank)){
            return s.length();
        }else{
            String[] res=new String[s.length()];
            res=s.split(blank);
            if(res.length==0)
            	return 0;
            else 
            	return res[res.length-1].length();
        }
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

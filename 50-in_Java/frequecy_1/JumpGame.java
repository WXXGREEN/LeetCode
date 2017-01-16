package frequecy_1;

public class JumpGame {
	public boolean canJump(int[] nums){
		if(nums==null||nums.length==0||nums.length==1){
            return true;
        }
        int maxDist=nums[0];
        for(int i=0;i<nums.length;i++){
            if(nums[i]+i>=maxDist&&i<=maxDist){
               maxDist=nums[i]+i;
            }
            
        }
        return maxDist>=(nums.length-1);
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub

	}

}

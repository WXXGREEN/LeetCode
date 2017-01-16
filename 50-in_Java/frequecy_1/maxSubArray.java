package frequecy_1;

public class maxSubArray{
	//DP method
	public int maxSubarray(int[] nums){
		return maxSub1(nums);
	}
	private int maxSub1(int[] nums){
		int current=0,sum=Integer.MIN_VALUE;
		for(int i=0;i<nums.length;i++){
			current+=nums[i];
		if(current>sum) sum=current;
			if(current<0) current=0;
		}
		return sum;
	}
	
	//Divide and conquer method
	private int cal_max(int[] nums,int left,int right){
		if(left==right)
			return nums[left];
		int mid=(left+right)/2;
		int lmax=cal_max(nums,left,mid);
		int rmax=cal_max(nums,mid+1,right);
		int sum=0,mlmax=nums[mid];
		for(int i=mid;i>=left;i--){
			sum+=nums[i];
			if(sum>mlmax)
				mlmax=sum;
		}
		int mrmax=nums[mid+1];
		sum=0;
		for(int j=mid+1;j<=right;j++){
			sum+=nums[j];
			if(sum>mrmax)
				mrmax=sum;
		}
		return Math.max( Math.max(lmax,rmax), mlmax+mrmax);
	}
	private int maxSub2(int[] nums){
		return cal_max(nums,0,nums.length-1);
	}
	
	public static void main(String[] args){
		maxSubArray s=new maxSubArray();
		int[] nums={-2,-1};
		System.out.println(s.maxSub2(nums));
	}
}
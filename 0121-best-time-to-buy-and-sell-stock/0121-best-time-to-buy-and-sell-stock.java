class Solution {
    public int maxProfit(int[] arr) {
        int[] maxarr =  new int[arr.length];
        int[] minarr =  new int[arr.length];
        minarr[0]=arr[0];
        maxarr[arr.length-1]=arr[arr.length-1];
        for(int i=1;i<arr.length;i++){
            minarr[i]=Math.min(arr[i],minarr[i-1]);
        }
        for(int j=arr.length-2;j>-1;j--){
            maxarr[j]=Math.max(maxarr[j+1],arr[j]);
        }
        int ans=0;
        for(int i=0;i<arr.length;i++)ans=Math.max(ans,maxarr[i]-minarr[i]);
        return ans;
    }
}
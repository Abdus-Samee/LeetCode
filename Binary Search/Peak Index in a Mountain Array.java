class Solution {
    public int peakIndexInMountainArray(int[] arr) {
        int len = arr.length;
        int m = -1;
        int i;
        
        for(i = 0; i < len-1; i++){
            if(arr[i] > arr[i+1]) break;
        }
        
        return i;
    }
}


class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
	    int lo=0, hi=n-1;
	    int h; //for height
	    int max = INT_MIN;
	    int width;
	    while(lo<hi){
	        width=hi-lo;
	        h = height[hi]>height[lo]?height[lo]:height[hi];
	        int area =h*width;
	        if(area>max){
	            max=area;
	        }
	        if(height[lo]<height[hi]){
	            lo++;
	        }
	        else{
	            hi--;
	        }
	    }
	    
	    return max;



    }
        

};

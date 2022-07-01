class Solution {
public:
    static bool sortcol(const vector<int>& v1, const vector<int>& v2)
{
    return v1[1] < v2[1];
}
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        if(boxTypes.size()==0) return 0;
        sort(boxTypes.begin(), boxTypes.end(), sortcol);
        
        int maxBox=0, maxUnit=0;
        for(int i=boxTypes.size()-1; i>=0; i--){
            if(maxBox<truckSize){
                int temp = maxBox+boxTypes[i][0];
                if(temp>truckSize){
                    maxUnit+=(truckSize-maxBox)*boxTypes[i][1];
                    break;
                }
                
                maxBox+=boxTypes[i][0];
                maxUnit+=boxTypes[i][0]*boxTypes[i][1];
            }
        }
        
        return maxUnit;
        
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int found=0,row=0;
        int col=matrix[0].size()-1;
        while(row<=matrix.size()-1 && col>=0){
            if(target==matrix[row][col]){
                found=1;
            }
            (target>matrix[row][col]) ? row++ : col--;
        }
        if(!found){
            return false;
        }
        else{
            return true;
        }
    }
};
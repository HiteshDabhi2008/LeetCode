class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n=heights.size();
        for(int i=0;i<n-1;i++){
           int maxu=i;
            for(int j=i;j<n;j++){
                if(heights[j]>heights[maxu]){
                    maxu=j;
                }
            }
            int temp=heights[i];
            heights[i]=heights[maxu];
            heights[maxu]=temp;
            string t=names[i];
            names[i]=names[maxu];
            names[maxu]=t;
        }
        return names;
    }
};
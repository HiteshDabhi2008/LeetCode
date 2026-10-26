class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> a;
        int j=0;
        for(int i=1;i<=n;i++){
            if(j<target.size() && target[j]==i){
                j++;
                a.push_back("Push");
            }
            else if(j<target.size()){
                a.push_back("Push");
                a.push_back("Pop");
            }
        }
        return a;
    }
};
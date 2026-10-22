class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int tem;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        int n=nums1.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<(n);j++){
                if(nums1[j]<nums1[i]){
                    tem=nums1[j];
                    nums1[j]=nums1[i];
                    nums1[i]=tem;
                }
            }
        }
        if(n%2==0){
            return (nums1[(n/2)-1]+nums1[n/2])/2.0;
        }
        else{
            return (nums1[n/2]);
        }
    }
};
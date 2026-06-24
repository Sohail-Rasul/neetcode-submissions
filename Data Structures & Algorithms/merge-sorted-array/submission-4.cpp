class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Keep 3 pointers, One at end, one at greatest of N1, and one at greatest of N2
        // Compare greatest, decrease, replace.
        
        if(m==0){
            nums1=nums2;
            return;
        }
        else if(n==0){
            return;
        }
        int read1 = m-1;
        int read2 = n-1;
        int write = m+n-1;

        while(read2>=0){
            if(read1 >=0 && nums1[read1]>=nums2[read2]){
                nums1[write] = nums1[read1];
                write--;
                read1--;
                continue;
            }
            else{
                nums1[write] = nums2[read2];
                write--;
                read2--;
            }
        }
    }
};
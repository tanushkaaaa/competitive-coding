class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int n=(n1+n2);
        int ele1=-1,ele2=-1;
        int i=0,j=0;
        int count=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(count==(n/2)){
                    ele1=nums1[i];

                }
                if(count==(n/2-1)){
                    ele2=nums1[i];

                }

                i++;
                count++;
            }

            else{
                if(count==(n/2)){
                    ele1=nums2[j];

                }
                if(count==(n/2-1)){
                    ele2=nums2[j];

                }
                j++;
                count++;

            }

        }

        while(i<n1){
                if(count==(n/2)){
                    ele1=nums1[i];

                }
                if(count==(n/2-1)){
                    ele2=nums1[i];

                }

                i++;
                count++;

        }

        while(j<n2){
                if(count==(n/2)){
                    ele1=nums2[j];

                }
                if(count==(n/2-1)){
                    ele2=nums2[j];

                }
                j++;
                count++;
           

        }
        if(n%2==1){
            return double(ele1);
        }
        else{
            return (double(ele1)+double(ele2))/2.0;
        }

    }
};
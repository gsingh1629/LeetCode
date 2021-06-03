//MEDIAN OF TWO SORTED ARRAYS

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(auto i:nums1){
            res.push_back(i);
        }
        for(auto i:nums2){
            res.push_back(i);
        }
        sort(res.begin(),res.end());
        if(res.size()%2){
            return res[res.size()/2];
        }
        else{
            return (res[(res.size())/2] +res[(res.size())/2-1])/2.0l;
        }
    }

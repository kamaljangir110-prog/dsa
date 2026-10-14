class Solution {
public:
    int search(vector<int>& nums, int key) {
        int n = nums.size();
      int start = 0; 
      int end =n-1;
      int mid;
      while(start<=end){
           mid = start + (end-start)/2;
 
              if(nums[mid]==key){
              return mid;
             }

              else if(nums[mid]<key){
               start = mid + 1;
               }

              else{
               end = mid -1;
              }
          } 
      return -1;

     }
    
};
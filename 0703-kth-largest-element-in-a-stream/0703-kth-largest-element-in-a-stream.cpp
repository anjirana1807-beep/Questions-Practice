class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>>minheap;
    int k;
    KthLargest(int k, vector<int>& nums): k(k) {
        for(int num:nums){
            if(minheap.size()<k){
                minheap.push(num);
            }else if(num > minheap.top()){
                minheap.push(num);
                if(minheap.size()>k){
                    minheap.pop();
                }
            }
        }
    }
    
    int add(int val) {
         if(minheap.size()<k){
            minheap.push(val);
         }else if(val > minheap.top()){
                minheap.push(val);
                minheap.pop();
         }
           return minheap.top();
    }   
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
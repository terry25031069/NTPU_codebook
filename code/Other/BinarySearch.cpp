int BinarySearch(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1, m;
    while(l <= r){
        m = l + (r - l >> 1);
        if(nums[m] == target) return m;
        else if(target < nums[m]) r = m - 1;
        else l = m + 1;
    }
    if(target < nums[m]) return m;
    return m + 1;
}
class Solution {
    fun containsDuplicate(nums: IntArray): Boolean {
        val set = HashMap<Int, Int>()
        for (i in 0 until nums.size) {
            if (set.containsKey(nums[i])) return true
            set.put(nums[i], 1)
        }
        return false
    }
}
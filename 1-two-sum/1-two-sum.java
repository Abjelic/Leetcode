class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] answer;
        answer = new int[2];
        for (int i = 0; i < nums.length - 1; i++) {
            for (int g = i + 1; g < nums.length; g++) {
                if (nums[i] + nums[g] == target) {
                    answer[0] = i;
                    answer[1] = g;
                }
            }
        }
        return answer;
    }
}
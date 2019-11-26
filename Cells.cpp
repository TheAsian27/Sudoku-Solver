public class Cells {
	int row, col;
	int value;
	vector<int> nums(9);

	public Cells(int r, int c) {
		row = r;
		col = c;
		for (int i = 1; i < 10; i++) {
			nums.push_back(i);
		}
	}

	public Cells(int r, int c, int val) {
		row = r;
		col = c;
		value = val;
	}
	
	public ArrayList<Integer> getList() {
		return nums;
	}
	
	public removeNum (int i) {
		int curr = 0;
		while (curr != nums.size()) {
			if (nums[curr] == i) {
				nums.remove(nums.begin() + i);
			} else {
				curr ++;
			}
		}
		if (nums.size() == 1) {
			value = nums[0];
		}
	}
}

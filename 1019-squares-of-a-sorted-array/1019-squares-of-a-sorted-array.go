func sortedSquares(nums []int) []int {
	first := 0
	last := len(nums) - 1
	idx := len(nums) - 1
	newArr := slices.Clone(nums)
	//---
	for last >= first {
		if math.Abs(float64(nums[last])) > math.Abs(float64(nums[first])) {
			newArr[idx] = int(math.Pow(float64(nums[last]), 2))
			last -= 1
		} else {
			newArr[idx] = int(math.Pow(float64(nums[first]), 2))
			first += 1
		}
		idx -= 1
	}

	return newArr
}

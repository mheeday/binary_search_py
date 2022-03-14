package main

func bin_sort(in_arr []int, to_find int) int64 {
	last_ele := len(in_arr) - 1
	bias := 0
	if to_find == in_arr[0] {
		return 0
	} else if to_find == in_arr[last_ele] {
		return int64(last_ele)
	} else {
		for len(in_arr) > 1 {
			half := len(in_arr) / 2
			if to_find == in_arr[half] {
				return int64(half + bias)
			} else if to_find < in_arr[half] {
				in_arr = in_arr[:half]
				continue
			} else {
				in_arr = in_arr[half:]
				bias += half
			}
		}

	}
	return -1
}

func main() {
	
	start := time.Now()
	res := bin_sort(sample_arr, to_find)
	end := time.Now()

	dura := end.Sub(start)
	fmt.Println("Positon of ", to_find, " is ", res, " took ", dura.Microseconds())


}

package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)
	dList := make([][]int, N)
	for i := 0; i < N; i++ {
		var D1, D2 int
		fmt.Scanf("%d %d", &D1, &D2)
		dList[i] = []int{D1, D2}
	}
	var count = 0
	for _, d := range dList {
		if d[0] == d[1] {
			count += 1
		} else {
			count = 0
		}
		if count >= 3 {
			break
		}
	}
	if count >= 3 {
		fmt.Println("Yes")
	} else {
		fmt.Println("No")
	}

}

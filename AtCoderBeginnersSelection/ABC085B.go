package main

import (
	"fmt"
	"sort"
)

func main() {
	var N int
	fmt.Scanf("%d", &N)
	dList := make([]int, N)
	for i := 0;i < N;i++ {
		fmt.Scanf("%d", &dList[i])
	}

	sort.Sort(sort.Reverse(sort.IntSlice(dList)))

	var previous = 1000
	var count = 0
	for _, d := range dList {
		if d == previous {
			continue
		}
		previous = d
		count++
	}
	fmt.Printf("%d", count)
}

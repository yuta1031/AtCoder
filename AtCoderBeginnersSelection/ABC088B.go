package main

import (
	"fmt"
	"sort"
)

func main() {
	var N int
	fmt.Scanf("%d", &N)
	aList := make([]int, N)

	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &aList[i])
	}
	sort.Sort(sort.Reverse(sort.IntSlice(aList)))

	var alice, bob int
	for i, a := range aList {
		if i%2 == 0 {
			alice +=a
		} else {
			bob +=a
		}
	}
	fmt.Printf("%d", alice-bob)

}

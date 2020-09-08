package main

import (
	"fmt"
)

func main() {
	var N int
	var count = 0
	fmt.Scanf("%d", &N)
	ints := make([]int, N)

	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &ints[i])
	}
	c := true

	for c {
		for i, num := range ints {
			if num%2 != 0 {
				c = false
			}
			ints[i] = num / 2
		}
		if c == false {
			break
		}
		count++
	}
	fmt.Printf("%d\n", count)
}

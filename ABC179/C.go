package main

import "fmt"

func main() {
	var N int
	fmt.Scanf("%d", &N)
	var count = 0
	for A := 1; A <= N; A++ {
		count+= (N-1)/A
	}
	fmt.Println(count)
}

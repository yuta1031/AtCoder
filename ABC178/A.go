package main

import "fmt"

func main() {
	var x int
	fmt.Scanf("%d", &x)
	if x == 0 {
		fmt.Printf("%d", 1)
	} else {
		fmt.Printf("%d", 0)
	}
}

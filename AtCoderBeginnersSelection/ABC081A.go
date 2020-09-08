package main

import (
	"fmt"
	"strings"
)

func main() {
	var a string
	var b int
	fmt.Scanf("%s", &a)
	slice := strings.Split(a, "")
	for _, str := range slice {
		if str == "1" {
			b = b+1
		}
	}
	fmt.Printf("%d\n", b)
}

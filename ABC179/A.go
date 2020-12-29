package main

import (
	"fmt"
	"strings"
)

func main() {
	var S string
	fmt.Scanf("%s", &S)
	if strings.HasSuffix(S, "s") {
		fmt.Print(S+"es")
	} else {
		fmt.Print(S+"s")
	}
}

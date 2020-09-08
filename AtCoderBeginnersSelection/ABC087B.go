package main

import "fmt"

func main()  {
	var A, B, C, X int
	fmt.Scanf("%d", &A)
	fmt.Scanf("%d", &B)
	fmt.Scanf("%d", &C)
	fmt.Scanf("%d", &X)
	var i, j, k int
	var count int
	for i=0;i<=A;i++ {
		for j=0;j<=B;j++ {
			for k=0;k<=C;k++ {
				if i*500+j*100+k*50==X {
					count++
				}
			}
		}
	}
	fmt.Printf("%d", count)
}

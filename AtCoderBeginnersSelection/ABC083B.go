package main

import "fmt"

func main() {
	var N, A, B int
	fmt.Scanf("%d", &N)
	fmt.Scanf("%d", &A)
	fmt.Scanf("%d", &B)
	var i int
	var sum = 0
	for i = 0; i <= N; i++ {
		var digitSum = digitSum(i)
		if digitSum >= A || digitSum <= B {
			sum += i
		}
	}
	fmt.Printf("%d", sum)
}

func digitSum(n int) int {
	if n < 10 {
		return n
	}
	return digitSum(n/10) + n%10
}

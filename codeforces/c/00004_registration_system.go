package main

import . "fmt"

func main() {
	var n int
	Scanf("%d", &n)
	sys := make(map[string]int)
	for n > 0 {
		var temp string
		Scanf("%s", &temp)
		val, ok := sys[temp]
		if ok {
			sys[temp]++
			temp += Sprintf("%d", val)
			sys[temp] = 1
			Println(temp)
		} else {
			Println("OK")
			sys[temp] = 1
		}
		n--
	}
}

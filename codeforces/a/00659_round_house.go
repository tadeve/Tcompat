package main

import . "fmt"

func main() {
	var n, b, s, o int
	Scanf("%d%d%d", &n, &b, &s)
	//println(n, b, s)
	o = (s + b) % n
	if o < 0 {
		o += n
	}
	if o == 0 {
		o += n
	}
	Println(o)

}

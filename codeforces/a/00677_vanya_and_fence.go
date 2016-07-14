package main
import "fmt"
func main(){
    var n, h, sum int
    fmt.Scanf("%d%d",&n,&h)
    sum = n
    for i:= 0;i< n; i++{
        var temp int 
        fmt.Scanf("%d",&temp)
        if temp > h{
            sum++
        }
        
    }
    fmt.Printf("%d\n",sum) 
    
}
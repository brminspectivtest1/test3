package main

import (
    "flag"
    "fmt"
)

func main() {
	flag.Parse()
  fmt.Println("Dummy Application\n")
	for i, v := range flag.Args() {
    fmt.Printf("Argument %d: %s\n", i, v);
  }
  fmt.Println("\nHave a nice day!")
}


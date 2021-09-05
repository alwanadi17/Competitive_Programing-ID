package kata

import (
  "strings"
  "fmt"
)

func VertMirror(s string) string {
    arr := strings.Split(s, "\n")
    f := ""
    for _, v := range arr {
      rs := []rune(v)
      for i, j := 0, len(rs)-1; i < j; i, j = i+1, j-1 {
        rs[i], rs[j] = rs[j], rs[i]
      }
      f += string(rs) + "\n"
    }
    return fmt.Sprintf("%s", strings.TrimRight(f, "\n"))
}

func HorMirror(s string) string {
    arr := strings.Split(s, "\n")
    f := ""
    for i, j := 0, len(arr)-1; i < j; i, j = i+1, j-1 {
        arr[i], arr[j] = arr[j], arr[i]
    }
    
    for _, v := range arr {
      f += v + "\n"
    }
    return fmt.Sprintf("%s", strings.TrimRight(f, "\n"))
}

type FParam func(string) string

func Oper(f FParam, x string) string {
  return f(x)
}
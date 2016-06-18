fn main(){
  println!("{}", p2(0, 0, 0));
}

fn p2(i: u32, f: u32, s: u32) -> u32 {
  if f >= 4000000 {
    s
  } else {
    if f % 2 == 0{
      p2(i + 1, fibonacci(0, 1, i+1), s + f)  
    } else{
      p2(i + 1, fibonacci(0, 1, i+1), s)  
    }
  }
}

fn fibonacci(a: u32, b: u32, n: u32) -> u32 {
  if n == 0 {
    a
  } else {
    fibonacci(b, a+b, n-1)
  }
}
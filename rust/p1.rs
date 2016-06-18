fn main() {
  println!("{}", p1(0, 0));
}

fn p1(i: u32, sum: u32) -> u32 {
  if i == 1000 {
    sum
  } else {
    if i % 5 == 0 || i % 3 == 0 {
      p1(i + 1, sum + i)
    } else{
      p1(i + 1, sum)
    }
  }
}
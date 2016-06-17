<?php 
function fibonacci($a, $b, $n){
  if($n == 0){
    return $a;
  }
  return fibonacci($b, $a+$b, $n - 1);
}

$i = 0;
$fib = 0;
$sum = 0;
while($fib < 4000000){
  $fib = fibonacci(0, 1, $i);
  if($fib % 2 == 0){
    $sum += $fib;
  }
  $i++;
}
echo $sum."\n";
?>
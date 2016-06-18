fibonacci = function(a, b, n){
  if(n === 0){
    return a;
  }

  return fibonacci(b, a + b, n - 1);
}

var i = 0;
var f = 0;
var s = 0;

while(f < 4000000){
  f = fibonacci(0, 1, i);
  if(f % 2 === 0){
    s += f;
  }
  i++;
}

console.log(s);
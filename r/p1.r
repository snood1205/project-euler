sum -> 0
for(i in c(1:999)){
  if(i %% 3 == 0 || i %% 5 == 0){
    sum -> sum + i
  }
}
print(sum)
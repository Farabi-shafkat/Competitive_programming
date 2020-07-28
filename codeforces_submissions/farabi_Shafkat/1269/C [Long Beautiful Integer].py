import math
def make(num_str,k):
  ans_str=num_str[0:k]
  while len(ans_str)<len(num_str):
    ans_str+=ans_str
  if len(ans_str)>len(num_str):
    ans_str=ans_str[0:len(num_str)]
  if int(ans_str)<int(num_str):
    ans_str=str(int(ans_str[0:k])+1)
    while len(ans_str)<len(num_str):
      ans_str+=ans_str
    if len(ans_str)>len(num_str):
      ans_str=ans_str[0:len(num_str)]
  print(len(ans_str))
  print(ans_str)
  return 

st=input().split()
#print(st)
n=int(st[0])
k=int(st[1])
num=input()

#print(num)


make(num,k)


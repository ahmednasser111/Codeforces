# Decode String
t = int(input())
for _ in range(t):
    n = int(input())
    x = int(input())
    s = "";
    while (x > 0):
      temp = x % 10;
      if temp == 0:
        temp = x % 1000 // 10;
        x //= 100;
      s += chr(temp + 96);
      x //= 10;
    print(s[::-1], end = '\n')
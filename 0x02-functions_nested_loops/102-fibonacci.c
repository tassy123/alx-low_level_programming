a, b = 1, 2
fibonacci = [a, b]

for i in range(48):
    a, b = b, a + b
    fibonacci.append(b)

print(", ".join(str(i) for i in fibonacci))

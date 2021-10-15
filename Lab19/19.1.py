n = int(input())
mas = []
for i in range(n):
    mas.append(int(input()))
for i in range(n-1):
    un = 1
    try:
        while mas[i] == mas[i+1]:
            mas.pop(i+1)
    except IndexError:
        pass
print(mas)

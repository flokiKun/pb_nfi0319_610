# Выполнил на питоне , т.к решение не через немутативные массивы не придумал
K = int(input('Введите число К:'))
series = []
i = 0

while True:
    inp = int(input("Введите число:"))
    if inp==0:
        break
    series.append(inp)

for num in series:
    if num < K:
        i+=1

print("Кол-во чисел меньше K:"+str(i))

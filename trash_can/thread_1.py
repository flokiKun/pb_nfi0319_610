from concurrent.futures import ThreadPoolExecutor, as_completed
import numpy as np

# функция создания вектора
def vectorCreation(st:str):
	coord = st.split()
	vec = []
	for number in coord:
		vec.append(float(number))
	return np.array(vec)

#Делаем вектора
v1 = vectorCreation(str(input('Введите координаты вектора через пробел:')))
v2 = vectorCreation(str(input('Введите координаты вектора через пробел:')))

sum = 0
# Запускаем вычиления в одельных потоках
with ThreadPoolExecutor(max_workers=4) as executor:
	results = []
	for i in range(len(v1)):
		results.append(executor.submit(lambda fx: fx[0] * fx[1], [v1[i], v2[i]]))

# Суммируем результаты потоков , для получения результатов
for future in as_completed(results):
	sum += future.result()

print(f'Результат равен {sum}')

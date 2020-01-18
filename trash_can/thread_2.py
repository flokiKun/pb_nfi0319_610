from concurrent.futures import ThreadPoolExecutor, as_completed
import numpy as np

# Считаем скалярное произведение в параллельных потоках
def parallelScalarProduct(vs):
    sum = 0
    with ThreadPoolExecutor() as executor:
        res = []
        for i in range(len(vs[0])):
            res.append(executor.submit(lambda fx: fx[0] * fx[1], [vs[0][i], vs[1][i]]))
        for future in as_completed(res):
            sum += future.result()
    return sum

# Парсим матрицу из консоли ввода
def createMatrix():
    return np.array(eval(input('Введите матрицу в одну строку, используя квадратные скобочки и запятые: ')))

# Делаем из матриц вектора
def getVectors(matrix, axis=0):
    vectors = []
    if axis != 0:
        matrix = matrix.transpose()
    if len(list(matrix.shape)) <= 1:
        vectors = [list(matrix)]
    else:
        for line in matrix:
            vectors.append(list(line))
    return vectors

# Считаем произведение матриц в параллельных потоках
def parallelMatrixProduct(vs1, vs2):
    with ThreadPoolExecutor() as executor:
        holder = [0] * len(vs1) * len(vs2)
        index = 0
        for v1 in vs1:
            for v2 in vs2:
                holder[index] = [v1, v2]
                index += 1
        results = list(executor.map(parallelScalarProduct, holder))
        results = np.array([results]).reshape(len(vs1), len(vs2))
        return results

# Тестовые данные
# [[1, 6, 5, 3], [7, 8, 4, 2]]
# [[5, 1, 3, 7], [2, 2, 8, 7], [8, 4, 2, 0], [9, 5, 1, 5]]


if __name__ == "__main__":
    vec1 = getVectors(createMatrix())
    vec2 = getVectors(createMatrix(), axis=1)
    res = parallelMatrixProduct(vec1, vec2)
    print(res)

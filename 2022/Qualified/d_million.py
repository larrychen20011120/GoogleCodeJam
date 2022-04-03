import numpy as np

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        N = int(input())
        line = input().split()
        arr = np.array([int(l) for l in line])
        arr = np.sort(arr)
        count = 0
        for a in arr:
            count += 1
            if a < count:
                count -= 1
        print(f'Case #{i+1}: {count}')

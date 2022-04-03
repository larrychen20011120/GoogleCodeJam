if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        TOTAL = 1000000
        c = list()
        m = list()
        y = list()
        k = list()
        for j in range(3):
            line = input().split()
            c.append(int(line[0]))
            m.append(int(line[1]))
            y.append(int(line[2]))
            k.append(int(line[3]))
        min_arr = [min(c), min(m), min(y), min(k)]
        idx_sort = sorted(range(4), key= lambda k: min_arr[k])
        final = [0] * 4
        if sum(min_arr) >= TOTAL:
            for j, idx in enumerate(idx_sort):
                if min_arr[idx] >= TOTAL / (4 - j):
                    final[idx] = int(TOTAL / (4 - j))
                else:
                    final[idx] = min_arr[idx]
                TOTAL -= final[idx]
            print(f'Case #{i+1}: {final[0]} {final[1]} {final[2]} {final[3]}')
        else:
            print(f'Case #{i+1}: IMPOSSIBLE')

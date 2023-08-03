# bubble sort

def bubble_sort(a):
    n = len(a)
    for i in range(n):
        for j in range(0, n-i-1):
            if a[j] > a[j+1]:
                # swap
                a[j], a[j+1] = a[j+1], a[j]
    

if __name__ == '__main__':
    a = [3, 5, 2, 1, 4]
    print(a)
    bubble_sort(a)
    print(a)

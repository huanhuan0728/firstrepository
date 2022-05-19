# This is a sample Python script.
# See PyCharm help at https://www.jetbrains.com/help/pycharm/


def c():
    a = int(input("请输入a的值"))
    b = int(input("请输入b的值"))

    return a + b


print(c())

def fun ( a, *tupleb):
    print("a =", a)
    print("* tupleb = ", tupleb)

fun (3, 4, 5, 6)

def a(a,b):
    for i in range(a):
        for j in range(b):
            print('*', end='')
        else:
            print('-', end='')
            print()
a(6,6)



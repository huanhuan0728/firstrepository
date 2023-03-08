import math
def quadratic(a, b, c):
    delta = b**2 - 4*a*c
    if delta < 0:
        return None, None
    elif delta == 0:
        x = -b / (2*a)
        return x, x
    else:
        # 使用龙格-库塔方法求解根
        if b > 0:
            x1 = (-b - math.sqrt(delta)) / (2*a)
            x2 = c / (a*x1)
        else:
            x2 = (-b + math.sqrt(delta)) / (2*a)
            x1 = c / (a*x2)
        return x1, x2

# 测试
a, b, c = 1.2345, 2.3456, 3.4567
x1, x2 = quadratic(a, b, c)

print(f"The roots of {a:.4f}x^2 + {b:.4f}x + {c:.4f} are:")
if x1 is None or x2 is None:
    print("方程没有实数根！")
else:
    print(f"x1 = {x1:.4f}, x2 = {x2:.4f}")

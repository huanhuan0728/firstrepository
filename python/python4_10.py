# 这是一个示例 Python 脚本。

# 按 ⌃R 执行或将其替换为您的代码。
# 按 双击 ⇧ 在所有地方搜索类、文件、工具窗口、操作和设置。

my_foods = ['pizza', 'falafel', 'carrot cake', 'milk']

# 把另一个变量关联到my_food，即两个变量都指向这个列表
friends_foods = my_foods

my_foods.append('ice cream')
friends_foods.append('cannoli')

# 这样打印出来到两个变量是一样的
print('My foods are:')
print(my_foods)

print('My friends foods are:')
print(friends_foods)

# 4-10
my_foods1 = my_foods[0:3]
print('The first three items in the list are:')
print(my_foods1)

my_foods2 = my_foods[1:4]
print('The items from the middle of the list are:')
print(my_foods2)

my_foods3 = my_foods[2:5]
print('The last three items of the list are:')
print(my_foods3)

# 4-11
my_foods4 = my_foods[:]
my_foods4.append('pizza')
print('my_foods are: ')
print(my_foods)

print('my_foods4 are: ')
print(my_foods4)

for my_foods5 in my_foods4:
    print(my_foods5)

# 元组
numbers = (1, 2, 3, 4, 5, 6)
print('元组中的数字有:')
for number in numbers:
    print(number)

# 尝试修改元组
# numbers.[0] = 1

# if语句
cars = ['audi', 'bmw', 'subaru', 'toyota']

for car in cars:
    if car == 'bmw':
        print(car.upper())
    else:
        print(car.title())

# 使用多个elif的代码块
age = 12

if age < 14:
    price = 0
elif age < 18:
    price = 25
elif age < 20:
    price = 30
elif age < 40:
    price = 40
print(f'Your admission cost is {price}')


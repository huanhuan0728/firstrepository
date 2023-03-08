# 简单的函数
def greet():
    """显示简单的问候语"""
    print("hello")

# 向函数传递信息
def greet_user(username):
    print(username)

greet_user('jesse')

# 向函数传递实参
def describe(animal_type, animal_name):
    """显示宠物的信息："""
    print(f"\nI have a {animal_type},")
    print(f"My {animal_type}'s name is {animal_name}")

describe('dog', 'harry')

# 关键字实参
describe(animal_type='dog', animal_name= 'harry')

# 默认值
# def describe(animal_type, animal_name = 'harry'):



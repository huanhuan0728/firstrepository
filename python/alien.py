# 这是一个示例 Python 脚本。

# 按 ⌃R 执行或将其替换为您的代码。
# 按 双击 ⇧ 在所有地方搜索类、文件、工具窗口、操作和设置。

alien = {'color': 'red', 'point': 5}

new_points = alien['point']
print(f'You just earned {new_points} points!')

x_increament = 0
alien_0 = {'x_position': 5, 'y_position': 10, 'speed':'medium'}
print(f"original position: {alien_0['x_position']}")

# 向右移动外星人
# 根据当前的速度决定外星人向右移动多远
if alien_0['speed'] == 'slow':
    x_increament = 1
elif alien_0['speed'] == 'medium':
    x_increament = 2
elif alien_0['speed'] == 'fast':
    x_increament = 3

# 新位置
alien_0['x_position'] += x_increament
print(f"New position: {alien_0['x_position']}")

# 修改字典中的值
alien_0['speed'] = 'fast'

# 删除健值对
del alien_0['speed']
print(alien_0)






# 这是一个示例 Python 脚本。

# 按 ⌃R 执行或将其替换为您的代码。
# 按 双击 ⇧ 在所有地方搜索类、文件、工具窗口、操作和设置。
from typing import Dict

favorite_languages = {
    'jen':'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python'
}

language = favorite_languages['jen'].title()
print(f"jen's favorite language is {language}")

# 使用get()来访问值
language = favorite_languages.get('jen', 'No tom value assigned.')
print(language)







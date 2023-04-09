# Конечно, вот пример кода unittest на языке Python, 
# который позволяет передавать аргументы командной строки:

# В этом примере мы получаем аргументы командной строки с помощью sys.argv, 
# затем преобразуем их в словарь и задаем значения по умолчанию. 
# Затем мы удаляем аргументы из словаря kwargs, чтобы они не были переданы unittest.

# Затем мы устанавливаем значения аргументов в тестовом классе MyTest, 
# используя статические переменные. Наконец, мы запускаем unittest с 
# помощью unittest.main() и передаем ему все аргументы командной строки, 
# кроме arg1 и arg2, используя параметр argv.

import unittest
import sys

class MyTest(unittest.TestCase):

    def test_one(self):
        print("arg1:", self.arg1)
        self.assertEqual(self.arg1, "value1")

    def test_two(self):
        print("arg2:", self.arg2)
        self.assertEqual(self.arg2, "value2")

if __name__ == '__main__':
    # Получаем аргументы командной строки
    args = sys.argv[1:]

    # Создаем пустой словарь для аргументов
    kwargs = {}

    # Ищем аргументы в формате --key=value
    for arg in args:
        if '=' in arg:
            key, value = arg.split('=')
            kwargs[key] = value

    # Задаем значения аргументов по умолчанию
    arg1 = kwargs.get('arg1', 'value1')
    arg2 = kwargs.get('arg2', 'value2')

    # Удаляем аргументы из kwargs, чтобы они не были переданы unittest
    del kwargs['arg1']
    del kwargs['arg2']

    # Передаем аргументы в класс MyTest
    MyTest.arg1 = arg1
    MyTest.arg2 = arg2

    # Запускаем unittest
    unittest.main(argv=[sys.argv[0]] + args, **kwargs)

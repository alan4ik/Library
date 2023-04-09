# В этом примере мы создаем экземпляр класса MyTest 
# и задаем аргументы для теста в переменной args. 
# Затем мы вызываем функцию test_with_arguments с этими аргументами, 
# используя оператор * для распаковки списка аргументов. 
# В тесте test_with_arguments мы используем встроенные переменные 
# _testMethodName и _testMethodDoc, чтобы получить имя теста и его документацию.

# Кроме того, можно использовать декоратор @unittest.skipIf 
# для условного пропуска теста, если аргументы не заданы. Например:

# В этом примере мы используем декоратор @unittest.skipIf для условного пропуска теста,
# если аргумент arg1 не задан. Если мы запустим этот код без задания аргумента 
# arg1, то тест будет пропущен с сообщением "arg1 not specified". 
# Если мы зададим значение arg1, то тест будет выполнен успешно.

import unittest

class MyTest(unittest.TestCase):

    @unittest.skipIf(not hasattr(self, "arg1"), "arg1 not specified")
    def test_with_arguments(self):
        arg1 = self.arg1
        arg2 = self.arg2
        self.assertEqual(arg1, "value1")
        self.assertIsNotNone(arg2)

if __name__ == '__main__':
    # Создаем экземпляр класса MyTest
    my_test = MyTest()

    # Задаем аргументы для теста
    my_test.arg1 = "value1"
    my_test.arg2 = "value2"

    # Вызываем функцию test_with_arguments
    my_test.test_with_arguments()


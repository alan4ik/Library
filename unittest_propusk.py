import unittest

class MyTest(unittest.TestCase):
    test_A_success = False  # сохраняем результат теста A в атрибуте класса

    def test_A(self):
        # Проверяем условие теста A
        self.assertTrue(True)
        MyTest.test_A_success = True  # сохраняем результат теста A в атрибуте класса

    def test_B(self):
        if MyTest.test_A_success:
            # Проверяем условие теста B
            self.assertTrue(True)
        else:
            self.skipTest("Тест B пропущен, потому что тест A не прошел")

    def test_C(self):
        if MyTest.test_A_success:
            # Проверяем условие теста C
            self.assertTrue(True)
        else:
            self.skipTest("Тест C пропущен, потому что тест A не прошел")

if __name__ == '__main__':
    # Запускаем тесты
    unittest.main()

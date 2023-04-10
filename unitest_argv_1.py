import unittest
import argparse

def createParser():
    parser = argparse.ArgumentParser()
    parser.add_argument("--foo", default="default_foo")
    return parser

class MyTest(unittest.TestCase):
    def __init__(self, methodName, namespace):
        super().__init__(methodName)
        self.namespace = namespace

    def test_something(self):
        print(f'Testing something with foo={self.namespace.foo}')
        self.assertEqual(1, 1)

if __name__ == '__main__':
    parser = createParser()
    namespace = parser.parse_args()

    suite = unittest.TestSuite()
    suite.addTest(MyTest('test_something', namespace=namespace))

    runner = unittest.TextTestRunner()
    runner.run(suite)

import sys
import unittest2

from org.cmyers.example import lib

class TestLib(unittest2.TestCase):
    def setUp(self):
        self.widget = lib.Lib()
        self._expected_developers = [
                'amling',
                'cmyers',
                'qbt',
        ]
    def test_developers(self):
        self.assertEqual(self._expected_developers, self.widget.developers())

if __name__ == '__main__':
    unittest2.main()


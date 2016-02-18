
import sys

class TestLib(object):
    def __init__(self):
        self._developers = [
                'cmyers',
                'amling',
                ]

    def developers(self):
        return self._developers


def main():
    print "Developers: " + ", ".join(TestLib().developers())

if __name__ == '__main__':
    sys.exit(main())



import sys
import org.cmyers.testlib

class TestApp(object):
    def __init__(self):
        self.testlib = TestLib()

    def developers(self):
        return self.testlib.developers()


def main():
    testapp = TestApp()
    print "Developers: " + ", ".join(testapp.developers())

if __name__ == '__main__':
    sys.exit(main())


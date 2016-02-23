#!/usr/bin/env python

from setuptools import setup

setup(
        name='org.cmyers.testapp',
        description='An example python application built by QBT',
        author='Carl Myers',
        author_email='cmyers@cmyers.org',
        url='http://www.cmyers.org',
        packages=['testapp'],
        entry_points={
            'console_scripts': [
                'testapp=testapp:main',
                'example=testapp:example',
            ],
        },
    )


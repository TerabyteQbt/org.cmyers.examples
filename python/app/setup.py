#!/usr/bin/env python

from setuptools import setup, find_packages

setup(
        name='org.cmyers.example.app',
        description='An example python application built by QBT',
        author='Carl Myers',
        author_email='cmyers@cmyers.org',
        url='http://www.cmyers.org',
        packages=find_packages(where='.', exclude=()),
        scripts=['myapp'],
    )


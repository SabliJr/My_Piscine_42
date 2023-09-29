#!/bin/bash
find . -type f -iname "*.sh" -exac sh -C 'basename $0' {}

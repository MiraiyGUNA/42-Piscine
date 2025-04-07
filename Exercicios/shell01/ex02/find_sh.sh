#! /bin/sh

find . -type f -name '*.sh' -execdir basename {} \; |  awk -F '.' '{print $1}'

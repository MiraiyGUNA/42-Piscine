#! /bin/sh

ifconfig | awk '/ether/ {gsub(//,""); print $2}'

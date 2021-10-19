#!/bin/sh
#BRANCH=cs
#or
echo "Enter Your Branch name(cba/bda/cs)"
read BRANCH
case "$BRANCH" in
"cba") echo "cba student."
;;
"bda") echo "bda student."
;;
"cs") echo "cs student."
;;
esac

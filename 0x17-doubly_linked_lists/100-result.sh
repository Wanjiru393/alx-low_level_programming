#!/bin/bash

# initialize variables
largest_palindrome=0
i=100
j=100

# loop through all 3-digit numbers and find the largest palindrome
while [ $i -le 999 ]; do
  while [ $j -le 999 ]; do
    product=$((i*j))
    reverse=$(echo $product | rev)
    if [ $product -eq $reverse ] && [ $product -gt $largest_palindrome ]; then
      largest_palindrome=$product
    fi
    ((j++))
  done
  j=100
  ((i++))
done

# print the result
echo -n $largest_palindrome > 102-result


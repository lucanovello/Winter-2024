#!/bin/bash

firstName=$1
lastName=$2
echo "--------------------------"
echo "First name is: $firstName"
echo "Last name is: $lastName"
echo "--------------------------"
echo
echo "--------------------------"
read -p "Update First Name: " firstName
read -p "Update Last Name: " lastName
echo "--------------------------"
echo
echo "--------------------------"
echo "First name is: $firstName"
echo "Last name is: $lastName"
date
echo "--------------------------"
echo
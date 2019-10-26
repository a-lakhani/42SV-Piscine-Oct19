#!/bin/sh
env $FT_USER 2&>/dev/null | groups | tr " " "," | tr -d '\n'

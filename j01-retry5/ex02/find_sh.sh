#!/bin/sh
find . -name \*.sh | rev | cut -d / -f 1 | cut -d. -f 2 | rev 

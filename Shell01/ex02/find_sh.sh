#!/bin/bash
find . -type file -name '*.sh' -exec basename {} \; | sed "s/\.sh$//"

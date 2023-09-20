#!/bin/bash

find . -name "*.sh" | awk '{gsub(".sh", ""); gsub("./", "")}1'

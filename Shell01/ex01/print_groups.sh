#!/bin/bash

id -Gn $FT_USER | awk '{gsub(" ", ",")}1'


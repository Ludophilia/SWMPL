#!/bin/bash
id -Gn $FT_USER | tr '[:blank:]' ',' | tr -d '\n'

#!/bin/bash
ifconfig -a | grep ether | cat -t | sed "s/\^Iether//g" | sed "s/ //g" 

#!/bin/sh
if [ "$TERM" = "linux" ]; then
  /bin/echo -e "
  \e]P0101216
  \e]P1973d46
  \e]P27ca25c
  \e]P3e0ae4a
  \e]P4517ba5
  \e]P594628a
  \e]P65f9f9e
  \e]P7b4c0d4
  \e]P81b1e25
  \e]P9973d46
  \e]PA7ca25c
  \e]PBe0ae4a
  \e]PC517ba5
  \e]PD94628a
  \e]PE5f9f9e
  \e]PFb4c0d4
  "
  # get rid of artifacts
  clear
fi
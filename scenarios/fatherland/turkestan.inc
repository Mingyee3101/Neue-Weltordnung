##############################
# Country definition for UPE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = UPE
  name               = "Islamic Federation of Turkestan"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
  capital            = 1103 # Tashkent
  manpower           = 300
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 100
  supplies       = 100
  money          = 250
  SpyInfo                = { country = "UPE" NumberOfSpies = 2 }

  nationalprovinces      = { 1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 504 506 505 507 1108 1112 1109 }
  ownedprovinces         = { 1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 }
  controlledprovinces    = { 1101 1102 1100 1103 1099 1097 1098 1104 1105 1106 1107 }
  claimedprovinces       = { 506 507 505 500 498 504 1114 1117 1118 1116 503 1110 1108 1113 1115 1111 502 499 1109 1112 501 1273 1274 1275 1276 1277 1279 1280 1281 1282 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5320 5326 5327 5350 5600 5610 5620 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910 6560 6030 6120 6110 6130 3010 3020 3720 3730 3736 3740 3900 3810 3820 8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4600 4610 4620 4630 4120 4130 4140 4800 4810 4820 4700 4710 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9090 9100 9110 9120 9190 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 2
    free_market       = 1
    professional_army = 8
    defense_lobby     = 10
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 550059 }
  headofgovernment       = { type = 9 id = 550060 }
  foreignminister        = { type = 9 id = 550061 }
  armamentminister       = { type = 9 id = 550062 }
  ministerofsecurity     = { type = 9 id = 550063 }
  ministerofintelligence = { type = 9 id = 550064 }
  chiefofstaff           = { type = 9 id = 550065 }
  chiefofarmy            = { type = 9 id = 550066 }
  chiefofnavy            = { type = 9 id = 550067 }
  chiefofair             = { type = 9 id = 550068 }

  landunit = {
    id       = { type = 17345 id = 1 }
    name     = "1. Ordu"
    location = 505
    division = {
      id             = { type = 17345 id = 2 }
      name           = "1. Süvari Tümeni"
      type           = cavalry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 17345 id = 3 }
      name           = "2. Süvari Tümeni"
      type           = cavalry
      model          = 10
      strength       = 70
    }
    division = {
      id             = { type = 17345 id = 4 }
      name           = "3. Piyade Tümeni"
      type           = cavalry
      model          = 10
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 17345 id = 5 }
    name     = "2. Ordu"
    location = 1103
    division = {
      id             = { type = 17345 id = 6 }
      name           = "4. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 17345 id = 7 }
    name     = "3. Ordu"
    location = 1101
    division = {
      id             = { type = 17345 id = 8 }
      name           = "5. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 17345 id = 19 }
    name     = "4. Ordu"
    location = 1097
    division = {
      id             = { type = 17345 id = 20 }
      name           = "6. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 17345 id = 9 }
    name     = "5. Ordu"
    location = 1112
    division = {
      id             = { type = 17345 id = 10 }
      name           = "7. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 17345 id = 11 }
      name           = "8. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
    division = {
      id             = { type = 17345 id = 12 }
      name           = "9. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 100
    }
  }
  landunit = {
    id       = { type = 17345 id = 13 }
    name     = "6. Ordu"
    location = 1109
    division = {
      id             = { type = 17345 id = 14 }
      name           = "10. Piyade Tümeni"
      type           = militia
      model          = 5
      extra          = artillery
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 15 }
      name           = "11. Piyade Tümeni"
      type           = militia
      model          = 5
      extra          = artillery
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 17345 id = 16 }
    name     = "7. Ordu"
    location = 1108
    division = {
      id             = { type = 17345 id = 17 }
      name           = "12. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 18 }
      name           = "13. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 17345 id = 21 }
    name     = "8. Ordu"
    location = 1103
    division = {
      id             = { type = 17345 id = 22 }
      name           = "14. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 23 }
      name           = "15. Piyade Tümeni"
      type           = infantry
      model          = 8
      extra          = artillery
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 24 }
      name           = "16. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 17345 id = 25 }
    name     = "9. Ordu"
    location = 1103
    division = {
      id             = { type = 17345 id = 26 }
      name           = "17. Piyade Tümeni"
      type           = infantry
      model          = 8
      extra          = artillery
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 27 }
      name           = "18. Piyade Tümeni"
      type           = infantry
      model          = 8
      extra          = artillery
      strength       = 80
    }
    division = {
      id             = { type = 17345 id = 28 }
      name           = "19. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 17345 id = 999 }
    name     = "10. Ordu"
    location = 1099
    division = {
      id             = { type = 17345 id = 998 }
      name           = "20. Piyade Tümeni"
      type           = militia
      model          = 5
      strength       = 60
    }
    division = {
      id             = { type = 17345 id = 997 }
      name           = "21. Piyade Tümeni"
      type           = infantry
      model          = 8
      extra          = artillery
      strength       = 60
    }
    division = {
      id             = { type = 17345 id = 996 }
      name           = "22. Piyade Tümeni"
      type           = infantry
      model          = 8
      extra          = artillery
      strength       = 60
    }
  }
}

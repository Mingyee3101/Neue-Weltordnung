##############################
# Country definition for HUN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HUN
  name               = "Kingdom of Hungary"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 284 # Budapest
  dissent            = 5
  manpower           = 130
  # Resource Reserves
  energy         = 1500
  metal          = 1750
  rare_materials = 1000
  oil            = 250
  supplies       = 400
  money          = 30
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = 125 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = -200 }
    relation = { tag = U01 value = -200 }
    relation = {
      tag        = GER
      value      = 200
      guaranteed = { year = 1940 month = september day = 27 }
    }
    relation = { tag = RSI value = 200 }
    relation = {
      tag        = JAP
      value      = 125
      guaranteed = { year = 1940 month = september day = 27 }
    }
    relation = { tag = ROM value = 10 }
    relation = { tag = AXI value = 170 access = yes }
  }
  SpyInfo                = { country = "HUN" NumberOfSpies = 7 }

  nationalprovinces      = { 209 210 215 276 277 278 279 280 281 282 283 284 296 341 }
  ownedprovinces         = { 276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341 }
  controlledprovinces    = { 276 277 278 279 280 281 282 283 284 215 210 209 213 296 288 292 293 341 }
  claimedprovinces       = { 188 208 211 212 213 214 285 286 287 288 289 291 292 295 293 336 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5320 5190 5600 5610 5620 5630 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2520 2400 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910 6900 6560 6030 6120 6110 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4600 4610 4620 4630 4120 4130 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 1120 199130 1400 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 4
    professional_army = 6
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 105001 } # Mikl�s Horthy de Nagyb�nya
  headofgovernment       = { type = 9 id = 105026 } # M. K�llay de Nagy-Kall�
  foreignminister        = { type = 9 id = 105137 } # Jen� Ghyczy
  armamentminister       = { type = 9 id = 105052 } # Lajos Rem�nyi-Schneller
  ministerofsecurity     = { type = 9 id = 105067 } # Ferenc Keresztes-Fischer
  ministerofintelligence = { type = 9 id = 105085 } # K�d�r Gyula
  chiefofstaff           = { type = 9 id = 105096 } # Vilmos Nagy
  chiefofarmy            = { type = 9 id = 105104 } # Edgar Keksz
  chiefofnavy            = { type = 9 id = 105009 } # Mikl�s Horthy de Nagyb�nya
  chiefofair             = { type = 9 id = 105121 } # Gy�rghyi De Brody
  dormant_ministers      = { 105017 105002 105022 105023 105003 105037 105005 105006 105007 105008 105010 105024 105066 105038 105120 105134 105004 105025 105133 105039 105135 }

  landunit = {
    id       = { type = 20500 id = 1 }
    name     = "Magyar Kiralyi Honvédség"
    location = 284
    division = {
      id             = { type = 20500 id = 2 }
      name           = "Magyar Kiralyi Honvédség Föhadiszallas"
      type           = hq
      model          = 2
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20500 id = 12 }
    name     = "Gyorshadtest"
    location = 284
    division = {
      id             = { type = 20500 id = 55 }
      name           = "1. Tábori páncéloshadostzály"
      type           = armor
      model          = 3
      strength       = 75
    }
    division = {
      id             = { type = 20500 id = 60 }
      name           = "1. Motoros részleg"
      type           = motorized
      model          = 3
      strength       = 55
    }
    division = {
      id             = { type = 20500 id = 80 }
      name           = "2. Motoros részleg"
      type           = motorized
      model          = 3
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 61 }
    name     = "Szekler Hadtest"
    location = 284
    division = {
      id             = { type = 20500 id = 62 }
      name           = "22. Könnyuhadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 63 }
    name     = "I. Hadsereg"
    location = 296
    division = {
      id             = { type = 20500 id = 64 }
      name           = "1. Lovashadosztály"
      type           = cavalry
      model          = 10
      strength       = 50
    }
  }
  landunit = {
    id       = { type = 20500 id = 35 }
    name     = "VI. Hadtest/I. Hadsereg"
    location = 296
    division = {
      id             = { type = 20500 id = 38 }
      name           = "18. Foglaljahadosztály"
      type           = garrison
      model          = 6
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 65 }
    name     = "VIII. Katonai körzet"
    location = 292
    division = {
      id             = { type = 20500 id = 66 }
      name           = "24. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
    division = {
      id             = { type = 20500 id = 44 }
      name           = "23. Foglaljahadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
    division = {
      id             = { type = 20500 id = 67 }
      name           = "2. Hegyidandar"
      type           = bergsjaeger
      model          = 10
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 20500 id = 49 }
    name     = "IX. Hadtest/I. Hadsereg"
    location = 213
    division = {
      id             = { type = 20500 id = 50 }
      name           = "25. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 45
    }
    division = {
      id             = { type = 20500 id = 68 }
      name           = "1. Hegyidandar"
      type           = bergsjaeger
      model          = 10
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 20500 id = 21 }
    name     = "II. Hadtest/I. Hadsereg"
    location = 292
    division = {
      id             = { type = 20500 id = 8 }
      name           = "6. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
    division = {
      id             = { type = 20500 id = 7 }
      name           = "5. Foglaljahadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 41 }
    name     = "VII. Katonai körzet"
    location = 209
    division = {
      id             = { type = 20500 id = 43 }
      name           = "20. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
    division = {
      id             = { type = 20500 id = 42 }
      name           = "19. Foglaljahadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 22 }
    name     = "III. Hadtest/III. Hadsereg"
    location = 277
    division = {
      id             = { type = 20500 id = 9 }
      name           = "7. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
    division = {
      id             = { type = 20500 id = 24 }
      name           = "9. Foglaljahadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 27 }
    name     = "IV. Hadtest/II. Hadsereg"
    location = 341
    division = {
      id             = { type = 20500 id = 28 }
      name           = "10. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
    division = {
      id             = { type = 20500 id = 30 }
      name           = "12. Foglaljahadosztály"
      type           = infantry
      model          = 10
      strength       = 55
    }
  }
  landunit = {
    id       = { type = 20500 id = 56 }
    name     = "V. Hadtest/III. Hadsereg"
    location = 277
    division = {
      id             = { type = 20500 id = 32 }
      name           = "13. Gyaloghadosztály"
      type           = infantry
      model          = 10
      strength       = 65
    }
  }
  landunit = {
    id       = { type = 20500 id = 45 }
    name     = "VII. Hadtest"
    location = 605
    division = {
      id             = { type = 20500 id = 57 }
      name           = "201. Könnyu biztonságihadosztály"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 75
    }
    division = {
      id             = { type = 20500 id = 46 }
      name           = "2. Könnyuhadosztály"
      type           = infantry
      model          = 10
      strength       = 75
    }
    division = {
      id             = { type = 20500 id = 48 }
      name           = "5. Könnyuhadosztály"
      type           = infantry
      model          = 10
      strength       = 75
    }
    division = {
      id             = { type = 20500 id = 47 }
      name           = "8. Könnyuhadosztály"
      type           = infantry
      model          = 10
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20500 id = 58 }
    name     = "II. Armee"
    location = 605
    division = {
      id             = { type = 20500 id = 59 }
      name           = "1. Könnyu biztonságihadosztály"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 75
    }
    dig_in   = 20.000
  }

  airunit = { 
    id       = { type = 20500 id = 70 }
    name     = "I Légí Hadsereg"
    location = 284
    base     = 284
    division = {
      id             = { type = 20500 id = 71 }
      name           = "I. Vadászrepuloezred"
      type           = interceptor
      model          = 5
      strength       = 30
    }
    division = {
      id             = { type = 20500 id = 72 }
      name           = "I.Vadászrepuloezred Osztály"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
  }

  landdivision = { dormant = yes id = { type = 20500 id = 100 } name = "Volga rendorségi körzet"  type = garrison model = 6 extra = artillery brigade_model = 9 } 
}

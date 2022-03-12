##############################
# Country definition for FIN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = FIN
  name               = "Republic of Finland"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 525 # Helsinki
  manpower           = 100
  # Resource Reserves
  energy         = 3000
  metal          = 3500
  rare_materials = 1000
  oil            = 300
  supplies       = 3000
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 100 }
    relation = { tag = BUL value = 100 }
    relation = { tag = SLO value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = U01 value = 85 }
    relation = { tag = GER value = 125 }
    relation = { tag = HOL value = 100 }
    relation = { tag = HUN value = 125 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 100 }
    relation = { tag = JAP value = 50 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 100 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = -100 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 150 }
    relation = { tag = USA value = 90 }
    relation = { tag = U05 value = 100 }
  }
  SpyInfo                = { country = "FIN" NumberOfSpies = 5 }

  nationalprovinces      = { 512 513 511 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514 537 530 540 538 534 535 }
  ownedprovinces         = { 512 513 511 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514 537 539 530 540 538 534 535 541 }
  controlledprovinces    = { 512 513 511 526 524 525 518 519 521 527 520 516 515 517 523 529 522 528 531 532 533 536 514 537 539 530 540 538 534 535 541 }
  claimedprovinces       = { 539 541 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5190 5600 5610 5620 5630 5920 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2400 2410 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6390 6400 6420 6410 6430 3010 3020 3030 3040 3050 3210 3220 3230 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 8010 8020 8040 8050 8070 8080 8100 8200 8500 4500 4510 4520 4530 4540 4550 4010 4020 4030 4600 4610 4620 4630 4120 4130 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 1560 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 2
    freedom           = 7
    free_market       = 9
    professional_army = 6
    defense_lobby     = 3
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 145011 } # C. Gustaf E. Mannerheim
  headofgovernment       = { type = 9 id = 145031 } # Juho K. Paasikivi
  foreignminister        = { type = 9 id = 145046 } # Carl Ramsay
  armamentminister       = { type = 9 id = 145065 } # Edwin J. H. Linkomies
  ministerofsecurity     = { type = 9 id = 145084 } # Kyösti N. Järvinen
  ministerofintelligence = { type = 9 id = 145096 } # Georg A. de Gripenberg
  chiefofstaff           = { type = 9 id = 145102 } # C. Gustaf E. Mannerheim
  chiefofarmy            = { type = 9 id = 145107 } # C. Gustaf E. Mannerheim
  chiefofnavy            = { type = 9 id = 145111 } # Eero Rahola
  chiefofair             = { type = 9 id = 145115 } # Toivo Somerto
  dormant_ministers      = { 145001 145013 145002 145024 145003 145040 145041 145004 145061 145005 145007 145008 145015 145025 145028 145030 145038 145042 145006 145121 }

  landunit = {
    id       = { type = 32000 id = 1 }
    name     = "Maavoimat"
    location = 525
    division = {
      id             = { type = 32000 id = 2 }
      name           = "Päämaja"
      type           = hq
      model          = 3
      strength       = 50
    }
    division = {
      id             = { type = 32000 id = 3 }
      name           = "Ratsuväenprikatii"
      type           = cavalry
      model          = 9
      strength       = 50
    }
    division = {
      id             = { type = 32000 id = 5 }
      name           = "9. Divisioona"
      type           = infantry
      model          = 10
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 32000 id = 1000 }
    name     = "VI Armeijakunta"
    location = 523
    division = {
      id             = { type = 32000 id = 1001 }
      name           = "Ryhmä Oinonen"
      type           = bergsjaeger
      model          = 7
      strength       = 65
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 24 }
    name     = "VII Armeijakunta"
    location = 528
    division = {
      id             = { type = 32000 id = 26 }
      name           = "19. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 12 }
    name     = "II Armeijakunta"
    location = 529
    division = {
      id             = { type = 32000 id = 10 }
      name           = "2. Divisioona"
      type           = infantry
      model          = 9
      extra          = anti_air
      brigade_model  = 2
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 20 }
      name           = "10. Divisioona"
      type           = infantry
      model          = 8
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 17 }
      name           = "18. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 18 }
    name     = "III Armeijakunta"
    location = 511
    division = {
      id             = { type = 32000 id = 1012 }
      name           = "Panssaridiv. 'Lagus'"
      type           = light_armor
      model          = 2
      strength       = 45
    }
    division = {
      id             = { type = 32000 id = 11 }
      name           = "3. Divisioona"
      type           = bergsjaeger
      model          = 7
      strength       = 60
    }
    division = {
      id             = { type = 32000 id = 15 }
      name           = "11. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 16 }
      name           = "15. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1002 }
    name     = "III Armeijakunta"
    location = 511
    division = {
      id             = { type = 32000 id = 1003 }
      name           = "Divisioona J"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1004 }
    name     = "III Armeijakunta"
    location = 511
    division = {
      id             = { type = 32000 id = 4 }
      name           = "6. Divisioona"
      type           = infantry
      model          = 10
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 21 }
    name     = "IV Armeijakunta"
    location = 529
    division = {
      id             = { type = 32000 id = 22 }
      name           = "12. Divisioona"
      type           = bergsjaeger
      model          = 7
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1005 }
    name     = "Aunuksen ryhmä"
    location = 533
    division = {
      id             = { type = 32000 id = 14 }
      name           = "5. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 7 }
      name           = "17. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1006 }
    name     = "14. Divisioona"
    location = 533
    division = {
      id             = { type = 32000 id = 6 }
      name           = "14. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1007 }
    name     = "Maaselän ryhmä"
    location = 518
    division = {
      id             = { type = 32000 id = 9 }
      name           = "1. Divisioona"
      type           = infantry
      model          = 9
      extra          = artillery
      brigade_model  = 8
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 13 }
      name           = "4. Divisioona"
      type           = infantry
      model          = 10
      strength       = 75
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1008 }
    name     = "13. Divisioona"
    location = 528
    division = {
      id             = { type = 32000 id = 23 }
      name           = "13. Divisioona"
      type           = bergsjaeger
      model          = 7
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 1009 }
    name     = "Erillinen Osasto P"
    location = 496
    division = {
      id             = { type = 32000 id = 1010 }
      name           = "Petsamon Erillisosasto"
      type           = bergsjaeger
      model          = 7
      strength       = 60
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 32000 id = 27 }
    name     = "Kenttätäydennysprikaati"
    location = 525
    division = {
      id             = { type = 32000 id = 28 }
      name           = "21. Divisioona"
      type           = infantry
      model          = 7
      strength       = 75
    }
    division = {
      id             = { type = 32000 id = 29 }
      name           = "23. Divisioona"
      type           = infantry
      model          = 7
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 32000 id = 1011 }
    name     = "V Armeijakunta"
    location = 528
    division = {
      id             = { type = 32000 id = 25 }
      name           = "7. Divisioona"
      type           = infantry
      model          = 9
      strength       = 75
    }
    dig_in   = 20.000
  }

  navalunit = {
    id       = { type = 32000 id = 30 }
    name     = "Suomen Laivasto"
    location = 525
    base     = 525
    division = {
      id             = { type = 32000 id = 31 }
      name           = "Ilmarinen"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 32000 id = 32 }
      name           = "Väinämöinen"
      type           = heavy_cruiser
      model          = 4
    }
    division = {
      id             = { type = 32000 id = 34 }
      name           = "1. Rannikkolaivue"
      type           = destroyer
    }
  }
  navalunit = {
    id       = { type = 32000 id = 35 }
    name     = "I. Laivasto"
    location = 525
    base     = 525
    division = {
      id             = { type = 32000 id = 36 }
      name           = "1. Sukellusvenelaivue"
      type           = submarine
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 32000 id = 2000 }
    name     = "Suomen Ilmavoimat"
    location = 525
    base     = 525
    division = {
      id             = { type = 32000 id = 2001 }
      name           = "Suomen Ilmavoimat"
      type           = interceptor
      model          = 5
    }
  }
}

##############################
# Country definition for TUR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = TUR
  name               = "Republic of Turkey"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 1075 # Ankara
  manpower           = 0
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 1320
  metal          = 660
  rare_materials = 330
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 135
  escorts        = 10

  diplomacy = {
    relation = { tag = AFG value = 50 }
    relation = { tag = BUL value = 75 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = GER value = 10 }
    relation = {
      tag        = GRE
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = ITA value = 1 }
    relation = { tag = OMN value = 35 }
    relation = { tag = PER value = -50 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 100 }
    relation = { tag = YEM value = 35 }
    relation = {
      tag        = YUG
      value      = 100
      guaranteed = { year = 1934 month = december day = 29 }
    }
  }
  SpyInfo                = { country = "TUR" NumberOfSpies = 7 }

  nationalprovinces      = { 370 384 385 386 409 1054 1055 1056 1057 1058 1059 1060 1061 1062 1063 1064 1065 1066 1067 1068 1071 1072 1073 1074 1075 1076 1077 1078 1079 }
  ownedprovinces         = { 409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 }
  controlledprovinces    = { 409 1078 1079 1057 1076 1068 1074 1058 1075 1065 386 1066 1059 1067 1062 1063 1064 1060 1061 385 1071 1054 384 1077 1072 1073 1055 1056 }

  techapps               = { 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 4700 4710 1830 1840 2860 2870 2880 2020 7600 7610 2620 2010 2630 2640 2290 2300 2310 2800 2450 21180 21190 2810 2820 2510 1010 1020 1030 1040 1050 1060 1070 13060 13070 13080 1310 1320 1330 1340 1160 1170 1180 1190 1200 1210 1220 1230 1240 1910 1920 1930 1940 1950 1960 14000 14010 14020 5700 5710 5010 5810 5820 5050 5830 5800 5080 5090 3310 3320 3330 3010 3020 3030 3040 3050 3060 3110 3120 3130 3210 3220 3230 3610 3620 3720 3730 3736 3740 3750 3900 3810 5600 5610 5620 6500 6510 6530 6590 6600 6680 6620 6690 6700 6650 6710 6670 6550 6910 6570 6300 8010 8020 8040 8050 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 1350 1850 1080 1090 1100 1250 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 6
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 5
    defense_lobby     = 6
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 45011 } # Mustafa Ismet In??1938
  headofgovernment       = { type = 9 id = 45013 } # Refik Saydam
  foreignminister        = { type = 9 id = 45015 } # S?r?Saracoglu
  armamentminister       = { type = 9 id = 45004 } # Zekai Apaydin
  ministerofsecurity     = { type = 9 id = 45005 } # S?r?Kaya
  ministerofintelligence = { type = 9 id = 45043 } # Mustafa Renda
  chiefofstaff           = { type = 9 id = 45048 } # Abdul Naci Tinaz
  chiefofarmy            = { type = 9 id = 45008 } # Mehmet Nuri Yamut
  chiefofnavy            = { type = 9 id = 45053 } # Ali Fuat Cebesoy
  chiefofair             = { type = 9 id = 45010 } # Ali ?lungat
  dormant_ministers      = { 45001 }

  landunit = {
    id       = { type = 11700 id = 8 }
    name     = "I. Topluluk"
    location = 1075
    division = {
      id             = { type = 11700 id = 9 }
      name           = "1. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 10 }
      name           = "3. Piyade Dagitim"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 11 }
    name     = "II. Topluluk"
    location = 409
    division = {
      id             = { type = 11700 id = 12 }
      name           = "5. Piyade Dagitim"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 40 }
      name           = "23. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 13 }
    name     = "III. Topluluk"
    location = 1078
    division = {
      id             = { type = 11700 id = 14 }
      name           = "7. Piyade Dagitim"
      type           = infantry
      model          = 10
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 41 }
      name           = "25. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 15 }
    name     = "IV. Topluluk"
    location = 1059
    division = {
      id             = { type = 11700 id = 16 }
      name           = "9. Piyade Dagitim"
      type           = infantry
      model          = 10
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 1000 }
      name           = "21. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 17 }
    name     = "V. Topluluk"
    location = 1067
    division = {
      id             = { type = 11700 id = 18 }
      name           = "11. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 42 }
      name           = "27. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 19 }
    name     = "VI. Topluluk"
    location = 1062
    division = {
      id             = { type = 11700 id = 20 }
      name           = "13. Piyade Dagitim"
      type           = infantry
      model          = 10
      extra          = anti_air
      brigade_model  = 1
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 43 }
      name           = "29. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 21 }
    name     = "VII. Topluluk"
    location = 1061
    division = {
      id             = { type = 11700 id = 22 }
      name           = "15. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 44 }
      name           = "31. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 23 }
    name     = "VIII. Topluluk"
    location = 1060
    division = {
      id             = { type = 11700 id = 24 }
      name           = "17. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 45 }
      name           = "33. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 25 }
    name     = "IX. Topluluk"
    location = 1063
    division = {
      id             = { type = 11700 id = 26 }
      name           = "19. Piyade Dagitim"
      type           = infantry
      model          = 10
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 46 }
      name           = "35. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 27 }
    name     = "Dagci Topluluk"
    location = 386
    division = {
      id             = { type = 11700 id = 28 }
      name           = "1. Dagci Tugay"
      type           = bergsjaeger
      model          = 9
      extra          = artillery
      brigade_model  = 5
      strength       = 80
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 29 }
    name     = "T?kce S?ari Topluluk"
    location = 1074
    division = {
      id             = { type = 11700 id = 30 }
      name           = "1. S?ari Dagitim"
      type           = cavalry
      model          = 10
      extra          = artillery
      brigade_model  = 6
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 31 }
      name           = "3. S?ari Dagitim"
      type           = cavalry
      model          = 10
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 32 }
      name           = "5. Yedek S?ari Dagitim"
      type           = cavalry
      model          = 10
      strength       = 50
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 47 }
    name     = "X. Topluluk"
    location = 1075
    division = {
      id             = { type = 11700 id = 48 }
      name           = "1. Zyrly Dagitim"
      type           = motorized
      model          = 1
      strength       = 75
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 49 }
      name           = "2. Zyrly Dagitim"
      type           = motorized
      model          = 1
      strength       = 75
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 50 }
    name     = "XI. Topluluk"
    location = 1064
    division = {
      id             = { type = 11700 id = 51 }
      name           = "37. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 11700 id = 52 }
      name           = "39. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 53 }
    name     = "XII. Topluluk"
    location = 1062
    division = {
      id             = { type = 11700 id = 54 }
      name           = "41. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }
  landunit = {
    id       = { type = 11700 id = 55 }
    name     = "XIII. Topluluk"
    location = 1063
    division = {
      id             = { type = 11700 id = 56 }
      name           = "43. Piyade Dagitim"
      type           = infantry
      model          = 9
      strength       = 100
      organisation   = 30
      defaultorganisation = 0
    }
  }

  navalunit = {
    id       = { type = 11700 id = 1 }
    name     = "T?kce Deniz Filosu"
    location = 1076
    base     = 1076
    division = {
      id             = { type = 11700 id = 100 }
      name           = "Reschid Pasha K?? Filotilla"
      type           = transport
    }
    division = {
      id             = { type = 11700 id = 7 }
      name           = "1. Filotilla Torpido Ve Denizalti"
      type           = destroyer
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 11700 id = 2205 }
    name     = "1. T?k Dz. Kuvvetleri Filosu"
    location = 1076
    base     = 1076
    division = {
      id             = { type = 11700 id = 3 }
      name           = "TDT Yavuz"
      type           = battlecruiser
      model          = 1
    }
    division = {
      id             = { type = 11700 id = 5 }
      name           = "TDT Medjidieh"
      type           = light_cruiser
      model          = 3
    }
    division = {
      id             = { type = 11700 id = 4 }
      name           = "TDT Hamidieh"
      type           = light_cruiser
      model          = 3
    }
  }
  navalunit = {
    id       = { type = 11700 id = 2434 }
    name     = "2. T?k Dz. Kuvvetleri Filosu"
    location = 1076
    base     = 1076
    division = {
      id             = { type = 11700 id = 6 }
      name           = "1. Filotilla Denizalti K??"
      type           = submarine
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 11700 id = 33 }
    name     = "I. T?kce Hava Topluluk"
    location = 1075
    base     = 1075
    division = {
      id             = { type = 25635 id = 34 }
      name           = "1. Avci Ucagi Grup"
      type           = interceptor
      model          = 5
      strength       = 48
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 35 }
      name           = "1. Taktik Bombardiman Ucagi Grup"
      type           = tactical_bomber
      model          = 4
      strength       = 52
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 36 }
      name           = "2. Avci Ucagi Grup"
      type           = interceptor
      model          = 5
      strength       = 29
      organisation   = 30
      defaultorganisation = 0
    }
    division = {
      id             = { type = 25635 id = 37 }
      name           = "2. Taktik Bombardiman Ucagi Grup"
      type           = tactical_bomber
      model          = 4
      strength       = 62
      organisation   = 30
      defaultorganisation = 0
    }
  }
}

##############################
# Country definition for BUL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  name               = "Kingdom of Bulgaria"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 321 # Sofia
  manpower           = 85
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 5000
  oil            = 3000
  supplies       = 5000
  money          = 50
  transports     = 100
  escorts        = 4

  diplomacy = {
    relation = { tag = ENG value = -50 }
    relation = { tag = FIN value = 100 }
    relation = { tag = U01 value = -20 }
    relation = {
      tag        = GER
      value      = 200
      access     = yes
      guaranteed = { year = 1960 month = january day = 0 }
    }
    relation = { tag = HUN value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = -25 }
    relation = { tag = ROM value = 125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = -10 }
    relation = { tag = AXI value = 170 access = yes }
  }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }

  nationalprovinces      = { 318 323 325 324 321 320 319 326 364 317 331 307 322 365 366 333 328 363 370 }
  ownedprovinces         = { 318 323 325 324 321 320 319 326 317 322 307 328 331 333 363 364 370 }
  controlledprovinces    = { 318 323 325 324 321 320 319 326 317 322 307 328 331 333 363 364 370 }
  claimedprovinces       = { 331 334 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5320 5326 5327 5350 5600 5610 5620 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 199130 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910 6560 6030 6120 6110 6130 3010 3020 3720 3730 3736 3740 3900 3810 3820 8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4600 4610 4620 4630 4120 4130 4140 4800 4810 4820 4700 4710 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9090 9100 9110 9120 9190 1110 1396 1400 1870 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 95011 } # Kiril Preslavski
  headofgovernment       = { type = 9 id = 95023 } # Ivan Bagryanov
  foreignminister        = { type = 9 id = 95034 } # Ivan Bagryanov
  armamentminister       = { type = 9 id = 95049 } # Stanko Nikoladorov
  ministerofsecurity     = { type = 9 id = 95064 } # Aleksandar Stanishev
  ministerofintelligence = { type = 9 id = 95076 } # Sava Kirov
  chiefofstaff           = { type = 9 id = 95087 } # Todor Georgiev
  chiefofarmy            = { type = 9 id = 95098 } # Kiril Stanchev
  chiefofnavy            = { type = 9 id = 95107 } # Asen Toshev
  chiefofair             = { type = 9 id = 95112 } # Dimitar Ayryanov
  dormant_leaders        = { 95004 }
  dormant_ministers      = { 95004 95005 95006 95007 95009 95010 95002 95003 95001 95012 95014 95018 95021 95022 95025 95008 }

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "1-va Armija"
    location = 321
    division = {
      id             = { type = 19000 id = 21 }
      name           = "17-ma Bitolska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 29 }
    name     = "1-va Armija"
    location = 364
    division = {
      id             = { type = 19000 id = 20 }
      name           = "11-ta Zapasna pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 23 }
      name           = "13-ta Zapasna pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 25 }
      name           = "16-ta Belomorska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 5 }
    name     = "2-ra Armija"
    location = 325
    division = {
      id             = { type = 19000 id = 6 }
      name           = "2-ra Trakiiska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 7 }
      name           = "8-a Tundjanska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 8 }
      name           = "10-ta Rhodopska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 24 }
      name           = "12-ra Dobrudjanska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 9 }
    name     = "3-ta Armija"
    location = 324
    division = {
      id             = { type = 19000 id = 10 }
      name           = "3-ta Balkanska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 11 }
      name           = "4-ta Preslavska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 12 }
    name     = "4-ta Armija"
    location = 307
    division = {
      id             = { type = 19000 id = 13 }
      name           = "5-ta Dunavska pekhotna divizija"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 26 }
    name     = "5-ta Armija"
    location = 333
    division = {
      id             = { type = 19000 id = 2 }
      name           = "1-va Sofiiska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 14 }
      name           = "6-ta Bdinska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 27 }
      name           = "14-ta Skopska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 28 }
      name           = "15-ta Ohridska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 30 }
      name           = "22-ra zapasna pekhotna divizija"
      type           = infantry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 19000 id = 31 }
      name           = "24-ta zapasna pekhotna divizija"
      type           = infantry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 19000 id = 32 }
      name           = "25-ta zapasna pekhotna divizija"
      type           = infantry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 19000 id = 33 }
      name           = "27-ma zapasna pekhotna divizija"
      type           = infantry
      model          = 9
      strength       = 30
    }
    division = {
      id             = { type = 19000 id = 4 }
      name           = "1-va Konna divizija"
      type           = cavalry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 19 }
      name           = "2-ra Konna divizija"
      type           = cavalry
      model          = 10
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 19000 id = 34 }
    name     = "1-vo Korpusa"
    location = 328
    division = {
      id             = { type = 19000 id = 3 }
      name           = "7-ma Rilska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 17 }
      name           = "9-ta Plevenska pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 19000 id = 22 }
      name           = "21-va Zapasna pekhotna divizija"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }

  airunit = { 
    id       = { type = 19000 id = 100 }
    name     = "Vyzdushni voiski"
    location = 325
    base     = 325
    division = {
      id             = { type = 19000 id = 101 }
      name           = "5-ti Bombardirovatchen polk"
      type           = tactical_bomber
      model          = 5
      strength       = 40
    }
    division = {
      id             = { type = 19000 id = 102 }
      name           = "2-ri Lineen polk"
      type           = tactical_bomber
      model          = 4
      strength       = 30
    }
    division = {
      id             = { type = 19000 id = 103 }
      name           = "6-ti Iztrebitelen polk"
      type           = interceptor
      model          = 6
      strength       = 60
    }
  }

  landdivision = { dormant = yes id = { type = 19000 id = 200 } name = "Volga sigurnost korpus"  type = garrison model = 5 } 
}

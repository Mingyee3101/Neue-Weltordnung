##############################
# Country definition for ROM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ROM
  name               = "Kingdom of Romania"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 316 # Bucharest
  manpower           = 500
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2000
  oil            = 3500
  supplies       = 3000
  money          = 15
  transports     = 100

  diplomacy = {
    relation = { tag = BUL value = 125 }
    relation = { tag = SLO value = 20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = U01 value = -200 }
    relation = { tag = GER value = 200 }
    relation = { tag = HUN value = 10 }
    relation = { tag = ITA value = 150 }
    relation = { tag = JAP value = 125 }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 100 }
    relation = { tag = AXI value = 150 access = yes }
  }
  SpyInfo                = { country = "ROM" NumberOfSpies = 8 }

  nationalprovinces      = { 316 308 311 315 285 309 310 297 314 312 295 621 289 299 291 286 303 304 288 296 307 306 313 298 305 302 301 292 287 293 300 }
  ownedprovinces         = { 316 308 311 315 285 286 289 299 291 309 310 297 312 314 313 298 287 301 295 300 302 303 304 305 306 619 620 621 625 626 }
  controlledprovinces    = { 316 308 311 315 285 286 289 299 291 309 310 297 312 314 313 298 287 301 295 300 302 303 304 305 306 619 620 621 625 626 }
  claimedprovinces       = { 619 620 621 625 626 336 339 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5320 5190 5200 5600 5610 5620 5630 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2520 2400 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6560 6030 6120 6110 3010 3020 3030 3040 3050 3060 3610 3620 3630 3640 3650 3720 3730 3736 3740 3900 3810 3820 8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4600 4610 4620 4630 4120 4130 4800 4810 4820 4700 4710 4740 4750 4760 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9060 9070 9090 9190 9230 199130 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 4
    free_market       = 4
    professional_army = 7
    defense_lobby     = 5
    interventionism   = 6
  }
  headofstate            = { type = 9 id = 110014 } # Mihai I
  headofgovernment       = { type = 9 id = 110025 } # Ion Antonescu
  foreignminister        = { type = 9 id = 110043 } # Mihai Antonescu
  armamentminister       = { type = 9 id = 110058 } # Gheorghe Dobre
  ministerofsecurity     = { type = 9 id = 110197 } # Alexandru Vaida-Voevod
  ministerofintelligence = { type = 9 id = 110082 } # Iosif Iacobici
  chiefofstaff           = { type = 9 id = 110090 } # Constantin Pantazi
  chiefofarmy            = { type = 9 id = 110102 } # Ilie Steflea
  chiefofnavy            = { type = 9 id = 110107 } # Horia Macellariu
  chiefofair             = { type = 9 id = 110113 } # Ermil Gheorghiu
  dormant_leaders        = { 110013 110028 }
  dormant_ministers      = { 110155 110016 110011 110019 110020 110021 110022 110023 110063 }

  landunit = {
    id       = { type = 20600 id = 1 }
    name     = "Armata Regala"
    location = 316
    division = {
      id             = { type = 20600 id = 2 }
      name           = "Cartier General"
      type           = hq
      model          = 2
      strength       = 50
    }
    division = {
      id             = { type = 20600 id = 3 }
      name           = "Divizie Garda Regala"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 20600 id = 33 }
      name           = "Divizie 20 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 2
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 47 }
      name           = "Divizie 1 Cavalerie"
      type           = cavalry
      model          = 11
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 66 }
    name     = "IV. Armeekorps"
    location = 624
    division = {
      id             = { type = 20600 id = 18 }
      name           = "Divizie 24 Infanterie"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 7
      strength       = 80
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 39 }
    name     = "Corp Munte"
    location = 640
    division = {
      id             = { type = 20600 id = 41 }
      name           = "Divizie 2 Vanatori de Munte"
      type           = bergsjaeger
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 1002 }
      name           = "Divizie 4 Vanatori de Munte"
      type           = bergsjaeger
      model          = 10
      strength       = 100
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 70 }
    name     = "Corp Cavalerie"
    location = 694
    division = {
      id             = { type = 20600 id = 40 }
      name           = "Divizie 1 Vanatori de Munte"
      type           = bergsjaeger
      model          = 10
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 48 }
      name           = "Divizie 6 Cavalerie"
      type           = cavalry
      model          = 11
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 1003 }
      name           = "Divizie 9 Cavalerie"
      type           = cavalry
      model          = 10
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 38 }
      name           = "Divizie 19 Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 71 }
    name     = "XXXXIX. Gebirgskorps"
    location = 694
    division = {
      id             = { type = 20600 id = 1001 }
      name           = "Divizie 3 Munte"
      type           = bergsjaeger
      model          = 10
      strength       = 90
    }
    division = {
      id             = { type = 20600 id = 14 }
      name           = "Divizie 10 Infanterie"
      type           = infantry
      model          = 10
      strength       = 70
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 63 }
    name     = "Corp II Armata"
    location = 291
    division = {
      id             = { type = 20600 id = 13 }
      name           = "Divizie 9 Infanterie"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 17 }
      name           = "Divizie 15 Infanterie"
      type           = infantry
      model          = 10
      extra          = light_armor_brigade
      brigade_model  = 1
      strength       = 70
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 64 }
    name     = "Corp V Armata"
    location = 626
    division = {
      id             = { type = 20600 id = 27 }
      name           = "Divizie 5 Infanterie"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 70
    }
    division = {
      id             = { type = 20600 id = 28 }
      name           = "Divizie 6 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 70
    }
    dig_in   = 20.000
  }
  landunit = {
    id       = { type = 20600 id = 6 }
    name     = "Corp I Armata"
    location = 315
    division = {
      id             = { type = 20600 id = 8 }
      name           = "Divizie 3 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20600 id = 67 }
    name     = "Corp VI Armata"
    location = 286
    division = {
      id             = { type = 20600 id = 36 }
      name           = "Divizie 1 Infanterie"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 20600 id = 7 }
      name           = "Divizie 2 Infanterie"
      type           = infantry
      model          = 10
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 20600 id = 12 }
      name           = "Divizie 4 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20600 id = 21 }
    name     = "Corp IV Armata"
    location = 291
    division = {
      id             = { type = 20600 id = 23 }
      name           = "Divizie 8 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20600 id = 26 }
    name     = "Corp V Armata"
    location = 625
    division = {
      id             = { type = 20600 id = 19 }
      name           = "Divizie 21 Infanterie"
      type           = infantry
      model          = 10
      extra          = engineer
      brigade_model  = 3
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20600 id = 110 }
    name     = "Corpul Rapid"
    location = 287
    division = {
      id             = { type = 20600 id = 111 }
      name           = "Divizie Moto. 'Victoria din Est'"
      type           = motorized
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 112 }
      name           = "Divizie 1 Blindata"
      type           = armor
      model          = 3
      strength       = 60
    }
    division = {
      id             = { type = 20600 id = 113 }
      name           = "Divizie Aeropurtata 'Antonescu'"
      type           = paratrooper
      model          = 2
      strength       = 80
      max_strength   = 80
    }
  }
  landunit = {
    id       = { type = 20600 id = 30 }
    name     = "Corp VI Armata"
    location = 304
    division = {
      id             = { type = 20600 id = 31 }
      name           = "Divizie 11 Infanterie"
      type           = infantry
      model          = 10
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 20600 id = 32 }
    name     = "Corp I Armata Banat"
    location = 285
    division = {
      id             = { type = 20600 id = 114 }
      name           = "Divizie 1. 'Banat'"
      type           = infantry
      model          = 10
      strength       = 80
    }
    division = {
      id             = { type = 20600 id = 115 }
      name           = "Divizie 2. 'Banat'"
      type           = infantry
      model          = 10
      strength       = 80
    }
  }

  navalunit = {
    id       = { type = 20600 id = 100 }
    name     = "Flota Romania de Mare"
    location = 310
    base     = 310
    division = {
      id             = { type = 20600 id = 101 }
      name           = "'NMS Regele Ferdinand' Flotila"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 20600 id = 102 }
      name           = "'NMS Delfinul' Flotila"
      type           = submarine
      model          = 1
    }
  }

  airunit = { 
    id       = { type = 20600 id = 103 }
    name     = "Gruparea Aeriana de Lupta"
    location = 316
    base     = 316
    division = {
      id             = { type = 20600 id = 104 }
      name           = "Grup 1 Avion de Vanatoare"
      type           = interceptor
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 105 }
      name           = "Grup 2 Avion de Vanatoare"
      type           = interceptor
      model          = 4
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 106 }
      name           = "Grup 1 Tactic Bombardier"
      type           = tactical_bomber
      model          = 3
      strength       = 100
    }
    division = {
      id             = { type = 20600 id = 107 }
      name           = "Grup 2 Tactic Bombardier"
      type           = tactical_bomber
      model          = 3
      strength       = 40
    }
    division = {
      id             = { type = 20600 id = 108 }
      name           = "Grup 1 Hidroavioane"
      type           = naval_bomber
      model          = 1
      strength       = 35
    }
    division = {
      id             = { type = 20600 id = 109 }
      name           = "Grup 1 Transp. Aerian"
      type           = transport_plane
      model          = 3
      strength       = 40
    }
  }

  landdivision = { dormant = yes id = { type = 20600 id = 200 } name = "Garnizoana antibolsevica de siguranta"  type = garrison model = 6 } 
  landdivision = { dormant = yes id = { type = 20600 id = 201 } name = "Detasamentul legionar de siguranta"  type = militia model = 6 } 
}

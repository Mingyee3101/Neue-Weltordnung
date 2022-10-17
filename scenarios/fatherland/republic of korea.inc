##############################
# Country definition for KOR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = KOR
  name               = "Republic of Korea"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1228 # Seoul
  manpower           = 250
  # Resource Reserves
  energy         = 2000
  metal          = 1500
  rare_materials = 1300
  oil            = 400
  supplies       = 350
  money          = 100
  transports     = 100

  diplomacy = {
    relation = { tag = USA value = 150 }
    relation = { tag = ITA value = -50 }
    relation = { tag = GER value = -100 }
    relation = { tag = SOV value = 10 }
    relation = { tag = CHI value = 50 }
    relation = { tag = CHC value = -100 }
    relation = { tag = SIB value = -50 }
    relation = { tag = U59 value = 10 }
    relation = { tag = U57 value = -30 }
    relation = { tag = ENG value = 100 }
    relation = { tag = ALS value = 100 access = yes }
  }
  SpyInfo                = { country = "KOR" NumberOfSpies = 5 }

  nationalprovinces      = { 1224 1226 1225 1227 1221 1223 1222 1228 1233 1229 1231 1230 1232 }
  ownedprovinces         = { 1224 1226 1225 1227 1221 1223 1222 1228 1233 1229 1231 1230 1232 }
  controlledprovinces    = { 1224 1226 1225 1227 1221 1223 1222 1228 1233 1229 1231 1230 1232 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5320 5190 5600 5610 5620 5630 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2520 2400 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910 6900 6560 6030 6120 6110 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4600 4610 4620 4630 4120 4130 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 2
    freedom           = 6
    free_market       = 6
    professional_army = 7
    defense_lobby     = 6
    interventionism   = 4
  }

  landunit = {
    id       = { type = 20602 id = 1 }
    name     = "1. ROK Army"
    location = 1228
    division = {
      id             = { type = 20602 id = 2 }
      name           = "1. ROK Army Command"
      type           = hq
      model          = 4
      strength       = 80
    }
    division = {
      id             = { type = 20602 id = 3 }
      name           = "1. Motorized Division"
      type           = motorized
      model          = 2
      extra          = sp_artillery
      strength       = 80
    }
    division = {
      id             = { type = 20602 id = 4 }
      name           = "2. Motorized Division"
      type           = motorized
      model          = 2
      extra          = sp_artillery
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 20602 id = 5 }
    name     = "2. ROK Army"
    location = 1221
    division = {
      id             = { type = 20602 id = 6 }
      name           = "1. Infantry"
      type           = infantry
      model          = 11
      extra          = tank_destroyer
      strength       = 60
    }
    division = {
      id             = { type = 20602 id = 7 }
      name           = "2. Infantry"
      type           = infantry
      model          = 11
      extra          = tank_destroyer
      strength       = 60
    }
  }

  airunit = { 
    id       = { type = 20602 id = 8 }
    name     = "ROK Air Force"
    location = 1228
    base     = 1228
    division = {
      id             = { type = 20602 id = 9 }
      name           = "1. ROK Fighter Group"
      type           = multi_role
      model          = 8
      strength       = 40
    }
  }
}

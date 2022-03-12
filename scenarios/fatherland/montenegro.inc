##############################
# Country definition for MTN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MTN
  puppet             = ITA
  name               = "Regency of Montenegro"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes NEIN = yes } }
  capital            = 332 # Cetinje
  manpower           = 10
  # Resource Reserves
  energy         = 2160
  metal          = 1080
  rare_materials = 540
  oil            = 0
  supplies       = 500
  money          = 20

  diplomacy = {
    relation = { tag = GER value = 200 }
    relation = { tag = ITA value = 200 }
  }
  SpyInfo                = { country = "MTN" NumberOfSpies = 7 }

  nationalprovinces      = { 332 335 }
  ownedprovinces         = { 332 335 }
  controlledprovinces    = { 332 335 }

  techapps               = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1910 1920 1930 1940 1950 1960 1970 1980 14000 14010 14020 1830 1840 1850 1860 7600 7610 2620 2010 2630 2640 2646 2650 2030 2860 2870 2880 2020 2150 2290 2300 2310 2800 2450 21180 21190 21200 2810 2820 2510 4500 4510 4520 4530 4540 4550 4010 4020 4600 4610 4620 4630 4120 4300 4310 4320 4330 4800 4810 4820 5600 5610 5620 5630 5310 54010 54020 54030 5316 5326 5810 5820 5050 5830 5060 5700 5710 5010 5800 5080 5090 5560 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 3
    freedom           = 3
    free_market       = 3
    professional_army = 8
    defense_lobby     = 7
    interventionism   = 8
  }
  headofstate            = { type = 9 id = 390001 } # Sekula Drljevic
  headofgovernment       = { type = 9 id = 390002 } # Blazo Djukanovic
  foreignminister        = { type = 9 id = 390003 } # Jovan S. Plamenec
  armamentminister       = { type = 9 id = 390018 } # Krste Djuricic
  ministerofsecurity     = { type = 9 id = 390023 } # Ivan Gvenkovski
  ministerofintelligence = { type = 9 id = 390025 } # Kiro Filipovic
  chiefofstaff           = { type = 9 id = 390007 } # Luka Gojna
  chiefofarmy            = { type = 9 id = 390008 } # Anto Gvozdenovic
  chiefofnavy            = { type = 9 id = 390009 } # Mitar Martinovic
  chiefofair             = { type = 9 id = 390010 } # Bora Todorovic

  landunit = {
    id       = { type = 30405 id = 1 }
    name     = "Crna gora armija"
    location = 332
    division = {
      id             = { type = 30405 id = 2 }
      name           = "1. Pesadijska divizija"
      type           = infantry
      model          = 11
      strength       = 25
    }
  }
}

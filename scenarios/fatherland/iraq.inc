##############################
# Country definition for IRQ #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = IRQ
  puppet             = ENG
  control            = ENG
  name               = "Kingdom of Iraq"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1034 # Baghdad
  manpower           = 50
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 1000
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = PER value = 125 }
    relation = { tag = USA value = 120 }
  }
  SpyInfo                = { country = "IRQ" NumberOfSpies = 3 }

  nationalprovinces      = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 1041 1089 }
  ownedprovinces         = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 }
  controlledprovinces    = { 1027 1028 1029 1030 1031 1032 1033 1034 1035 1036 1037 }

  techapps               = { 4500 4510 4520 4530 2860 2870 2880 2020 2290 2300 2310 1010 1020 1030 1040 1050 1060 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 6560 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 1090 1080 1070 1830 1840 1850 1860 1160 1170 1180 1190 1210 1200 1380 1370 1360 1350 1100 1980 1990 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 4
    free_market       = 6
    professional_army = 6
    defense_lobby     = 4
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 365016 } # Amir al Illah
  headofgovernment       = { type = 9 id = 365027 } # Hamdi al Pachachi
  foreignminister        = { type = 9 id = 365049 } # Arshad al Umari
  armamentminister       = { type = 9 id = 365070 } # Tawfiq al Suwaidi
  ministerofsecurity     = { type = 9 id = 365085 } # John Sanderson-Haldane
  ministerofintelligence = { type = 9 id = 365101 } # Abdullah
  chiefofstaff           = { type = 9 id = 365112 } # John Bagot Glubb
  chiefofarmy            = { type = 9 id = 365121 } # Faysal II ibn Ghazi
  chiefofnavy            = { type = 9 id = 365125 } # Hamdi al Pachachi
  chiefofair             = { type = 9 id = 365132 } # Jamil al Midfai
  dormant_ministers      = { 365001 365011 365012 365013 365002 365138 365025 365024 365003 365056 365004 365005 365006 365007 365115 365118 365009 365010 }

  landunit = {
    id       = { type = 22500 id = 3 }
    name     = "Royal Iraqi Army"
    location = 1035
    division = {
      id             = { type = 22500 id = 4 }
      name           = "1. Iraqi Infantry Division"
      type           = infantry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 5 }
      name           = "2. Iraqi Infantry Division"
      type           = infantry
      model          = 8
      strength       = 100
    }
    division = {
      id             = { type = 22500 id = 6 }
      name           = "3. Iraqi Infantry Division"
      type           = infantry
      model          = 8
      extra          = artillery
      brigade_model  = 4
      strength       = 30
    }
    division = {
      id             = { type = 22500 id = 7 }
      name           = "4. Iraqi Infantry Division"
      type           = infantry
      model          = 8
      strength       = 30
    }
  }
}

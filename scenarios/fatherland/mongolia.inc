##############################
# Country definition for MON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MON
  name               = "Mongolian People's Republic"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1124 # Ulaanbaatar
  manpower           = 25
  # Resource Reserves
  energy         = 300
  metal          = 150
  rare_materials = 75
  oil            = 200
  supplies       = 500
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 25 }
    relation = { tag = SOV value = -50 }
    relation = { tag = U59 value = 100 }
    relation = { tag = SIB value = 100 }
  }
  SpyInfo                = { country = "MON" NumberOfSpies = 3 }

  nationalprovinces      = { 1120 1121 1122 1123 1124 1125 }
  ownedprovinces         = { 1120 1121 1122 1123 1124 1125 1119 1167 1162 }
  controlledprovinces    = { 1120 1121 1122 1123 1124 1125 1119 1167 1162 }
  claimedprovinces       = { 1272 1270 1240 1239 1238 1200 1198 1209 1206 1119 1167 1162 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1910 1920 1930 1940 1950 1960 1970 13060 13070 13080 1310 1320 1330 1340 5700 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 1390 1380 1370 1360 1350 1830 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 2
    political_left    = 10
    freedom           = 5
    free_market       = 3
    professional_army = 6
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 300014 } # Gomgchigryn Bumtsend
  headofgovernment       = { type = 9 id = 300020 } # Horloogiyn Choybalsan
  foreignminister        = { type = 9 id = 300027 } # Marcel Rosenberg
  armamentminister       = { type = 9 id = 300034 } # Battur
  ministerofsecurity     = { type = 9 id = 300043 } # Dashdoorov
  ministerofintelligence = { type = 9 id = 300052 } # Nyambuu
  chiefofstaff           = { type = 9 id = 300060 } # Buma Tsende
  chiefofarmy            = { type = 9 id = 300064 } # Horloogiyn Choybalsan
  chiefofnavy            = { type = 9 id = 300068 } # Gomgchigryn Bumtsend
  chiefofair             = { type = 9 id = 300073 } # Sükhbaataryn Yanjmaa

  landunit = {
    id       = { type = 30500 id = 1 }
    name     = "Armija Mongol Nayramdakh"
    location = 1124
    division = {
      id             = { type = 30500 id = 2 }
      name           = "2. Nayramdakh Opolcheniya Div."
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 30500 id = 3 }
      name           = "3. Nayramdakh Opolcheniya Div."
      type           = infantry
      model          = 9
      strength       = 75
    }
    division = {
      id             = { type = 30500 id = 4 }
      name           = "4. Nayramdakh Opolcheniya Div."
      type           = infantry
      model          = 9
      strength       = 75
    }
  }
  landunit = {
    id       = { type = 30500 id = 5 }
    name     = "Armija Kavaleriyskaya"
    location = 1124
    division = {
      id             = { type = 30500 id = 6 }
      name           = "1. Nayramdakh Kavaleriyskaya Div."
      type           = cavalry
      model          = 10
      strength       = 50
    }
    division = {
      id             = { type = 30500 id = 7 }
      name           = "2. Nayramdakh Kavaleriyskaya Div."
      type           = cavalry
      model          = 10
      strength       = 50
    }
    division = {
      id             = { type = 30500 id = 8 }
      name           = "3. Nayramdakh Kavaleriyskaya Div."
      type           = cavalry
      model          = 10
      strength       = 33
    }
  }
}

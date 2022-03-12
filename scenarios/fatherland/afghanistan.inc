##############################
# Country definition for AFG #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = AFG
  name               = "Kingdom of Afghanistan"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes } }
  capital            = 2171 # Kabul
  manpower           = 30
  peacetime_ic_mod       = 0.6
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2000
  oil            = 2000
  supplies       = 2000
  money          = 50

  diplomacy = {
    relation = { tag = ENG value = -75 }
    relation = { tag = ITA value = 50 }
    relation = { tag = PER value = 25 }
    relation = { tag = SAU value = 50 }
    relation = { tag = SOV value = 1 }
    relation = { tag = TUR value = 50 }
  }
  SpyInfo                = { country = "AFG" NumberOfSpies = 5 }

  nationalprovinces      = { 2168 2169 2170 2171 2172 2173 1529 1537 }
  ownedprovinces         = { 2168 2169 2170 2171 2172 2173 }
  controlledprovinces    = { 2168 2169 2170 2171 2172 2173 }

  techapps               = { 2860 1910 1920 1930 1940 1950 1960 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1160 1170 1180 1190 1200 1210 1220 1230 13060 13070 13080 1310 1320 1330 1340 1350 1360 5800 5700 6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 1830 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 6
    free_market       = 7
    professional_army = 5
    defense_lobby     = 4
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 155011 } # Muhammed Zahir
  headofgovernment       = { type = 9 id = 155013 } # Muhammed Hashim
  foreignminister        = { type = 9 id = 155017 } # Mohammed Daoud
  armamentminister       = { type = 9 id = 155030 } # Massimo Pilotti
  ministerofsecurity     = { type = 9 id = 155039 } # Muhammed Zahir
  ministerofintelligence = { type = 9 id = 155047 } # Ali Muhammed Khan
  chiefofstaff           = { type = 9 id = 155051 } # Wazir Akbar Khan
  chiefofarmy            = { type = 9 id = 155055 } # Asadullah Seraj Khan
  chiefofnavy            = { type = 9 id = 155059 } # Muhammed Hashim
  chiefofair             = { type = 9 id = 155067 } # Muhammed Zahir
  dormant_ministers      = { 155003 155006 155050 155001 155002 155004 155005 155007 155008 155009 155010 155016 155023 155024 155029 155036 155044 155045 155054 155066 }

  landunit = {
    id       = { type = 10000 id = 1 }
    name     = "The Center Military District"
    location = 2171
    division = {
      id             = { type = 10000 id = 2 }
      name           = "Royal Household Division"
      type           = infantry
      model          = 9
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 100
    }
    division = {
      id             = { type = 10000 id = 3 }
      name           = "1st Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 4 }
      name           = "2nd Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 5 }
      name           = "4th Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 6 }
    name     = "The South Military District"
    location = 2171
    division = {
      id             = { type = 10000 id = 7 }
      name           = "5th Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 8 }
      name           = "6th Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
    division = {
      id             = { type = 10000 id = 9 }
      name           = "7th Infantry Division"
      type           = infantry
      model          = 8
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 10 }
    name     = "Farah Military District"
    location = 2169
    division = {
      id             = { type = 10000 id = 11 }
      name           = "Farah Cavalry"
      type           = cavalry
      model          = 8
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 10000 id = 12 }
    name     = "Ghazni Military District"
    location = 2171
    division = {
      id             = { type = 10000 id = 13 }
      name           = "Ghazni Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 14 }
    name     = "Kandahar Military District"
    location = 2169
    division = {
      id             = { type = 10000 id = 15 }
      name           = "Kandahar Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 16 }
    name     = "Herat Military District"
    location = 2172
    division = {
      id             = { type = 10000 id = 17 }
      name           = "Herat Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 18 }
    name     = "Turkestan Military District"
    location = 2168
    division = {
      id             = { type = 10000 id = 19 }
      name           = "Turkestan Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 20 }
    name     = "Kadaghan & Badakhchan Military District"
    location = 2170
    division = {
      id             = { type = 10000 id = 21 }
      name           = "Kadaghan & Badakhchan Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 22 }
    name     = "Maymeneh Military District"
    location = 2172
    division = {
      id             = { type = 10000 id = 23 }
      name           = "Maymeneh Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 10000 id = 24 }
    name     = "The East Military District"
    location = 2170
    division = {
      id             = { type = 10000 id = 25 }
      name           = "The East Mixed Infantry"
      type           = infantry
      model          = 8
      extra          = cavalry_brigade
      brigade_model  = 5
      strength       = 20
    }
  }
}

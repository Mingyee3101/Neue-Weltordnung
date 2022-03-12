##############################
# Country definition for SIK #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SIK
  puppet             = UPE
  name               = SIK44
  flag_ext           = _eastturkestan
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1281 # Urumqi
  dissent            = 40
  manpower           = 50
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 5000
  supplies       = 2000
  money          = 10

  diplomacy = {
    relation = { tag = CHC value = 40 }
    relation = { tag = SOV value = 50 }
    relation = { tag = TAN value = 50 }
    relation = { tag = CHI value = -10 }
  }
  SpyInfo                = { country = "SIK" NumberOfSpies = 4 }

  nationalprovinces      = { 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 }
  ownedprovinces         = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }
  controlledprovinces    = { 1273 1274 1275 1276 1277 1279 1280 1281 1282 }

  techapps               = { 4500 4510 4520 4530 2860 2290 7600 7610 1010 1020 1030 1040 1050 1060 1070 1080 1910 1920 1930 1940 1950 1960 13060 13070 13080 1310 1320 1330 1340 5700 6500 6510 6530 6910 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 1100 1090 1160 1170 1180 1190 1200 1350 1360 1370 1380 1970 1830 1840 1850 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
     democratic        = 3 
     political_left    = 4 
     freedom           = 2 
     free_market       = 1
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 1
  }
  headofstate            = { type = 9 id = 420100 } # Ali Khan Ture
  headofgovernment       = { type = 9 id = 420101 } # Ehmetjan Qasim
  foreignminister        = { type = 9 id = 420011 } # Isa Yusuf Alptekin
  armamentminister       = { type = 9 id = 420012 } # A.V. Fedyunskij
  ministerofsecurity     = { type = 9 id = 420015 } # Ishakjan Monhakiyev
  ministerofintelligence = { type = 9 id = 420016 } # Zhang Xiliang
  chiefofstaff           = { type = 9 id = 420019 } # Yol Bars
  chiefofarmy            = { type = 9 id = 420020 } # Yol Bars
  chiefofnavy            = { type = 9 id = 420009 } # Sa Zhenbing
  chiefofair             = { type = 9 id = 420010 } # Piotr Orlov

  landunit = {
    id       = { type = 25600 id = 1 }
    name     = "Xin'jiang Jüntuan 1"
    location = 1281
    division = {
      id             = { type = 25600 id = 2 }
      name           = "1 Xin'jiang Shi"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 25600 id = 3 }
      name           = "7 Xin'jiang Lü"
      type           = militia
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 25600 id = 4 }
      name           = "8 Xin'jiang Lü"
      type           = militia
      model          = 5
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 25600 id = 5 }
    name     = "Xin'jiang Jüntuan 2"
    location = 1281
    division = {
      id             = { type = 25600 id = 6 }
      name           = "5 Xin'jiang Shi"
      type           = infantry
      model          = 8
      strength       = 80
    }
    division = {
      id             = { type = 25600 id = 7 }
      name           = "9 Xin'jiang Lü"
      type           = militia
      model          = 5
      strength       = 80
    }
    division = {
      id             = { type = 25600 id = 8 }
      name           = "3 Xin'jiang Lü"
      type           = militia
      model          = 5
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 25600 id = 9 }
    name     = "Xin'jiang Jüntuan 2"
    location = 1281
    division = {
      id             = { type = 25600 id = 10 }
      name           = "11 Xin'jiang Shi"
      type           = cavalry
      model          = 10
      strength       = 75
    }
    division = {
      id             = { type = 25600 id = 11 }
      name           = "13 Xin'jiang Lü"
      type           = cavalry
      model          = 10
      strength       = 75
    }
  }
}

##############################
# Country definition for MEN #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = MEN
  regular_id         = MON
  puppet             = MAN
  control            = MAN
  name               = "Mengjiang State"
  capital            = 1240 # Sili-yin Qota
  dissent            = 25
  manpower           = 100
  # Resource Reserves
  energy         = 200
  metal          = 200
  rare_materials = 100
  oil            = 200
  supplies       = 500
  money          = 10
  free = {
    ic             = 5
    energy         = 14
    metal          = 9
    rare_materials = 3
    oil            = 2
  }

  diplomacy = {
    relation = { tag = GER value = 100 }
    relation = { tag = CHI value = -200 }
    relation = { tag = CHC value = -200 }
    relation = { tag = MAN value = 200 access = yes }
    relation = { tag = SIA value = 75 }
    relation = { tag = SIK value = -175 }
    relation = { tag = USA value = 10 }
  }
  SpyInfo                = { country = "MEN" NumberOfSpies = 2 }

  nationalprovinces      = { 1240 1239 1238 1270 }
  ownedprovinces         = { 1240 }
  controlledprovinces    = { 1240 }
  claimedprovinces       = { 1120 1121 1122 1123 1124 1125 }

  techapps               = { 4010 2150 2290 1010 1190 6010 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 8
  }

  landunit = {
    id       = { type = 22700 id = 1 }
    name     = "Di'1 Mengkukuo Jun"
    location = 1240
    division = {
      id             = { type = 22700 id = 2 }
      name           = "1. Mengkukuo Hoheishidan"
      type           = militia
      model          = 6
    }
    division = {
      id             = { type = 22700 id = 3 }
      name           = "3. Mengkukuo Kiheishidan"
      type           = cavalry
      model          = 6
    }
    division = {
      id             = { type = 22700 id = 4 }
      name           = "4. Mengkukuo Kiheishidan"
      type           = cavalry
      model          = 9
    }
    division = {
      id             = { type = 22700 id = 5 }
      name           = "Roppou Suiyuan shûsei butai"
      type           = militia
      model          = 5
      strength       = 10
    }
  }
}

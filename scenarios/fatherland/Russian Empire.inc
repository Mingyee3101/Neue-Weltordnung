##############################
# Country definition for U59 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U59
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1142 # Novosibirsk
  dissent            = 5
  manpower           = 50
  #ground_def_eff     = 0.1
  # Resource Reserves
  energy         = 360
  metal          = 180
  rare_materials = 90
  oil            = 100
  supplies       = 100
  money          = 50

  diplomacy = {
    relation = { tag = MON value = 50 }
    relation = { tag = SIB value = -50 }
    relation = { tag = SOV value = -50 }
  }
  SpyInfo                = { country = "U59" NumberOfSpies = 2 }

  nationalprovinces      = { 550 552 566 564 593 573 589 586 587 581 582 580 654 653 655 659 663 660 666 667 1134 553 551 549 560 565 535 534 536 537 541 539 557 562 559 561 542 546 547 556 555 563 558 577 575 574 588 585 583 579 652 650 651 657 661 669 665 668 656 658 688 545 543 548 676 677 570 572 1132 1133 1136 1137 1138 1139 1141 1142 1143 1144 1145 1156 1157 1069 1070 1166 1161 1163 1170 1176 1174 1175 1187 1188 1189 1186 1181 1182 1183 1184 1178 1180 1177 1179 1164 1165 1148 1155 1171 1152 1154 1135 1149 1150 1153 1129 1151 1128 1130 689 1126 1127 1131 687 671 569 554 567 568 576 584 678 682 571 679 578 670 675 683 664 674 690 672 673 680 681 684 685 686 544 1162 600 601 590 647 648 602 604 1140 501 498 1115 499 502 1147 1146 1158 1119 1167 1169 1168 1185 1190 1195 1194 1192 1196 1193 1191 1541 1542 700 699 698 692 697 691 642 643 644 645 649 662 }
  ownedprovinces         = { 1142 1143 1144 1145 1146 1147 }
  controlledprovinces    = { 1142 1143 1144 1145 1146 1147 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5320 5190 5600 5610 5620 5630 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2810 2820 2510 2520 2400 14000 14010 14020 14030 6500 6510 6530 6550 6590 6600 6620 6650 6670 6680 6690 6700 6710 6910 6900 6560 6030 6120 6110 4500 4510 4520 4530 4540 4550 4010 4020 4030 4300 4310 4320 4330 4340 4800 4810 4820 4700 4710 4600 4610 4620 4630 4120 4130 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 3
    free_market       = 3
    professional_army = 6
    defense_lobby     = 10
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 1110001 } # Kira I
  headofgovernment       = { type = 9 id = 1110002 } # Pavel Bermondt-Avalov
  foreignminister        = { type = 9 id = 1110003 } # Viktor M. Baydalakov
  armamentminister       = { type = 9 id = 1110004 } # Mikhail Tereshchenko
  ministerofsecurity     = { type = 9 id = 1110005 } # Boris Gershun
  ministerofintelligence = { type = 9 id = 1110006 } # Andrei Shkuro
  chiefofstaff           = { type = 9 id = 1110007 } # Pavel Bermondt-Avalov
  chiefofarmy            = { type = 9 id = 1110008 } # Pavel Bermondt-Avalov
  chiefofnavy            = { type = 9 id = 1110009 } # Alexey Zaev
  chiefofair             = { type = 9 id = 1110010 } # Vyacheslav Tkachov

  landunit = {
    id       = { type = 23601 id = 1 }
    name     = "3-y Armeyskiy Korpus"
    location = 1142
    division = {
      id             = { type = 23601 id = 2 }
      name           = "2-ya Mobilnaya Diviziya"
      type           = motorized
      model          = 2
      strength       = 100
      experience     = 40
    }
    division = {
      id             = { type = 23601 id = 3 }
      name           = "11-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 60
    }
    division = {
      id             = { type = 23601 id = 4 }
      name           = "9-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 60
    }
  }
  landunit = {
    id       = { type = 23601 id = 5 }
    name     = "1-y Armeyskiy Korpus"
    location = 1142
    division = {
      id             = { type = 23601 id = 6 }
      name           = "7-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23601 id = 7 }
      name           = "14-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23601 id = 8 }
      name           = "3-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23601 id = 9 }
    name     = "2-y Armeyskiy Korpus"
    location = 1143
    division = {
      id             = { type = 23601 id = 10 }
      name           = "5-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23601 id = 11 }
      name           = "17-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      strength       = 80
      experience     = 20
    }
    division = {
      id             = { type = 23601 id = 12 }
      name           = "16-ya Pekhotnaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 11
      strength       = 80
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 23601 id = 16 }
    name     = "7-y Armeyskiy Korpus"
    location = 1144
    division = {
      id             = { type = 23601 id = 17 }
      name           = "3-ya Diviziya Opolcheniya"
      type           = militia
      model          = 5
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23601 id = 18 }
    name     = "8-y Armeyskiy Korpus"
    location = 1145
    division = {
      id             = { type = 23601 id = 19 }
      name           = "5-ya Diviziya Opolcheniya"
      type           = militia
      model          = 5
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23601 id = 20 }
    name     = "9-y Armeyskiy Korpus"
    location = 1146
    division = {
      id             = { type = 23601 id = 21 }
      name           = "7-ya Diviziya Opolcheniya"
      type           = militia
      model          = 5
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 40
    }
  }
  landunit = {
    id       = { type = 23601 id = 22 }
    name     = "6-y Armeyskiy Korpus"
    location = 1147
    division = {
      id             = { type = 23601 id = 23 }
      name           = "1-ya Diviziya Opolcheniya"
      type           = militia
      model          = 5
      extra          = artillery
      brigade_model  = 11
      strength       = 75
      experience     = 40
    }
  }

  airunit = { 
    id       = { type = 23601 id = 13 }
    name     = "Novo Vozdushnogo Komandovaniya"
    location = 1143
    base     = 1143
    division = {
      id             = { type = 23601 id = 14 }
      name           = "3-y Vozd. Otryad"
      type           = interceptor
      model          = 12
      strength       = 25
    }
    division = {
      id             = { type = 23601 id = 15 }
      name           = "1-y Vozd. Otryad"
      type           = multi_role
      model          = 9
      strength       = 25
    }
  }
}

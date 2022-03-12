##############################
# Country definition for U57 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U57
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 1191 # Vladivostok
  manpower           = 100
  # Resource Reserves
  energy         = 3000
  metal          = 3500
  rare_materials = 1000
  oil            = 300
  supplies       = 3000
  money          = 10
  transports     = 100
  escorts        = 2

  diplomacy = {
    relation = { tag = AST value = 65 }
    relation = { tag = BEL value = 65 }
    relation = { tag = BUL value = 50 }
    relation = { tag = SLO value = 50 }
    relation = { tag = ENG value = 85 }
    relation = { tag = U01 value = 85 }
    relation = { tag = GER value = 50 }
    relation = { tag = HOL value = 65 }
    relation = { tag = HUN value = 50 }
    relation = { tag = IRE value = 50 }
    relation = { tag = ITA value = 50 }
    relation = { tag = JAP value = 0 }
    relation = { tag = NZL value = 50 }
    relation = { tag = POR value = 50 }
    relation = { tag = ROM value = 50 }
    relation = { tag = SAF value = 50 }
    relation = { tag = SOV value = -50 }
    relation = { tag = SPA value = 35 }
    relation = { tag = SWE value = 50 }
    relation = { tag = USA value = 20 }
    relation = { tag = SIB value = -10 }
    relation = { tag = AXI value = 50 }
    relation = { tag = U59 value = 10 }
  }
  SpyInfo                = { country = "U57" NumberOfSpies = 5 }

  #nationalprovinces      = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 }
  nationalprovinces      = { 550 552 566 564 593 573 589 586 587 581 582 580 654 653 655 659 663 660 666 667 1134 553 551 549 560 565 535 534 536 537 541 539 557 562 559 561 542 546 547 556 555 563 558 577 575 574 588 585 583 579 652 650 651 657 661 669 665 668 656 658 688 545 543 548 676 677 570 572 1132 1133 1136 1137 1138 1139 1141 1142 1143 1144 1145 1156 1157 1069 1070 1166 1161 1163 1170 1176 1174 1175 1187 1188 1189 1186 1181 1182 1183 1184 1178 1180 1177 1179 1164 1165 1148 1155 1171 1152 1154 1135 1149 1150 1153 1129 1151 1128 1130 689 1126 1127 1131 687 671 569 554 567 568 576 584 678 682 571 679 578 670 675 683 664 674 690 672 673 680 681 684 685 686 544 1162 600 601 590 647 648 602 604 1140 501 498 1115 499 502 1147 1146 1158 1119 1167 1169 1168 1185 1190 1195 1194 1192 1196 1193 1191 1541 1542 700 699 698 692 697 691 642 643 644 645 649 662 }
  ownedprovinces         = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 }
  controlledprovinces    = { 1169 1168 1170 1176 1171 1174 1175 1188 1187 1185 1190 1195 1194 1192 1196 1193 1191 1189 1186 }

  techapps               = { 5810 5820 5050 5830 5060 5070 5800 5080 5090 5700 5710 5010 5020 5030 5310 54010 54020 54030 5316 5326 5327 5350 5190 5600 5610 5620 5630 5920 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2860 2870 2880 2020 2150 2290 2300 2310 2900 2910 2920 2930 2940 2320 2800 2450 21180 21190 21200 2460 2810 2820 2510 2520 2400 2410 14000 14010 14020 14030 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 6390 6400 6420 6410 6430 3010 3020 3030 3040 3050 3210 3220 3230 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3900 3810 3820 8010 8020 8040 8050 8070 8080 8100 8200 8500 4500 4510 4520 4530 4540 4550 4010 4020 4030 4600 4610 4620 4630 4120 4130 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010 9040 9050 9090 9100 9110 9120 9130 9140 9190 9230 }
  inventions             = { 3000027 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 3
    freedom           = 3
    free_market       = 4
    professional_army = 6
    defense_lobby     = 6
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 1100001 } # Konstantin Rodzaevsky
  headofgovernment       = { type = 9 id = 1100002 } # Lev Okhotin
  foreignminister        = { type = 9 id = 1100003 } # Konstantin Rodzaevsky
  armamentminister       = { type = 9 id = 1100004 } # Ivan Mikhailov
  ministerofsecurity     = { type = 9 id = 1100005 } # Alexei Baksheev
  ministerofintelligence = { type = 9 id = 1100011 } # Anastasy Vonsyatsky
  chiefofstaff           = { type = 9 id = 1100007 } # Konstantin Rodzaevsky
  chiefofarmy            = { type = 9 id = 1100008 } # Lev Vlasyevsky
  chiefofnavy            = { type = 9 id = 1100009 } # Lev Okhotin
  chiefofair             = { type = 9 id = 1100010 } # Boris Shepunov

  landunit = {
    id       = { type = 10848 id = 999 }
    name     = "Zabaikalskyi Voennyi Okrug"
    location = 1169
    division = {
      id             = { type = 10848 id = 998 }
      name           = "114-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 1545 }
    name     = "18-i Sibirskyi Korpus"
    location = 1176
    division = {
      id             = { type = 10848 id = 1547 }
      name           = "69-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 1
      extra          = medium_armor
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 318 }
    name     = "25-ya Armiya"
    location = 1190
    division = {
      id             = { type = 10848 id = 319 }
      name           = "92-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 320 }
      name           = "32-ya Saratovskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 321 }
      name           = "40-ya Bogucharskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 322 }
      name           = "105-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 304 }
    name     = "1-ya Armiya"
    location = 1196
    division = {
      id             = { type = 10848 id = 997 }
      name           = "21-ya Permskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 11
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 996 }
      name           = "59-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      extra          = artillery
      brigade_model  = 8
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 312 }
      name           = "8-ya Dalnevostochnaya Kavaleriiskaya Diviziya"
      type           = cavalry
      model          = 11
      extra          = light_armor_brigade
      brigade_model  = 3
      strength       = 60
    }
  }
  landunit = {
    id       = { type = 10848 id = 1541 }
    name     = "30-i Mekhanizirovannyi Korpus"
    location = 1196
    division = {
      id             = { type = 10848 id = 1544 }
      name           = "239-ya Motostrelkovaya Diviziya"
      type           = motorized
      model          = 1
      extra          = medium_armor
      brigade_model  = 1
      strength       = 80
    }
  }
  landunit = {
    id       = { type = 10848 id = 296 }
    name     = "Dalnevostochnyi Front"
    location = 1191
    division = {
      id             = { type = 10848 id = 297 }
      name           = "Dalnevostochnyi Front"
      type           = hq
      model          = 4
      extra          = anti_air
      brigade_model  = 0
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 298 }
      name           = "35-ya Sibirskaya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 299 }
      name           = "66-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 300 }
      name           = "78-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 301 }
    name     = "Dalnevostochnyi Front"
    location = 1191
    division = {
      id             = { type = 10848 id = 302 }
      name           = "79-ya Strelkovaya Diviziya"
      type           = infantry
      model          = 9
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 303 }
      name           = "101-ya Strelkovaya Diviziya"
      type           = bergsjaeger
      model          = 9
      strength       = 70
    }
  }
  landunit = {
    id       = { type = 10848 id = 305 }
    name     = "CR. Armeyskiy Corpus"
    location = 1189
    division = {
      id             = { type = 10848 id = 306 }
      name           = "Iaya brigada Cherno-rubashechnikow 'Aleksandr Kolchak'"
      type           = militia
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 307 }
      name           = "IIaya brigada Cherno-rubashechnikow 'Ogni woshodyshego solntza'"
      type           = militia
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 308 }
      name           = "IIIaya brigada Cherno-rubashechnikow 'Wolki Sibiri'"
      type           = militia
      model          = 6
      strength       = 70
    }
    division = {
      id             = { type = 10848 id = 309 }
      name           = "IIaya brigada Cherno-rubashechnikow 'Ogni woshodyshego solntza'"
      type           = militia
      model          = 6
      strength       = 70
    }
  }

  navalunit = {
    id       = { type = 10848 id = 5515 }
    name     = "Tikhookeanskiy Flot"
    location = 1191
    base     = 1191
    division = {
      id             = { type = 10848 id = 6001 }
      name           = "1. Divizion Esmintsev"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 6015 }
      name           = "2. Divizion Esmintsev"
      type           = destroyer
      model          = 3
    }
    division = {
      id             = { type = 10848 id = 6021 }
      name           = "1. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6022 }
      name           = "2. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6023 }
      name           = "3. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6024 }
      name           = "4. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6025 }
      name           = "5. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 6026 }
      name           = "6. Divizion Podlodok"
      type           = submarine
      model          = 4
    }
    division = {
      id             = { type = 10848 id = 5514 }
      name           = "1. Transportnaya Flotiliya"
      type           = transport
      model          = 2
    }
  }

  airunit = { 
    id       = { type = 10848 id = 7004 }
    name     = "Dal'nii Vostok Vozdushnogo Komandovaniya"
    location = 1191
    base     = 1191
    division = {
      id             = { type = 10848 id = 7005 }
      name           = "29.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7006 }
      name           = "79.IABR"
      type           = interceptor
      model          = 7
      strength       = 80
    }
    division = {
      id             = { type = 10848 id = 7007 }
      name           = "31.TBABR"
      type           = tactical_bomber
      model          = 5
      strength       = 50
    }
  }
}
